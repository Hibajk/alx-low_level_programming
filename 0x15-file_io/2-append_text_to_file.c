#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the content to be appended
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int cm;

	if (filename == NULL)
		return (-1);

	cm = open(filename, O_WRONLY | O_APPEND);
	if (cm == -1)
		return (-1);

	if (text_content != NULL && write(cm, text_content,
	strlen(text_content)) == -1)
	{
		close(cm);
		return (-1);
	}

	close(cm);
	return (1);
}
