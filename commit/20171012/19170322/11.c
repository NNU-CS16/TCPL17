//给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。输入格式：
//
//输入在一行中给出A。
//输出格式：
//
//输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。
    #include<stdio.h>  
      
    int main()  
 {  
  int num,i,j,k,count=0;  
  scanf("%d",&num);  
  for(i=num;i<num+4;i++)  
 {  
    for(j=num;j<num+4;j++)  
     {  
	 for(k=num;k<num+4;k++)  										   { 	        
	     if(i!=j && i!=k && j!=k)  
	      {     												         count++;                 
		 if(count%6==0)        
		 printf("%d\n",i*100+j*10+k);									          else 												         printf("%d ",i*100+j*10+k);                   
	      }           						
	   }  
     }             
  }  
 return 0;         
 }  
