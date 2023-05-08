#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed,
 * or 0 if there was an error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;


if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
	return (0);

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
	return (0);

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

if (bytes_written == -1 || bytes_written != bytes_read)
	return (0);

free(buffer);
close(fd);

return (bytes_written);
}
