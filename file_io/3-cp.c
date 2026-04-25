#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFF_SIZE 1024

/**
 * main - copies file_from to file_to
 * @argc: argument count
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w, w_total;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	while ((r = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		w_total = 0;

		while (w_total < r)
		{
			w = write(fd_to, buffer + w_total, r - w_total);
			if (w == -1)
			{
				dprintf(2, "Error: Can't write to %s\n", argv[2]);
				close(fd_from);
				close(fd_to);
				exit(99);
			}
			w_total += w;
		}
	}

	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
