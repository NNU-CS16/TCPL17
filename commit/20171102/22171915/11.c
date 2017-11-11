  #include<stdio.h>
  #include<string.h>
  void reverse(char* str);

  int main()
  {
	 char str[100];
	 puts("请输入字符串:");
	 gets(str);
	 reverse(str);
	 printf("%s\n",str);
	 return 0;
  }

  void reverse(char* str)
  {
  char s[100];
  strcpy(s, str);
  int len = strlen(s);
  for (int i = 0; i < len; i++)
		str[i] = s[len-i-1];
  }
