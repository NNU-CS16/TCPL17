#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int n,m,i;
    int flag = 0;
    int a[101];
    cin>>n>>m;
    m = n - m%n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=m;i<n;i++)
        if(flag)
            cout<<' '<<a[i];
        else
        {
            cout<<a[i];
            flag = 1;
        }
    for(i=0;i<m;i++)
        if(flag)
            cout<<' '<<a[i];
        else
        {
            cout<<a[i];
            flag = 1;
        }    
    system("pause");
    return 0;
}
