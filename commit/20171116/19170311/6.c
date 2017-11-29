void k_reverse(char* str,int k)
{
char temp;
for (int i=k-1;i<strlen(str);i+=k)
    {
    temp=str[i-k+1];
    str[i-k+1]=str[i];
    str[i]=temp;
    }
}
