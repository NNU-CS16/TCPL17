int my_strcmp( const char *str1, const char *str2 )
{

	while ( *str1 == *str2 && *str1 != '\0' && *str2 != '\0' )
	{
		str1++;
		str2++;
	}
	if ( *str1 > *str2 ) return 1;
	if ( *str1 < *str2 ) return -1;

	return 0;

}
