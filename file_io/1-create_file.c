#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: a pointer to the buffer containing the data to be written
 *
 * Return: (1) on success, (-1) on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fp, len = 0, fp_write;

	if (filename  == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fp_write = write(fp, text_content, len);
	if (fp_write == -1)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
