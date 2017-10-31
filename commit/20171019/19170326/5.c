#include<stdio.h>
int main()
{
	  char c;
	    int dc=0,kg=0;
	      while(c!='.')
		        {
				    scanf("%c",&c);
				        if(c==' ')
						    {
							          kg++;
								        if(dc==0)
										      continue;
									      if(dc!=0)
										            {
												            printf("%d",dc);
													            dc=0;
														          }
									          }
					    else if(c=='.')
						        break;
					        else
							    {
								          dc++;
									        if(kg==0)
											      continue;
										      if(kg!=0)
											            {
													            printf(" ");
														            kg=0;
															          }
										            
										          }
						    
						  }
	        return 0;
}
