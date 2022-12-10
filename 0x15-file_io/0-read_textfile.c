#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Entry point
 *
 * Description: reads a text file and prints it
 * to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: text file to be read
 * Return: The number of characters read and written, or 0 if any error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
