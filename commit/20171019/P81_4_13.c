#include<stdio.h>
#include<math.h>
int main()
{
<<<<<<< HEAD
  int n,i;
  printf("请输入n(n>3):");
  scanf("%d",&n);

  for(i=2;i<=sqrt(n);i++)
    if(n%i==0)
     break; 
    if(i<=sqrt(n))
     printf("%d不是素数\n",n);
    else
     printf("%d是素数\n",n);
 
     return 0;
}
    
     
    

=======
 int n,i,m;
 double k; 
 printf("Please input n(n>3):");
 scanf("%d",&n);

 k=sqrt(n);

 for(i=2;i<k;i++) 
   m=n%i;
 if(m==0) printf("%d is not a prime number\n",n);
 else printf("%d is a prime number\n",n);  


 return 0;
}
>>>>>>> 755beed3f7676521799800854faf05b61aea2c72
