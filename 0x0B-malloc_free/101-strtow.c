#include "main.h"

/**
 * **strtow - Entry point
 *
 * Description: Splits a string into words
 * @str: Pointer to string to be split
 * Return: Returns pointer to an array of strings,
 * if failed to allocate memory, returns NULL.
 */

char **strtow(char *str)
{
	int x, height, ptr[1000];
	char **arr;

	height = word_count(str);
	word_len(str, ptr);

	if (str == NULL || *str == 0 || height == 0)
		return (NULL);

	arr = (char **)malloc(sizeof(char *) * height + 1);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		*(arr + x) = (char *)malloc(sizeof(char) * (ptr[x] + 1));
		if (*(arr + x) == NULL)
			return (NULL);
	}

	return (str_to_w(str, height, arr));
}

/**
 * str_to_w - Seperates all the words in a string into new strings.
 * @str: Pointer to original string.
 * @height: Number of words to be made into strings.
 * @arr: Pointer to pointers to address of each new string.
 * Return: Pointer to pointers to new strings.
 */
char **str_to_w(char *str, int height, char **arr)
{
	int x, y, w, j = 0;

	for (x = 0, w = NO_WORD; x < height; x++, w = NO_WORD)
	{
		for (y = 0; 1; j++)
		{
			if ((*(str + j) == ' ' || *(str + j) == '\0') && w)
			{
				*(*(arr + x) + y) = '\0';
				j++;
				break;
			}

			if (*(str + j) == ' ' && !w)
				continue;

			if (*(str + j) != ' ')
			{
				*(*(arr + x) + y) = *(str + j);
				y++;
				w = WORD;
			}
		}
	}
	*(*(arr + (x - 1)) + y) = '\0';
	*(arr + height) = NULL;

	return (arr);
}

/**
 * word_len - Gets the length of a each word in a string.
 * @str: Pointer to string for which words should be counted.
 * @ptr: Pointer to array of words' lengths.
 * Return: No return value.
 */
void word_len(char *str, int *ptr)
{
	int i, w, j = 0;

	for (i = 0; str[i]; i++)
		;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (w = 0; 1; i++, w++)
			{
				if (str[i] == ' ' || str[i] == '\0')
				{
					ptr[j++] = w;
					break;
				}
			}
		}
	}
}

/**
 * word_count - Counts the number of words in a string.
 * @str: Pointer to string.
 * Return: Returns the number of words in the string.
 */
int word_count(char *str)
{
	int i, word = NO_WORD, count = 0;

	for (i = 0; (*(str + i)); i++)
	{
		if (*(str + i) == ' ')
		{
			word = NO_WORD;
		}
		else if (!word)
		{
			word = WORD;
			count++;
		}
	}
	return (count);
}
