#include <stdio.h>
int main()
{
    int couple[100001] = {0}, N, ID1, ID2, M, count = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d %d", &ID1, &ID2);
        ID1++; 
        ID2++;
        couple[ID1] = ID2;
        couple[ID2] = ID1;
    }
    scanf("%d", &M);
    for(int i = 0; i < M; i++)
    {
        scanf("%d", &ID1);
        ID1++;
        if(couple[ID1]) 
          couple[ID1] = 0;
        else            
        {
          couple[ID1] = -1;
          count++;
        }
    }
    for(int i = 0; i < 100001; i++) 
      if(couple[i] > 0 && !couple[couple[i]]) 
    {
        couple[couple[i]] = -1;
        count++;
    }
    printf("%d\n", count);
    for(int i = 0; i < 100001; i++) 
      if(couple[i] == -1)
        printf("%05d%c", i - 1, --count ? ' ' : '\0');
    return 0;
}
    
