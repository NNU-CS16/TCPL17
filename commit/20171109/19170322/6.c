    #include<stdio.h>
    int time()
    {
        static int count=0;
	count++;
	return count;
    }
    void move(char source, char target)
    {
        printf("%c->%c\n", source, target);	    
	time();
    }	
    void Hanoi(int n, char source, char help, char target)
    {
        if(n==1)
	{
	    move(source, help);
	    move(help, target);
	}
	else
	{
	    Hanoi(n-1, source, help, target);
	    move(source, help);
	    Hanoi(n-1, target, help, source);
	    move(help, target);
	    Hanoi(n-1, source, help, target);
	}
    }
    int main()
    {
        int n;
	scanf("%d", &n);
	Hanoi(n,'A','B','C');
	printf("%d\n", time()-1);
	return 0;
    }

