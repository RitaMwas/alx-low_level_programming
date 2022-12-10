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
	int fd, check, len = 0;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	check = read(fd, buff, letters);
	if (check == -1)
		return (0);

	len = write(STDOUT_FILENO, buff, check);
	close(fd);
	return (len);
}
