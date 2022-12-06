#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the file
 * @letters: numbers of printed letters
 *
 * Return: numbers of letters and 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int tf;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	tf = open(filename, O_RDONLY);
	if (tf == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	rd = read(tf, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(tf);
	free(buf);
	return (wr);
}


