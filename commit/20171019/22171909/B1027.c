#include<iostream>
using namespace std;
int main()
{
int num,i=1,sum=1,maxi;
char c;
cin>>num>>c;
if(num==1){
cout<<c<<endl<<0;
}
else{
while(sum<num){
i=i+2;
if(sum+2*i<=num){
sum=sum+2*i;
}
else{
i=i-2;
break;
}}
maxi=i;
for(i=maxi;i>1;i=i-2){
for(int j=1;j<=(maxi-i)/2;j++){
cout<<" ";
}
for(int j=1;j<=i;j++){
cout<<c;
}
cout<<endl;            
}
for(i=1;i<=maxi;i=i+2){
for(int j=1;j<=(maxi-i)/2;j++){
cout<<" ";
}
for(int j=1;j<=i;j++){
cout<<c;
}
cout<<endl;            
}
cout<<num-sum;
}
return 0}
