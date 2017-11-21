 #include <stdio.h>
 
 int main()
 {
    int sum, i, a, j = 0, A, B, D;
    char n[1000];
    char m[100];
    scanf("%d %d %d", &A, &B, &D);
    sum = A + B;
    if (sum == 0)
    printf("0\n");
    for (i = 0; sum != 0; ++i)
    {
       if (sum == 1)
       {
         n[i] = sum % D;
         printf("%s",n);
       }
       else
       {
         a = sum % D;
         n[i] = a;
         sum /= D;
         ++i;
       }
     }   
    for (i = sum / D - 1; i >=0; --i)
    {
       m[j] = n[i];
       ++j;
    }
    printf("%s",m);
    printf("\n");
    return 0;
 }
