/**
 * *_strchr - The function locates a character in a string
 *
 * @s: src string
 * @c: character to locate
 *
 * Return: first occurrence of c or NULL if it's not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
