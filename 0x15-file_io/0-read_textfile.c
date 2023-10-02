#include "main.h"

/**
 * read_textfile - read file and print it sto stdout.
 * @filename: file to read.
 * @letters: charater bytes to read.
 * Return: returns number of characters read or zero if fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_w;
	char *buffer;

	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);


	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}


	num_w = write(STDOUT_FILENO, buffer, num_read);
	if (num_w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (num_read);

}
