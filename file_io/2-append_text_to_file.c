#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to a string containing the name
 *            of the file to be createdd
 * @text_content: A pointer to a string containing the text to write to
 *                the file. This string should be NULL-terminated.
 *
 * Return: (1) on success and (-1) on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, fp_write, len = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
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
