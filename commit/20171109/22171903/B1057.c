#include <stdio.h>
#include <string.h>
void count(char word[100000]);
int main()
{
    char word[100000] = {0};
    gets(word);
    count(word);
    return 0;
}

void count(char word[100000])
{
    int o, r;
    int a = strlen(word);
    int n = 0, one = 0, zero = 0;
    for (o = 0; o < a; o++)
    {
	if (word[o] == 65 || word[o] == 97)
            n = n + 1;
        if (word[o] == 66 || word[o] == 98)
            n = n + 2;
        if (word[o] == 67 || word[o] == 99)
            n = n + 3;
        if (word[o] == 68 || word[o] == 100)
            n = n + 4;
        if (word[o] == 69 || word[o] == 101)
            n = n + 5;
        if (word[o] == 70 || word[o] == 102)
            n = n + 6;
        if (word[o] == 71 || word[o] == 103)
            n = n + 7;
        if (word[o] == 72 || word[o] == 104)
            n = n + 8;
        if (word[o] == 73 || word[o] == 105)
            n = n + 9;
        if (word[o] == 74 || word[o] == 106)
            n = n + 10;
        if (word[o] == 75 || word[o] == 107)
            n = n + 11;
        if (word[o] == 76 || word[o] == 108)
            n = n + 12;
        if (word[o] == 77 || word[o] == 109)
            n = n + 13;
        if (word[o] == 78 || word[o] == 110)
            n = n + 14;
        if (word[o] == 79 || word[o] == 111)
            n = n + 15;
        if (word[o] == 80 || word[o] == 112)
            n = n + 16;
        if (word[o] == 81 || word[o] == 113)
            n = n + 17;
        if (word[o] == 82 || word[o] == 114)
            n = n + 18;
        if (word[o] == 83 || word[o] == 115)
            n = n + 19;
        if (word[o] == 84 || word[o] == 116)
            n = n + 20;
        if (word[o] == 85 || word[o] == 117)
            n = n + 21;
        if (word[o] == 86 || word[o] == 118)
            n = n + 22;
        if (word[o] == 87 || word[o] == 119)
            n = n + 23;
        if (word[o] == 88 || word[o] == 120)
            n = n + 24;
        if (word[o] == 89 || word[o] == 121)
            n = n + 25;
        if (word[o] == 90 || word[o] == 122)
            n = n + 26;
    }
    while (n != 0)
    {
    	r = n % 2;
	if (r == 0)
	    zero++;
	else
	    one++;
	n = n>>1;
    }
    printf("%d %d\n", zero, one);
}
