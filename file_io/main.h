#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of file
 * @letters: number of letters to read
 * Return: number of bytes printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif
