#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(const char *s);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);

#endif /* _MAIN_H_ */
