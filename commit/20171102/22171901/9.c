#include <stdio.h>
int is_int_pal (int n);
int main()
{
    int n;
    printf ("Input the value of n:");
    scanf ("%d", &n);
    printf ("%d\n",is_int_pal(n));
    return 0;
}


int is_int_pal (int n)
{
    int temp , ge , sum=0;
    temp = n;
    while (temp != 0)
    {
      ge = n % 10;
      sum = sum * 10 + ge;
      temp = temp / 10;
    }
    int flag;
    if (sum = n)
       flag = 0;
    else 
       flag = -1;
    return flag;
}



