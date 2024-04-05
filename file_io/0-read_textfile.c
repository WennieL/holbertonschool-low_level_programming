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
{
	int fp;
	char *buffer;
	ssize_t fp_read, fp_write;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}

	fp_read = read(fp, buffer, letters);
	if (fp_read == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}

	fp_write = write(STDOUT_FILENO, buffer, fp_read);
	if (fp_write != fp_read)
	{
		free(buffer);
		close(fp);
		return (0);
	}

	free(buffer);
	close(fp);
	return (fp_read);
}
