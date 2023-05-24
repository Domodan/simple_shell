/**
 * *_memset - The function fills memory with a constant byte
 *
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to fill in memory
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
