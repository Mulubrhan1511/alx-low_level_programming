#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@s: input string.
 *Return: the pointer to dest.
 */
char *cap_string(char *s)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
<<<<<<< HEAD
	while (!(s[i] >= 'a' && s[i] <= 'z')
	i++;
	if (s[i -1] == ' ' || s[i -1] == '\t' || s[i -1] == '\n' || s[i -1] == ',' || s[i -1] == ';' ||
	    s[i -1] == '.' ||
	    s[i -1] == '!' ||
	    s[i -1] == '?' ||
	    s[i -1] == '"' ||
	    s[i -1] == '(' ||
	    s[i -1] == ')' ||
	    s[i -1] == '{' ||
	    s[i -1] == '}' ||
	    i == 0)
		s[i] -= 32;
	i++;
=======
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == sep_words[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
>>>>>>> 8b7fca6327add40cf678bdce990aff390caaa2f1
	}
	return (s);
}
