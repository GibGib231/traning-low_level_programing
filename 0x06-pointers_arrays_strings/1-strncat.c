char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int amb = 0;
	while(dest[i] != '\0'){
		i++;
	}

	 while (amb < n && src[amb] != '\0') {
		 dest[i + amb] = src[amb];
		 ab++;
	 }
	 dest[i + amb] = '\0';

	 return(dest);
}
