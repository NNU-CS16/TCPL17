  #include<stdio.h>

  int main()
  {
        int n,m,i,j,k;
        int a[n][2];
	int b[m];
	scanf("%d",&n);

        for( i = 0; i < n; i++ )
                for(j = 0; j < 2;j++)
                        scanf("%d",&a[i][j]);

        scanf("%d",&m);
        
        for(i = 0; i < m; i++)
                scanf("%d", &b[i]);

        for(i = 0; i < n; i++)        
                for(j = 0; j < m; j++)
		        if(a[i][0] == b[j] || a[i][1] == b[j])
			{
                                for(k = j + 1; k < m; k++)    
				{
                                        if(a[i][0] == b[k] || a[i][1] == b[k])
                                        {
                                                b[k] = 0;
                                                b[j] = 0;
                                                break;
                                        }
                                }
			}
                        
                
        
        int b1[20],num = 0;
        for(i = 0; i < m; i++)
        {
                if(b[i] != 0)
                {
                        b1[num] = b[i];
                        num++;
                }
        }
        printf("%d\n",num);
        for( i = 0; i < num; i++)
        {
                printf("%d ",b1[i]);
        }
        printf("\n");
        return 0;
  }
