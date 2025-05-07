/*
* *_memset is to put b to s, b is a cons
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int amb;
for (amb = '\0'; amb <= n; amb++)
	s[amb] = b;
return (s);
}
