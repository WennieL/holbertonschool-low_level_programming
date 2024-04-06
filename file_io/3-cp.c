#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void close_file(int fd);

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor to be closed
 *
 * description: This function closes the file descriptor specified by 'fd'.
 *              If the closing operation fails, an error message is printed
 *              to the standard error stream, and the program exits with
 *              exit code 100.
 */

void close_file(int fd)
{
	int cf;

	cf = close(fd);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents from a file to another file.
 * @argc: the number of arguments supplied to the program.
 * @argv: an array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, fd_read, fd_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	file_from = open(argv[1], O_RDONLY);
	fd_read = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || fd_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		fd_write = write(file_to, buffer, fd_read);
		if (file_to == -1 || fd_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		fd_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (fd_read > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
