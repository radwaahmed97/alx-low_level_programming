#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to filename.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure (file can not be created,
 *		file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int filedescript, w, r = 0;

	if (filename == NULL)
		return (-1);

	filedescript = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filedescript < 0)
		return (-1);
	if (text_content)
	{
		while (text_content)
			r++;
		w = write(filedescript, text_content, r);
		if (w != r)
			return (-1);
	}

	close(filedescript);
	return (1);
}
