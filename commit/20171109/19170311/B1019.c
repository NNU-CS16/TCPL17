#include<stdio.h>
int trans(int ,char );
int main(void)
{
    int N,M;
    scanf("%d",&N);
    while( N != 6174 )
    {
     M = trans(N,'I') - trans(N,'D');
     printf("%04d - %04d = %04d\n",trans(N,'I'),trans(N,'D'),M);
     if (M == 0)
     break;
     N = M;
    }

    return 0;
}

int trans(int a,char b)
{
    int i,j;
    int s[4];
    for(i = 0; i < 4; i++)
    {
     s[i] = a % 10;
     a = a / 10;
    }
    
    for(i = 0; i < 3; i++){
      for(j = 3; j > i; j--){
        if (s[j - 1] < s[j]){
           int temp = s[j];
           s[j] = s[j - 1];
           s[j - 1] = temp;
           }
          }
        }
    if (b == 'D')
    return s[0] + s[1] * 10 + s[2] * 100 + s[3] * 1000;
    else
    return s[0] * 1000 + s[1] * 100 + s[2] * 10 + s[3];
}
