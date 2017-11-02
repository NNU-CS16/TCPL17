#include <stdio.h>
int main()
 {
int N, x, y;
int i = 0;
scanf("%d", &N);
int m = N / 2;
for(x = 1; x <= m; ++x) {
for(y = x; y <= m; ++y) {
if(x * x + y * y == N) {
i = 1;
printf("%d %d\n", x, y);
}}}
if(!i)
printf("No Solution\n");
return 0;
}
