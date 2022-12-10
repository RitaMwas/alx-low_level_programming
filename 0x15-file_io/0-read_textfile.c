#include "main.h"

/**
 * read_textfile - Entry point
 *
 * Description: Reads a text file and prints it to the POSIX standard output
 * @filename: String of file name.
 * @letters: Number of letters it should read and print
 * Return: Number of letters it could print or 0 if any error.
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd;
	ssize_t num_rd = 0, num_wr = 0;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}

	num_rd = read(fd, buff, letters);
	if (num_rd == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);

	return (num_wr);
}
