#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create
 * @text_content:  pointer of the text_content
 * Return: 1 on success, -1 on failure 
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
