#include<iostream>  
#include<string>  
using namespace std;  
int main()  
{  
    int n;  
    string name[1001];  
    string no[1001];  
    int score[1001];  
    int max, min;  
    int maxno, minno;  
    name[0] = "Q_oneQ";  
    no[0] = "cp120";  
    score[0] = 100;  
    cin >> n;  
    for (int i = 1; i <= n; i++)  
    {  
        cin>>name[i]>>no[i]>>score[i];  
    }  
    max = score[1];  
    min = score[1];  
    for (int j = 1; j <= n; j++)  
    {  
        if (score[j] >= max)  
        {  
            max = score[j];  
            maxno = j;  
        }  
        if (score[j] <= min)  
        {  
            min = score[j];  
            minno = j;  
        }  
    }  
    cout<<name[maxno]<<" "<<no[maxno]<<endl;  
    cout << name[minno] << " " << no[minno] << endl;  
    return 0;  
}  
