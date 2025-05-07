char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int amb = 0;

	for (amb = '\0'; amb < n; amb++)
	dest[amb] = src[amb];
	return (dest);
}
