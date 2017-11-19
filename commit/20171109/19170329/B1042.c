  #include <stdio.h>
  #include <string.h>

  int main()
{
    char str[1000] = {0};
    int num[128] = {0};
    gets(str);
    int i ;
    int k = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; 
 
            num[ str[i] ]++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
           
            num[ str[i] ]++;
        }
    }

    int max = 0, max_i = 0;
    for(i = 97; i < 123; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
            max_i = i;
        }
    }
    printf("%c %d\n", max_i, max);

    return 0;
}
