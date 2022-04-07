#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: pointer of the file name
 * @letters:  is the number of letters it should read and print
 * Return: the actual number of letters if fail return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, letters);
	if (r == -1 || w == -1)
		return (0);
	close(fd);
	free(buf);
	return (r);
}
