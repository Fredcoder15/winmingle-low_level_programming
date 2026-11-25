
#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void write_error(char *str);
void write_number(unsigned int number);
void write_number(unsigned long long number, unsigned int base, int width);

#endif
