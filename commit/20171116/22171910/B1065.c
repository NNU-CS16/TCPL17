/*单身狗*/
#include <stdio.h>
int main()
{
  int i, j, k, a = 0, b, c1, c2, m, n,
	  id1[100000] = {-1}, id2[10000], id[10000];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
	scanf("%d %d", &c1, &c2);
	id1[c1] = c2;
	id1[c2] = c1;
  }
  scanf("%d", &m);
  for (i = 0; i < m; i++)
	  scanf("%d", &id2[i]);
  for (i = 0; i < m; i++)
  {
	if (id1[id2[i]] != -1)
	{
	  b = id1[id2[i]];
	  for (j = 0; j < m; j++)
		  if (id2[j] == b)
			 break;
	  if (j == m)
		 id[a++] = id2[i];
	}
	else
	  id[a++] = id2[i];
  }
  printf("%d\n", a);
  for (i = 0; i < a; i++)
  {
	if(!i)
	  printf("%05d", id[i]);
	else
	  printf(" %05d", id[i]);
  }
}
