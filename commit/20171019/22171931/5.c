    #include <stdio.h>  
    #include <stdlib.h>  
    /** 
     *          It's   great      to see you here     . 
     *               
     *                       It's   great to see you here    . 
     *                            
     *                                **/  
    int main()  
	    {  
		            char ch;  
			            char sign = ' ';  
				            int len;  
					            int flag;  
						            len = 0;  
							            flag = 0;// 0:前面无词；  1：前面有词  
								            while( (ch=getchar())!='.'){  
										                if(ch!=' ') len++;  
												            else if(len!=0){ //发现一个非空格字符  
														                    if(flag!=0) putchar(sign); //如果有词  
																                    flag = 1;  
																		                    printf("%d",len);  
																				                    len = 0;  
																						                }else{  
																									                continue;  
																											            }  
													          
													            }  
									            if(flag==1 && len!=0) putchar(sign);  
										            if (len) printf("%d",len);  
											            return 0;  
												        }  
