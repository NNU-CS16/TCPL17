 #include<stdio.h>
 #include<string.h>

 int count_substr(const char *str, const char* substr)
 {
  int len;
  int c = 0;
  int n = 0;
  char *temp = (char*)substr;
  len = strlen(substr);
  while (*str != '\0')
  {
	if (*str== *temp)
	{
	   while ((*str == *temp) && (*str != '\0') && (*temp != '\0'))
	   {
	        ++n;
		++str;
		++temp;
           }
	   if (n == len)
	   {
	       ++c;
	   }
	   n = 0;
	   temp = (char*)substr;
	}
	else
	{
	    ++str;
	}
  }
  return c;
 }

 int main()
 {
  char str[50];
  char substr[50];
  int n;
  printf ("请输入str:");
  scanf ("%s", str);
  printf ("请输入substr:");
  scanf ("%s", substr);
  n = count_substr(str, substr);
  printf("%d\n", n);
  return 0;
 }
