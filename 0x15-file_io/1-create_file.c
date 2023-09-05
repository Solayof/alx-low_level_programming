#include "main.h"

/**
 * create_file - function that file.
 * @filename: name of file to create.
 * @text_content: content of the file.
 * Return: 1 if successfull and -1 if failed.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int num_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (*text_content != '\0')
		i++;


		num_w = write(fd, text_content, i);
		if (num_w == -1 || num_w != i)
		{
			close(fd);
			return (-1);
		}

	close(fd);
	return (1);
}
