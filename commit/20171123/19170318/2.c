int bin_insert( int n, int m, int j, int i )
{

	return  ~( ~( ~0 << ( i - j + 1 ) ) << j ) & n  |  m << j ;
	
}
