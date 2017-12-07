int count_substr( const char *str, const char *substr )
{

	int sum = 0;
	int len1 = strlen( str );
	int len2 = strlen( substr );

	for ( int i = 0; i <= len1 - len2; i++ )
		if ( strncmp( str + i, substr, len2 ) == 0 )
		{
			sum++;
			i += len2 - 1;
		}

	return sum;

}
