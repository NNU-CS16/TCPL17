#include<stdio.h>
void print_hex(int a);
int main()
{
    int a;
    scanf("%d",&a);
    print_hex(a);
    return 0;
}

void print_hex(int a)
{
     int i,j;
     int arr[100];
     char spell[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
     for(i=0; ;i++)
      { arr[i]=a%16;

        a=a/16;
        if(a==0) break; }
     for(j=i;j>=0;j--)
         printf("%c",spell[arr[j]]);
}


