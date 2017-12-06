#include<stdio.h>
int count_Substr(const char* str, const char* substr)
{
    int m, n, k;
    int num = 0;
    for (m = 0; str[n] !=0; n++)
    {
        for(m = n; k=0; substr[k] == substr[m], k++, m++)
        if (substr[k+1] == '\0')
        {
            num++;
            break;
        }
    
    }
    return num;

}

int main()
{
    char str[100], substr[100];
    scanf("%s%s",str,substr);
    printf("%d",count_Substr(str, substr));
    return 0;
}
