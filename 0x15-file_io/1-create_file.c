#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int len;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fp, text_content, strlen(text_content));
		if (len == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
