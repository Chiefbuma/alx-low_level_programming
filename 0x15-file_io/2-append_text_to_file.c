#include "main.h"

/**
 * append_text_to_file - Appends
 * @filename: A pointer
 * @text_content: The string
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int h, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	h = open(filename, O_WRONLY | O_APPEND);
	k = write(h, text_content, len);

	if (h == -1 || k == -1)
		return (-1);

	close(h);

	return (1);
}

