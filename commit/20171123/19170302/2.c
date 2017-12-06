#include <stdio.h>

int main()
{
        int n,m,j,i;
        scanf("%d%d%d%d",&n,&m,&j,&i);
        printf("%d",binInsert(n,m,j,i));
        return 0;
}

int binInsert(int n,int m,int j,int i)  
{  
            n |= (m << j);  
                return n;  
}  

