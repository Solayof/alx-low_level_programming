#include "main.h"

/**
 * append_text_to_file - addd text to a file.
 * @filename: file to add txt to.
 * @text_content: text to add.
 * Return: 0 on success or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int num_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);


	if (!text_content)
	{
		close(fd);
		return (1);
	}

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
