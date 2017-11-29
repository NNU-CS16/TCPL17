int my_strlen(char s[])
{
	int i;
	while(s[i])
	i++;
	return i;
}
main()
{
	char s[101];
	gets(s);
	printf("%d",my_strlen(s));
}
