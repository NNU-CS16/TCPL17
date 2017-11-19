 #include <stdio.h>
 
 int main()
{
    int a[1000] = { 0 };
    char c;
    c = getchar();
    while ( c != '\n' )
    {
        if (c >= 'A' && c <= 'Z') 
		c += 32;
        a[c]++;
        c = getchar();
    }
    int max = -1, k;
    for ( int i = 'a'; i <= 'z'; i++ )
        if (a[i] > max)
        {
            max = a[i];
            k = i;
        }
    printf("%c %d\n", k, a[k]);
    return 0;
  
}
