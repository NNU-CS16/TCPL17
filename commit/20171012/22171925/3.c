#include <stdio.h>
int main()
{int a,n,i;
scanf("%d%d",&a,&n);
i=1;
while(i<n+1){
a=a*10+a;
i=i+1;

}
printf("%d\n",a);

return 0;
}

