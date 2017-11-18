#include <stdio.h>

int main ()
{

    int a[1000] = {0};
    char get;
    get = getchar();
    while (get!= '\n')
    {
        if (get >= 'A' && get <= 'Z')
            get = get + 32;
            a[get]++;
            get = getchar();
    }

    int m = -1;
    int k;
    for ( int i='a';i<= 'z';i++)
        if ( a[i] > m)
        {
            m = a[i];
            k = i;
        }

        printf("%c %d\n",k,a[k]);
        return 0;
}

