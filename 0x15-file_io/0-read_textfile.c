#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t r;
	ssize_t v;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	v = read(fd, buf, letters);
	r = write(STDOUT_FILENO, buf, v);

	free(buf);
	close(fd);
	return (r);
}
