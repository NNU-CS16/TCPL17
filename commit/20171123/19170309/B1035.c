#include<stdio.h>
#include<math.h>
int* Mergesort(int A[],int B[],int i,int n);
void Mergesortsort(int A[],int B[],int left,int mid,int right);
void copy(int A[],int B[],int n);
int *Insertsort(int A[],int j,int n);

int main()
{
int n,i,j=0,t;
scanf("%d",&n);
int mbef[n],ibef[n],mercopy[n],wait[n];
int *mer,*ins,*Mer;
for(i=0;i<n;i++)
scanf("%d",mbef+i);
for(i=0;i<n;i++)
scanf("%d",wait+i);
for(i=0;i<n;i++)
ibef[i]=mbef[i];
mer=mbef;
ins=ibef;
while(j<n)
{
ins=Insertsort(ins,j,n);
for(i=0;i<n;i++)
{if(wait[i]!=ins[i])break;}
if(i==n)
{
printf("Insertion sort\n");
ins=Insertsort(ins,j+1,n);
for(t=0;t<n;t++)
printf("%d ",ins[t]);
break;
}
else
j++;
}
for(j=0;pow(2,j)<n;j++)
{
Mer=Mergesort(mer,mercopy,j,n);
for(i=0;i<n;i++)
{if(wait[i]!=Mer[i])break;}
if(i==n)
{
printf("Merge Sort\n");
Mer=Mergesort(mer,mercopy,j+1,n);
for(t=0;t<n;t++)
printf("%d ",Mer[t]);
break;
}
}

printf("\n");

return 0;
}

int* Mergesort(int A[],int B[],int i,int n)
{
int len=pow(2,i);
int t,min1,min2;
for(t=0;t<n;t=t+2*len)
{
min1=(t+len)<n?(t+len):n;
min2=(t+2*len)<n?(t+2*len):n;
Mergesortsort(A,B,t,min1,min2-1);
}
copy(A,B,n);
return A;
}

void Mergesortsort(int A[],int B[],int left,int mid,int right)
{
int i=left,j=mid,k;
for(k=left;k<=right;k++)
{
if(i<mid&&(j>right||A[i]<A[j]))
{B[k]=A[i];i++;}
else
{B[k]=A[j];j++;}
}
}
void copy(int A[],int B[],int n)
{
int i;
for(i=0;i<n;i++)
A[i]=B[i];
}

int* Insertsort(int A[],int j,int n)
{
int i;
int temp=A[j+1];
for(i=j;i>=0;i--)
{
if(A[i]>temp)
{A[i+1]=A[i];A[i]=temp;continue;}
}
return A;
}
