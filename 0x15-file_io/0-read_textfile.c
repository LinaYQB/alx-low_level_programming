#include "main.h"

/**
 * read_textfile - reads a file & prints it to the POSIX stdout
 * @filename: name of the file
 * @letters: number of letters it should read
 * Return: number of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t s;
	char b[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	s = read(fd, &b[0], letters);
	s = write(STDOUT_FILENO, &b[0], s);
	close(fd);
	return (s);
}
