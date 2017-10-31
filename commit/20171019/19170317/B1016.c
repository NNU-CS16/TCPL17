#include<stdio.h>
int main()
{
    int A,B,DA,DB;
    printf("请依次给出A,DA,B,DB:");
    scanf("%d%d%d%d",&A,&DA,&B,&DB);
    int pA=0,pB=0;
    while(A)
    {
      if(A%10==DA)
        pA=pA*10+DA;
      A/=10;
    }
    while(B)
    {
      if(B%10==DB)
        pB=pB*10+DB;
      B/=10;
    }
    printf("%d\n",pA+pB);

    return 0;
}
