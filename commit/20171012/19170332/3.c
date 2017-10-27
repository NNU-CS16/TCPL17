     #include<stdio.h>
     int main()
     {
       
        int a,n;
        int  b,sum,t;   
        printf("请输入a和n的值:");
        scanf("%d%d",&a,&n);
        
        sum=0;
        b=1;
        t=a;
        for  (b=1;b<=n;b++)
          {   
             sum=sum+t;
             t=(t*10)+a;
          }

        printf("sum=%d\n",sum);
       
      return 0;
     
      }


