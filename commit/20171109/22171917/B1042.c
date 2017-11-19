#include<iostream>
#include<string>
using namespace std;

int main()
{
  string a;
  getline(cin,a);
  int b[26]={0};
  for(int i=0;i<a.length();i++)
  {
   if(a[i]>=97&&a[i]<=122)
    {
     b[a[i]-'a']++;
    }
   else if(a[i]>=65&&a[i]<=90)
        {
         b[a[i]+32-'a']++;
        }
}
   int max=b[0],p;
   for(int i=0;i<26;i++)
   {
    if(b[i]>max)
     {
      max=b[i];
      p=i;
     }
   }
   p=p+'a';
   cout<<(char)p<<' '<<max;
  return 0;
}  
