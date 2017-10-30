#include <stdio.h> 
int main()
{int number,temp=7,a=3;
	char ch;
int yemp1,yemp2; 
scanf("%d %c",&number,&ch);
 do{ 
	  if(number>=temp){  
		  if(number<(temp+2*(a+2))){  
			  break;  
		  }  
		   else if(number==(temp+2*(a+2))){ 
			    temp=(temp+2*(a+2));  
			                    a=a+2;  
					                    break;  
							                }  
		  else{  
			                  temp=(temp+2*(a+2));  
					                  a=a+2;  
							              }  
		          }  
	      }while(1);  
 for(int i=0;i<a;i++){  
	         yemp1=i;  
		 if(yemp1>a/2){  
			                 yemp1=a-yemp1-1;  
					             }  
		             for(int j=0;j<a;j++){
				     if(yemp2<yemp1){  
					      if(j>a/2){  
						                              printf("\n");  
									                              break;  
												                      }  
					       else{  
						                               printf(" ");  
									                           }  
					                       }  
				     else{  
					                         printf("%c",ch);  
								                 }  
				      if(j==a-1){  
					                          printf("\n");  
								                  }  
				                  }  
			         }  
 printf("%d\n",number-temp);  
}  
