   #include<stdio.h>
   int main()
   {
     float a;
     int b;
     char c;
     float d;
     printf("分别输入按照浮点数1，整数，字符，浮点数2：");
     scanf("%f%d%c%f",&a,&b,&c,&d);
     printf("%c,%d,%.2f,%.2f\n",c,b,a,d);
     return 0;
    }




