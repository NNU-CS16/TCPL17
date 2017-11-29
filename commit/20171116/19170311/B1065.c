 #include <stdio.h>
 int main()
 {
    int couple[100001] = {0};
    int i, N, ID1, ID2, M; 
    int count = 0;
    scanf ("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf ("%d %d", &ID1, &ID2);               
        couple[ID1] = ID2;
        couple[ID2] = ID1;
    }
    scanf ("%d", &M);
    for (i = 0; i < M; i++)
    {
        scanf ("%d", &ID1); 
        if (couple[ID1] != 0) 
        couple[ID1] = 0;
        else
        {
            couple[ID1] = -1;
            count++;
        }
    }
    for (i = 0; i < 100001; i++) 
        if (couple[i] > 0 && couple[couple[i]] == 0) 
        {
            couple[couple[i]] = -1;
            count++;
        }
    printf ("%d\n", count);       
    for (i = 0; i < 100001; i++) 
        if (couple[i] == -1)
        {
            printf ("%05d", i);
            count--;
            if (count != 0)
            printf (" ");            
        }
    printf ("\n");    
    return 0;
 }
