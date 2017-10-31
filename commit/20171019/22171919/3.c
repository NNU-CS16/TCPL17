 #include <stdio.h>
  
  int main()
  {
      int n;
      scanf("%d", &n);
  
      if(n < 0) 
{
          printf("fu ");
          n = -n;
}
     int t=n,i=1;
     while(t > 9) 
{
         t=t/10;
         i=i*10;
}
     char *s[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
     int d;
     
          while(i>0) 
{
      d=n/i;
         printf("%s", s[d]);
         if(i>9) 
{
             printf(" ");
}
         else printf("\n");
         n=n%i;
         i=i/10;
}
 
     return 0;
}
