    #include <stdio.h>
    int main()
    {
        int num, a[4], max, min, i, j, temp;
	scanf("%d", &num);
	do
        {
	    a[0] = num / 1000;
            a[1] = num % 1000 / 100;
	    a[2] = num % 100 / 10;
            a[3] = num % 10;
	    for(i = 0; i < 3; i++)
	    {
	        for(j = 0; j < 3; j++)
	        {
		    if(a[j] < a[j + 1])
		    {
		        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }
	    if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
            {
                printf("%04d - %04d = 0000", num, num);
		break;
	    }
            else
	    {
                max = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
		min = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
                num = max - min;
	        printf("%04d - %04d = %04d\n", max, min, num);
            }
	 }while(num != 6174);
	return 0;
    }



