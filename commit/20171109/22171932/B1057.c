#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    int a[26];
    int i, len, s, max, b, c;
    printf("请输入一段字符串：\n");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++)
       switch(str[i])
       {
             case 'a': s = s + 1; continue;
             case 'A': s = s + 1; continue;
             case 'b': s = s + 2; continue;
             case 'B': s = s + 2; continue;
             case 'c': s = s + 3; continue;
             case 'C': s = s + 3; continue;
             case 'd': s = s + 4; continue;
             case 'D': s = s + 4; continue;
             case 'e': s = s + 5; continue;
             case 'E': s = s + 5; continue;
             case 'f': s = s + 6; continue;
             case 'F': s = s + 6; continue;
             case 'g': s = s + 7; continue;
             case 'G': s = s + 7; continue;
             case 'h': s = s + 8; continue;
             case 'H': s = s + 8; continue;
             case 'i': s = s + 9; continue;
             case 'I': s = s + 9; continue;
             case 'j': s = s + 10; continue;
             case 'J': s = s + 10; continue;
             case 'k': s = s + 11; continue;
             case 'K': s = s + 11; continue;
             case 'l': s = s + 12; continue;
             case 'L': s = s + 12; continue;
             case 'm': s = s + 13; continue;
             case 'M': s = s + 13; continue;
             case 'n': s = s + 14; continue;
             case 'N': s = s + 14; continue;
             case 'o': s = s + 15; continue;
             case 'O': s = s + 15; continue;
             case 'p': s = s + 16; continue;
             case 'P': s = s + 16; continue;
             case 'q': s = s + 17; continue;
             case 'Q': s = s + 17; continue;
             case 'r': s = s + 18; continue;
             case 'R': s = s + 18; continue;
             case 's': s = s + 19; continue;
             case 'S': s = s + 19; continue;
             case 't': s = s + 20; continue;
             case 'T': s = s + 20; continue;
             case 'u': s = s + 21; continue;
             case 'U': s = s + 21; continue;
             case 'v': s = s + 22; continue;
             case 'V': s = s + 22; continue;
             case 'w': s = s + 23; continue;
             case 'W': s = s + 23; continue;
             case 'x': s = s + 24; continue;
             case 'X': s = s + 24; continue;
             case 'y': s = s + 25; continue;
             case 'Y': s = s + 25; continue;
             case 'z': s = s + 26; continue;
             case 'Z': s = s + 26; continue;
    }
    max = 1;
    b = 0;
    c = 0;
    while(max <= s)
    max = max * 2;
    while(max > 0)
    {
         if(s >= max)
           s = s - max,
           b++;
         else
           c++;
         max = max / 2;
    }
    c = c -1;
    printf("%d %d\n", c, b);
    return 0;
}
