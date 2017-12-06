#include <vector>
#include <algorithm>
using namespace std;
 
int main()
 {
     int N;
     cin >> N;
     vector<int> a1(N+1);
     vector<int> a2(N+1);
     int idx1,idx2;
     for (int i = 0; i < N; i++)
         cin >> a1[i];
     for (int i = 0; i < N; i++)
         cin >> a2[i];
     for (idx1 = 0; a2[idx1] <= a2[idx1 + 1] && idx1 < N - 1; idx1++);
     for (idx2 = ++idx1; a1[idx2] == a2[idx2] && idx2 < N; idx2++);
 
     if (idx2 == N) 
     {
         cout << "Insertion Sort" << endl;
         sort(&a1[0], &a1[idx1+1]);
     }
     else
     {
         cout << "Merge Sort" << endl;
         int k = 1;
         bool flag = true; 
         while (flag)
         {
             flag = false;
             if (!equal(a1.begin(),a1.end(), a2.begin()))
                 flag = true;
 
             k *= 2;
             for (int i = 0; i < N / k; i++)
             {
                 sort(&a1[i*k], &a1[(i + 1)*k]);
             }
             for (int i = k*(N / k); i<N; i++)
             {
                 sort(&a1[k*(N / k)],&a1[N]);
             }
         }
     }
     cout << a1[0];
     for (int i = 1; i < N; i++)
         cout << " " << a1[i];
 
     return 0;
 }
