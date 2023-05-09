#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: int (length of string)
*/
int _strlen(char *s)
{
	int lg = 0;

	if (!s)
		return (0);

	while (*s++)
		lg++;
	return (lg);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t s = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (length)
		s = write(fd, text_content, length);
	close(fd);
	return (s == length ? 1 : -1);
}
