#include<stdio.h>
int dp[];
void solve()
{
 int n,k;
 scanf("%d%d",&n,&k);
 for(int i=1;i<=k;i++)
    dp[i]=1;
 for(int i=2;i<=n;i++)
   {
    for(int j=1;j<=k&&j<=i;j++)
       {
        dp[i]=(dp[i]+dp[i-j])%100003;
       }
   }
  printf("%d\n",dp[n]);
}
int main()
{
 solve();
 return 0;
}
