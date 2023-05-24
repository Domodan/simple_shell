/**
 * *_strpbrk - The function searches a string for any of a set of bytes
 *
 * @s: source string
 * @accept: set of bytes to search
 *
 * Return: bytes that matches or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
