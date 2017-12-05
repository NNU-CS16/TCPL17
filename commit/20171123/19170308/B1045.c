#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int N, val;
  vector<int> list,order,prime;
  cin >> N;
  for (int i = 0; i < N; ++i)
  {
    cin >> val;
    list.push_back(val);
    order.push_back(val);
  }
  sort(order.begin(), order.end());
  int cnt = 0;
  for (int i = 0; i < N; ++i)
  {
    if (list[i] == order[i])
    {
      ++cnt;
      prime.push_back(order[i]);
    }
  }
  cout << cnt << endl;
  for (int i = 0; i < prime.size(); ++i)
  {
    cout << prime[i];
    if (i != prime.size() - 1)
    {
      cout << " ";
    }
    else
    {
      cout << endl;
    }
  }
  system("pause");
  return 0;

}
