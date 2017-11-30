#include<algorithm>
#include<iostream>
#include<math.h>
bool cmp(int a,int b)
{
    return a>b;
}
using namespace std;
int main()
{
    int n;
    cin>>n;

    int tem=sqrt(n);
    while(n%tem!=0)
    {
        tem--;
    }
    int x=tem,y=n/tem;
    int **m;
    m=new int*[x];
    for(int q=0;q<x;q++)
    {
        m[q]=new int[y];
    }
    for(int t1=0;t1<x;t1++)
    {
        for(int t2=0;t2<y;t2++)
        {
            m[t1][t2]=0;
        }
    }
    int* a=new int[n];
    for(int p=0;p<n;p++)
    {
        cin>>a[p];
    }
    sort(a,a+n,cmp);

    int flag=1;
    int x1=0,y1=0;
    for(int t=0;t<n;t++)
    {
        m[x1][y1]=a[t];
        switch(flag)
        {
            case 1:
                if(x1+1>=x || m[x1+1][y1]!=0)
                {
                    y1++;
                    flag=2;
                }
                else
                {
                    x1++;
                }
                break;
            case 2:
                if(y1+1>=y || m[x1][y1+1]!=0)
                {
                    x1--;
                    flag=3;
                }
                else
                {
                    y1++;
                }
                break;
            case 3:
                if(x1-1<0 || m[x1-1][y1]!=0)
                {
                    y1--;
                    flag=4;
                }
                else
                {
                    x1--;
                }
                break;
            case 4:
                if(y1-1<0 || m[x1][y1-1]!=0)
                {
                    x1++;
                    flag=1;
                }
                else
                {
                    y1--;
                }
                break;
            default:
                break;
        } 
    }
    for(int t1=0;t1<y;t1++)
    {
        cout<<m[0][t1];
        for(int t2=1;t2<x;t2++)
        {
            cout<<" "<<m[t2][t1];
        }
        cout<<endl;
    }
    return 0;
}
