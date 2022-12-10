#include "main.h"

/**
 * create_file - Entry point
 *
 * Description: A function that creates a file.
 * @filename: Name of file to create
 * @text_content: String to content file should contain.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t check = 0;

	if (filename == NULL)
		return (-1);

	/*Find length of content*/
	while (text_content[len] && text_content)
		len++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		check = write(fd, text_content, len);

	if (check == -1)
		return (-1);

	close(fd);
	return (1);
}
