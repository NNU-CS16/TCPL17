    #include<stdio.h>
    int time()
    {
         static int count=0;
	 count++;
	 return count;
    }
    void move(char source, char target)
    {
	time();
    }	
    void Hanoi(int n, char source, char help, char target)
    {
        if(n==1)
	    move(source,target);
	else
	{
	    Hanoi(n - 1, source, target, help);
	    move(source, target);
	    Hanoi(n - 1, help, source, target);
	}
    }
    int main()
    {
        int n;
	scanf("%d", &n);
	Hanoi(n,'A', 'B', 'C');
	printf("%d",2*(time()-1));
        return 0;
    }
