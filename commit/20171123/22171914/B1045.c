#include <stdio.h>  
#include <stdlib.h>  
int main(void) 
{  
  int* array;  
  int top = 0, max = 0, n, i, begin, end, middle, temp;  
  scanf("%d", &n);  
  array = (int*)calloc(n, sizeof(int));  
  for (i = 0; i < n; i++)
  {  
          scanf("%d", &temp);  
          if (temp > max) 
          {  
                array[top++] = temp;  
                max = temp;  
          }  
          else
          {  
                begin = 0;  
                end = top - 1;  
                while (begin < end) 
                {  
                    middle = (begin + end) / 2;  
                    if (array[middle] == temp)
                    {  
                        top = middle;  
                        break;  
                    }  
                    else if (array[middle]>temp)
                    {  
                        end = middle - 1;  
                    }  
                    else if (array[middle] < temp) 
                    {  
                        begin = middle + 1;  
                    }  
                }  
                if (begin >= end) 
                {  
                    if (end >= 0 && array[end] < temp) 
                    {  
                        top = end + 1;  
                    }  
                    else 
                    {  
                        top = begin;  
                    }  
                }  
          }  
  }  
  if (top)
  {  
            printf("%d\n", top);  
            printf("%d", array[0]);  
            for (i = 1; i < top; i++) 
            {  
                printf(" %d", array[i]);  
            }  
  }  
  else 
  {  
        printf("%d\n\n", top);  
  }  
        free(array);  
        return 0;  
}  
