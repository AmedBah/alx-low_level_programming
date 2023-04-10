#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * create_file - creates a file with the specified name and writes
 * the specified
 * text content to it. The file permissions are set to rw-------.
 * If the file already exists, it is truncated.
 *
 * @filename: the name of the file to create
 * @text_content: a NULL-terminated string to write to the file
 *
 * Return:On success, 1. On failure, -1.
 */

int create_file(const char *filename, char *text_content)
{
int file;
size_t len;
ssize_t ret;

if (filename == NULL)
	return (-1);

file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
	return (-1);

if (text_content != NULL)
{
	len = strlen(text_content);
	ret = write(file, text_content, len);
	if (ret == -1)
	{
		close(file);
		return (-1);
	}
}
close(file);
return (1);
}

