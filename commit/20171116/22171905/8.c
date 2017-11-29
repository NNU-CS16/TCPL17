#include <stdio.h>
 
void main()
{
	int x[25][25];
	int ii,jj,n = 6;
	int v=1;
	int i0,i1,j0,j;
	 
	printf("Please enter n, n=3 to 25\n");
	scanf("%d",&n);
	 
	i0=0; i1 = n -1;
	for (j=0;j<=n/2;j++)
	{
		j0 = j;
		for (ii=i0;ii<=i1;ii++) {x[j0][ii]=v; v++;};
		for (jj=j0+1;jj<=i1;jj++) {x[jj][i1]=v; v++;};
		for (ii=i1-1;ii >=i0;ii--) {x[i1][ii]=v; v++;};
		for (jj=i1-1;jj >=i0+1;jj--) {x[jj][i0]=v; v++;};
		i0 = i0+1;i1=i1-1;
	}
	 
	for (ii=0;ii<n;ii++)
	{
		for (jj=0;jj<n;jj++) printf("%3d ",x[jj][ii]);
		printf("\n");
	}
}
