#include <stdio.h>
#include <string.h>
int count_1(int sum1);
int count_0(int sum2);

int main()
{
   char str = getchar();
   int sum2, j, n;
   int sum1 = 0;
   while (str != '\n')
   {
      switch(str)
      {
        case 'a' : n = 1 ; break;
        case 'A' : n = 1 ; break;
        case 'b' : n = 2 ; break;
        case 'B' : n = 2 ; break;
        case 'c' : n = 3 ; break;
        case 'C' : n = 3 ; break;
        case 'd' : n = 4 ; break;
        case 'D' : n = 4 ; break;
        case 'e' : n = 5 ; break;
        case 'E' : n = 5 ; break;
        case 'f' : n = 6 ; break;
        case 'F' : n = 6 ; break;
        case 'g' : n = 7 ; break;
        case 'G' : n = 7 ; break;
        case 'h' : n = 8 ; break;
        case 'H' : n = 8 ; break;
        case 'i' : n = 9 ; break;
        case 'I' : n = 9 ; break;
        case 'j' : n = 10 ; break;
        case 'J' : n = 10 ; break;
        case 'k' : n = 11 ; break;
        case 'K' : n = 11 ; break;
        case 'l' : n = 12 ; break;
        case 'L' : n = 12 ; break;
        case 'm' : n = 13 ; break;
        case 'M' : n = 13 ; break;
        case 'n' : n = 14 ; break;
        case 'N' : n = 14 ; break;
        case 'o' : n = 15 ; break;
        case 'O' : n = 15 ; break;
        case 'p' : n = 16 ; break;
        case 'P' : n = 16 ; break;
        case 'q' : n = 17 ; break;
        case 'r' : n = 18 ; break;
        case 'R' : n = 18 ; break;
        case 's' : n = 19 ; break;
        case 'Q' : n = 17 ; break;
        case 'S' : n = 19 ; break;
        case 't' : n = 20 ; break;
        case 'T' : n = 20 ; break;
        case 'u' : n = 21 ; break;
        case 'U' : n = 21 ; break;
        case 'v' : n = 22 ; break;
        case 'V' : n = 22 ; break;
        case 'w' : n = 23 ; break;
        case 'W' : n = 23 ; break;
        case 'x' : n = 24 ; break;
        case 'X' : n = 24 ; break;
        case 'y' : n = 25 ; break;
        case 'Y' : n = 25 ; break;
        case 'z' : n = 26 ; break;
        case 'Z' : n = 26 ; break;
        default : n = 0 ; break;
      }
      sum1 = sum1 + n;
      str = getchar();
   }
  sum2 = sum1;
   int count1 = count_1(sum1);
   int count0 = count_0(sum2);
   printf("%d %d\n", count0, count1);
   return 0;
}

int count_1(int sum1)
{
   int count1 = 0;
   while (sum1 != 0)
   {
          if (sum1 % 2 == 1) count1++;
          sum1 = sum1 >> 1;
   }
   return count1;
}

int count_0(int sum2)
{
   int count0 = 0;
   while (sum2 != 0)
   {    
          if (sum2 % 2 == 0) count0++;
          sum2 = sum2 >> 1;
   }
   return count0;
}

