#include <stdio.h>
#define MAX 100000
int c[100000];
int man[100000] = {0};
int d[100000] = {0};

int main()
{
    int n, i = 0;
    int a, b;
    scanf("%d", &n);  
    for (i = 0; i < MAX; i++)
   	c[i] = -1;   //所有数定义为-1，以免00000客人造成混乱
    for (i = 0; i < n; i++)	
    {
	scanf("%d %d", &a, &b);
	c[a] = b;
	c[b] = a;   //情侣的元素值为其对象的ID
    }

    int m;
    scanf("%d", &m);   //总共到场人数
    for (i = 0; i < m; i++)
    {
	scanf("%d", &a);
	man[a] = 1;   //到场者的元素值为1，未到场着为0
    }
    
    int cnt = 0, j = 0;
    for (i = 0; i < MAX; i++)
	if (man[i] == 1 && man[c[i]] != 1)
	{
	    cnt++;   //统计到场单身狗的数量
	    d[j] = i;   //统计到场单身狗的ID
	    j++;
	}
    printf("%d\n", cnt);   //输出到场单身狗数量
    if (cnt == 0)
    	return 0;  //如果单身狗数量为0，不输出
    for (i = 0; i < j; i++)
    {
	printf("%05d ", d[i]);  //输出单身狗的ID

    }
    printf("\n");
/*    printf("%05d", d[j - 1]);*/
    
    return 0;
}
