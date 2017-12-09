#include <stdio.h>
void Insertion(int *m, int k, int l)
{
    if (k >= l)   k = l - 1;
    int t = m[k];
    for(int i = k - 1; i >= 0; i--)
    {
	if (m[i] > t)
	    m[i + 1] = m[i];
	    m[i] = t;
	else
	    break;
    }
}
void Merge(int *m, int k, int l)
{
    if (k >= l)
	k = l;
    int start = 0, end = 0;
    for(int i = 0; i < l; )
    {
	start = i;
	end = (start + k > l ? l : start + k);
	for(int p = end - 1; p >= start; p--)
	{
	    int iloc = -1, max = m[start], q = 0;
	    for(q = start; q <= p; q++)
	    {
		if (m[l] >= max)
		    iloc = l;
		    max = m[l];
	    }
	    if (iloc >= 0)
	    {
		m[iloc] = m[l - 1];
		m[l - 1] = max;
	    }
	}
	i += k;
    }
}
int match(int *m0, int m3, int l)
{
    for(int i = 0; i < l; i++)
	if (m0[i] != m3[i])
	    return 0;
    return 1;
}
int main()
{
    int n = 0, m[100] = {0}, m0[100] = {0}, ml[100] = {0};
    scanf("%d", &n);
   for(int i = 0; i < n; i++)
       scanf("%d", &m[i]);
   for(int i = 0; i < n; i++)
       scanf("%d", &mo[i]); 
   for(int i = 0; i < n; i++)
       ml[i] = m[i];
   for(int i = 1; i < n; i++)
   {
       Insertion(ml, i, n);
       if (match(mo, ml, n))
       {
	   printf("Insertion Sort\n");
	   Insertion(ml, i + 1, n);
	   for(int j = 0; j < n; j++)
	   {
	       if (j == n - 1)
		   printf("%d", ml[j]);
	       else
		   printf("%d", ml[j]);
	   }
	   return 0;
}
