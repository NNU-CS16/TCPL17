#include <iostream> 
using namespace std;
int main()
{
    int M;
    int N;
    cin >> M >> N;
    int *Snum = new int[11000];
    int k = 0;
    int i;
    int j;
    Snum[k++] = 2;
    for (i = 3; i <= 110000; i++)
    {
        for (j = 0; j*j < k; j++)
        {
            if (i%Snum[j] == 0)break;
        }
        if (j*j >= k)
        {
            Snum[k++] = i;
        }
    }
    int count = 0;
    for (i = M-1; i < N; i++)
    {
        count++;
        if (count % 10 == 0)
        {
            cout <<Snum[i]<<endl;
            continue;
        }
        if (i == N - 1)
        {
            cout << Snum[i] << endl;
            break;
        }
        cout << Snum[i] << " ";
    }
    return 0;
}
























