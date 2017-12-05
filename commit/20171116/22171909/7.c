 #include <stdio.h>
 int main()
 {
  char a1[4], a2[4];
  int a3[4];
  int b = 0, c = 0, d = 0, i, j;
  scanf("%s", a1);
  scanf("%s", a2);
  for (i = 0; i < 4; ++i)
  {
     b += a1[i];
     c += a2[i];
     d = b + c;
     if (d < 10)
        a3[i] = d;
     else
     {
        a3[i] = d % 10;
        b = 1;
        c = 0;
     }
  }
  for (j = 0; j < 4; ++j)
     printf("%d", a3[j]);
     printf("\n");
  return 0;
 }
