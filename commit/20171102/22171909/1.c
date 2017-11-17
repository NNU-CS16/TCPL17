 #include <stdio.h>
 void triangle_judge(int a,int b,int c)
 {
  if(a+b>c && a+c>b && c+b>a)
  {
    if((a==b || b==c || c==a) && (a!=b || b!=c || c!=a))
    printf("等腰三角形");
    if(a==b && b==c)
    printf("等边三角形");
    if(a!=b && b!=c && c!=a)
    printf("普通三角形");}
    if (a+b<c || a+c<b || b+c<a)
    printf("无法构成三角形");
  }
 int main()
 {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    triangle_judge(a,b,c);
    return 0;
 }
