#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of the file
 * @text_content: written content
 *
 * Return: -1 for failure and 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int tf, letters, wr;

	if (filename == NULL)
	{
		return (-1);
	}

	tf = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	if (tf == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(tf, text_content, letters);

	if (wr == -1)
	{
		return (-1);
	}
	close(tf);
	return (1);
}

