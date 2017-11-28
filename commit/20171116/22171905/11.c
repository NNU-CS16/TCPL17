int strcmp(char* s1, char* s2)//s1>s2,返回1.s1==s2,返回0.s1<s2 返回-1
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	int i=0,j=0;
	while(1)
	{
		if(s1[i]>s2[j])    return 1;
		else if(s1[i]<s2[j]    return -1;
		else if(s1[i]==s2[j] && s1[i+1]=='\0' && s2[j+1]=='\0')
		return 0;
		else if(s1[i]==s[j] && s1[i+1]=='\0' && s2[j+1]!='\0')
		return -1;
		else if(s1[i]==s[j] && s1[i+1]!='\0' && s2[j+1]=='\0')
		return 1;
		i++;
		j++;
	 }
}
