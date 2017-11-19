#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int a[25], b[25];
    int len, i, j, temp;
    printf("请输入字符串：\n");
    gets(str);
    len = strlen(str);
    for(j = 0;j < 26; j++)
       a[j] = 0;
    for(i = 0; i < len; i++)
       switch(str[i])
       {
             case 'a': a[0]++; continue;
             case 'A': a[0]++; continue;
             case 'b': a[1]++; continue;
             case 'B': a[1]++; continue;
             case 'c': a[2]++; continue;
             case 'C': a[2]++; continue;
             case 'd': a[3]++; continue;
             case 'D': a[3]++; continue;
             case 'e': a[4]++; continue;
             case 'E': a[4]++; continue;
             case 'f': a[5]++; continue;
             case 'F': a[5]++; continue;
             case 'g': a[6]++; continue;
             case 'G': a[6]++; continue;
             case 'h': a[7]++; continue;
             case 'H': a[7]++; continue;
             case 'i': a[8]++; continue;
             case 'I': a[8]++; continue;
             case 'j': a[9]++; continue;
             case 'J': a[9]++; continue;
             case 'k': a[10]++; continue;
             case 'K': a[10]++; continue;
             case 'l': a[11]++; continue;
             case 'L': a[11]++; continue;
             case 'm': a[12]++; continue;
             case 'M': a[12]++; continue;
             case 'n': a[13]++; continue;
             case 'N': a[13]++; continue;
             case 'o': a[14]++; continue;
             case 'O': a[14]++; continue;
             case 'p': a[15]++; continue;
             case 'P': a[15]++; continue;
             case 'q': a[16]++; continue;
             case 'Q': a[16]++; continue;
             case 'r': a[17]++; continue;
             case 'R': a[17]++; continue;
             case 's': a[18]++; continue;
             case 'S': a[18]++; continue;
             case 't': a[19]++; continue;
             case 'T': a[19]++; continue;
             case 'u': a[20]++; continue;
             case 'U': a[20]++; continue;
             case 'v': a[21]++; continue;
             case 'V': a[21]++; continue;
             case 'w': a[22]++; continue;
             case 'W': a[22]++; continue;
             case 'x': a[23]++; continue;
             case 'X': a[23]++; continue;
             case 'y': a[24]++; continue;
             case 'Y': a[24]++; continue;
             case 'z': a[25]++; continue;
             case 'Z': a[25]++; continue;
    }
    for(i = 0; i < 26; i++)
    b[i] = a[i];
    for(i = 0; i < 25; i++)
        for(j = 0; j < 25 - i; j++)
           if(a[j] > a[j+1])
           {
             temp = a[j];
             a[j] = a[j+1];
             a[j+1] = temp;
           }
   if(a[25] == b[0])
      printf("a ");
      else if(a[25] == b[1])
          printf("b ");
          else if(a[25] == b[2])
              printf("c ");
              else if(a[25] == b[3])
                  printf("d ");
                  else if(a[25] == b[4])
                      printf("e ");
                      else if(a[25] == b[5])
                          printf("f ");
                          else if(a[25] == b[6])
                              printf("g ");
                              else if(a[25] == b[7])
                                  printf("h ");
                                  else if(a[25] == b[8])
                                      printf("i ");
                                      else if(a[25] == b[9])
                                          printf("j ");
                                          else if(a[25] == b[10])
                                              printf("k ");
                                              else if(a[25] == b[11])
                                                  printf("l ");
                                                  else if(a[25] == b[12])
                                                      printf("m ");
                                                      else if(a[25] == b[13])
                                                          printf("n ");
                                                          else if(a[25] == b[14])
                                                              printf("o ");
                                                              else if(a[25] == b[15])
                                                                  printf("p ");
                                                                  else if(a[25] == b[16])
                                                                      printf("q ");
                                                                      else if(a[25] == b[17])
                                                                          printf("r ");
                                                                          else if(a[25] == b[18])
                                                                              printf("s ");
                                                                              else if(a[25] == b[19])
                                                                                  printf("t ");
                                                                                  else if(a[25] == b[20])
                                                                                      printf("u ");
                                                                                      else if(a[25] == b[21])
                                                                                          printf("v ");
                                                                                          else if(a[25] == b[22])
                                                                                              printf("w ");
                                                                                              else if(a[25] == b[23])
                                                                                                  printf("x ");
                                                                                                  else if(a[25] == b[24]) 
                                                                                                      printf("y ");
                                                                                                      else if(a[25] == b[25])
                                                                                                          printf("z ");
    printf("%d\n", a[25]);
    return 0;
}   
