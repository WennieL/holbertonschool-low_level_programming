#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void close_file(int fd);

/**
 * clos_file - closes file descriptors
 * @fd: the file descriptor to be closed
 */

close_file(int fd)
{
	int close;

	close = close(fd);

	if (close == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */

int main(argc, *argv[])
{
	int from_file, to_file, fd_read, fd_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	from_file = open(argv[1], O_RDONLY);
	fd_read = read(from_file, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | 0_TRUNC, 0664);

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

		fd_read = read(from_file, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (fd_read > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);
}
