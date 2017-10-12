int rightrot(unsigned int x,int n)
{
	int wordlength(void);
	int rbit;

	for (int i=0; i<n; ++i)
     {
	rbit = (x&1)<<(wordlength()-1);
	x=x >>1
	|rbit;
      }
	return x;
}

int wordlength(void)
{
	int i;
	unsigned v =(unsigned)~0;

	for (i=1;(v = v >> 1) >0; i++);
	return i;
}
 
int main(void)
{
	unsigned int x=40;
	unsigned int y;
	int n =3;
	y=rightrot(x,n);
	printf("%d\n",y);
	return 0;
}
