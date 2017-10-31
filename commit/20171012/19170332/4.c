   #include<stdio.h>
   int main()
    {

       
        int sum,a,t;
   
        sum=0;
        a=1;
       
        t=a;
        for(a=1;a<=10;a++)
          {
              sum+=t;
              t=t*a;
          }
 
        printf("1! + 2! +... +10!的值=%d\n",sum);
      
        return 0;
     }
   
