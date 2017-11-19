#include <stdio.h>
#include <string.h>
void zifutongji(char word[1000]);
int main()
{
    char word[1000];
    gets(word);
    zifutongji(word);
    return 0;
}

void zifutongji(char word[1000])
{ 
    int sign[26] = {0}, shuchu[26] = {0};
    int lon = strlen(word);
    int o, i, j;
    for (o = 0; o < lon; o++)
    {
	if (word[o] == 65 || word[o] == 97)
	    sign[0]++;
	if (word[o] == 66 || word[o] == 98)
	    sign[1]++;
	if (word[o] == 67 || word[o] == 99)
	    sign[2]++;
	if (word[o] == 68 || word[o] == 100)
	    sign[3]++;
	if (word[o] == 69 || word[o] == 101)
	    sign[4]++;
	if (word[o] == 70 || word[o] == 102)
	    sign[5]++;
	if (word[o] == 71 || word[o] == 103)
	    sign[6]++;
	if (word[o] == 72 || word[o] == 104)	
	    sign[7]++;
	if (word[o] == 73 || word[o] == 105)
	    sign[8]++;
	if (word[o] == 74 || word[o] == 106)
	    sign[9]++;
	if (word[o] == 75 || word[o] == 107)
            sign[10]++;
	if (word[o] == 76 || word[o] == 108)
	    sign[11]++;
	if (word[o] == 77 || word[o] == 109)
	    sign[12]++;
	if (word[o] == 78 || word[o] == 110)
	    sign[13]++;
	if (word[o] == 79 || word[o] == 111)
	    sign[14]++;
	if (word[o] == 80 || word[o] == 112)
	    sign[15]++;
	if (word[o] == 81 || word[o] == 113)
	    sign[16]++;
	if (word[o] == 82 || word[o] == 114)
	    sign[17]++;
	if (word[o] == 83 || word[o] == 115)
	    sign[18]++;
	if (word[o] == 84 || word[o] == 116)
	    sign[19]++;
	if (word[o] == 85 || word[o] == 117)
	    sign[20]++;
	if (word[o] == 86 || word[o] == 118)
	    sign[21]++;
	if (word[o] == 87 || word[o] == 119)
	    sign[22]++;
	if (word[o] == 88 || word[o] == 120)
	    sign[23]++;
	if (word[o] == 89 || word[o] == 121)
	    sign[24]++;
	if (word[o] == 90 || word[o] == 122)
	    sign[25]++;
    }
    for (o = 0, i = 0; o < 26; o++)
    {
	if (shuchu[i] < sign[o])
	{
	    i = o;
	    shuchu[i] = sign[o];
	}
    }
    j = i + 97;
    printf("%c %d\n", j, shuchu[i]);
}
