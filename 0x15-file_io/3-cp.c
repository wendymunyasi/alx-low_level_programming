#include "main.h"
#include <stdio.h>

/* CHECK NOTES AT END OF MAIN FUNCTION AT THE BOTTOM */

/**
 * create_buffer - function that allocates 1024 bytes for a buffer.
 * @file: pointer to the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	/* if failed to create buffer */
	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - function that closes file descriptors.
 * @file_descriptor: file descriptor to be closed.
 *
 * Return: No return.
 */
void close_file(int file_descriptor)
{
	int cclose;

	cclose = close(file_descriptor);
	/* if closing the file failed */
	if (cclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: pointer to the number of arguments supplied to the program.
 * @argv: an array of character pointers listing all the arguments.
 *
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rread, wwrite;
	char *buffer; /* to read data from */

	if (argc != 3) /* if incorrect number of arguments */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	/* open file to copy data from in read only (first command line arg) */
	file_from = open(argv[1], O_RDONLY);
	/* read the data from it 1024 bytes at a time */
	rread = read(file_from, buffer, 1024);

	/* open the file to copy data to and truncate if it already exists */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || rread == -1)
		{	/* if openning or reading file failed */
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wwrite = write(file_to, buffer, rread);
		if (file_to == -1 || wwrite == -1)
		{	/* if openning or writing to file failed */
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		/* read the data from it 1024 bytes at a time */
		rread = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND); /* append data to it */
	} while (rread > 0);
	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * Usage - cp file_from file_to
 * if the number of argument is not the correct one, exit with code 97 and,
 * print Usage: cp file_from file_to, followed by a new line, on the POSIX,
 * standard error.
 * If file_to already exists, truncate it.
 * If file_from does not exist, or if you can not read it, exit with code,
 * 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by,
 * a new line, on the POSIX standard error where NAME_OF_THE_FILE is the,
 * first argument passed to your program.
 * If you can not create or if write to file_to fails, exit with code 99,
 * and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line,
 * on the POSIX standard error where NAME_OF_THE_FILE is the second argument,
 * passed to your program.
 * If you can not close a file descriptor , exit with code 100 and,
 * print Error: Can't close fd FD_VALUE, followed by a new line, on the,
 * POSIX standard error where FD_VALUE is the value of the file descriptor.
 * Permissions of the created file: rw-rw-r--. If the file already exists,
 * do not change the permissions.
 * You must read 1,024 bytes at a time from the file_from to make less,
 * system calls. Use a buffer.
 * You are allowed to use dprintf.
 */
