#include "main.h"

/**
 * read_textfile - a function that reads a text file and 
 *                 prints it to the POSIX standard output.
 * @filename: pointer pointes to the file
 * @letters: number of letters it could read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
