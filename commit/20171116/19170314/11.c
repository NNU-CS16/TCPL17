
void my_strcpy( char *dest,  const char *src )
{

        while ( *src != '\0' )
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';

}


    
