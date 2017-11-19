#include <iostream>
#include <math.h>
using namespace std;
int isprime( int n )
{
    int i;
    for( i = 2; i <= (int)sqrt((double)n); i++ )
        if ( n%i == 0)
          return 0;
    return 1;
}
int main()
{
    int i=2, j=0, n, m, k=0;
    cin>>n>>m;
    while ( true )
    {
        if ( isprime(i) )
        {
            j++;
            if ( j >= n && j < m )
            {
                k++;
                if ( k%10 == 0 )
                    cout << i << endl;
                else
                    cout << i << ' ';
            }
            if ( j == m )
            {
                cout << i << endl;
                break;
            }
         }
         i++;
    }
    return 0;
}
