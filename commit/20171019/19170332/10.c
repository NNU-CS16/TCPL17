#include<stdio.h>
#include<math.h>
int main()
 {
    float  a,b,c,z;
    printf("输入整数a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    z=fmod((pow (a,b)),c);
    printf("a^b mod c的值为：%lf\n",z);
    return 0;
 }
