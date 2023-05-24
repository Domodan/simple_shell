/**
 * _strlen - The function returns the length of a string
 *
 * @s: The string whose length is to be determined
 *
 * Return: Size of th string
 */
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	return (size);
}
