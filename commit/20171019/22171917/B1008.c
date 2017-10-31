#include<stdio.h>            
int main()
{
  void shift(int* data, int num, int right) {
    int i;
    right %=num;
    for (i=0; i<right; i++) {
        int lst=num-1-i;
        int v =data[lst];
        while (lst >= right) {
            data[lst] = data[lst - right];
            lst -= right;
        }
        data[lst] = v;
    }
}
void pt(int* data, int n) {
    int i = 0;
    while (i < n) {
        printf("%d ", data[i++]);
    }
    printf("\n");
}
int main() {
    int m[] = {1, 2, 3, 4, 5, 6};
    shift(m, 6, 2);
    pt(m, 6);
    return 0;
}
}  
