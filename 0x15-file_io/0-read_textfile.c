#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and then print TO STDOUT.
 * @filename: text file to BE readed
 * @letters: NUM of letters to BE readed
 * Return: w- actual NUM of bytes read and print
 * when function fail 0 OR filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
