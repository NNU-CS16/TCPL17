#include "stdio.h"
int main(int argc,char *argv[]){
    int i,s;
    for(s=i=0;i<100;s+=i+=2);
    printf("2+4+6+...+100 = %d\n",s);
    return 0;
}
