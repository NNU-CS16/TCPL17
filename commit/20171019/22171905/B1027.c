#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
    int sum;
    char ch;
    cin >> sum >> ch;
    int nummax = sqrt((sum + 1) / 2);
    for (int i = nummax; i >= 1; i--)
    {
        for (int j = 0; j < 2 * nummax - 1; j++)
        {
            if (j> nummax - 2 + i)
                break;
            if (j < nummax-i)
                cout << ' ';
            else
                cout <<ch;
        }
        cout << endl;
    }
    for (int i = 2; i <= nummax; i++)
    {
        for (int j = 0; j < 2 * nummax - 1; j++)
        {
            if (j> nummax - 2 + i)
                break;
            if (j < nummax - i )
                cout << ' ';
            else
                cout << ch;
        }
        cout << endl;
    }
    cout << sum - (2 * nummax*nummax - 1) << endl;
    return 0;
