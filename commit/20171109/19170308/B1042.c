#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  string str;
  vector<int>num(26, 0);
  getline(cin, str);
  for (auto it : str)
  {
    char ch = tolower(it);
    if (ch <= 'z'&&ch >= 'a')
    {
      ++num[ch - 'a'];
    }
  }
  int  max_i = 0, max = 0;
  for (int i = 0; i < 26; ++i)
  {
    if (num[i] > max)
    {
      max_i = i;
      max = num[i];
    }
  }
  char out = 'a' + max_i;
  cout << out << " " << max<<endl;
  system("pause");
  return 0;
}
