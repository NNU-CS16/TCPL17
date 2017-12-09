#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int max, cout, endl, cin;
    int r[1000], s[1000], index[1000];
    int N = 0, i = 0, j = 0;
    cin >> N;
    for(i = 0; i < N; i++)
    {
	cin >> r[i];
	s[i] = r[i];
    }
    sort(s, s + N);
    for(i = 0; i < N; i++)
    {
	if (r[i] > max)
	    max = r[i];
	if (r[i] == s[i] && r[i] == max)
	    index[j++] = s[i];
    }
    cout << j << endl;
    for(i = 0; i < j - 1; i++)
	cout << index[i] << ' ';
    if (j > 0)
	cout << index[j - 1];
    else
	cout << endl;
    return 0;
}
	    
