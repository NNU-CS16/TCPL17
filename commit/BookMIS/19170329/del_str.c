   void del_str_line(char *str)
   {
        while('\n' != *str && *str)
        {
	        ++str;
        } 
        *str = '\0';
        
   }
