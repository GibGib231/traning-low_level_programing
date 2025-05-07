char *string_toupper(char *str)
{

	int alg = 0;

	while (str[alg] != '\0')
	{
	if (str[alg] >= 'a' && str[alg] <= 'z')
	{
	str[alg] = str[alg] - 32;
	}
	alg++;
	}
	return (0);
}
