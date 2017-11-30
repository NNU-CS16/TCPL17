int substr( const char *str, const char *substr )
{

	int len1 = strlen( str );
	int len2 = strlen( substr );
	for ( int i = 0; i <= len1 - len2; i++ )
		if ( strncmp( str + i, substr, len2 ) == 0 )
			return i;
	return -1;

}
