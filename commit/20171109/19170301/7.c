 #include <stdio.h>  
 int BinomialCoefficient (int n, int k);  
 int main()
 {  
    int n;  
    int k;  
    scanf ("%d %d", &n, &k);  
    printf("%d\n", BinomialCoefficient (n, k));  
    return 0;  
 }   
 int BinomialCoefficient (int n,int k) 
 {  
    int n1;  
    int n2;  
    if ((k == 0) || (k == n))       
        return 1;        
    else 
    {  
        n1 = BinomialCoefficient (n-1,k);  
        n2 = BinomialCoefficient (n-1,k-1);  
        return n1+n2;  
    }
 }
