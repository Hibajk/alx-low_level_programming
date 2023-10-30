#include "main.h"

/**
 * create_file - create a simple file
 * @filename: name of the file
 * @text_content: content of the text
 *
 * Return: 1 sucess, -1 failed
 */

int create_file(const char *filename, char *text_content)
{
	int lp;
	int fem;

	if (filename == NULL)
		return (-1);

	lp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (lp == -1)
		return (-1);

	if (text_content != NULL)
	{
		fem = write(lp, text_content, strlen(text_content));
		if (fem == -1)
		{
			close(lp);
			return (-1);
		}
	}
	close(lp);
	return (1);
}
