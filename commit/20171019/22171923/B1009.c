#include <stdio.h>
#include <string.h>
 
void reverse (char* buf) {
    char* p = strchr(buf, ' ');
    if (p)
    {
        *p = 0;
        reverse(p+1);
    }
    printf("%s ", buf);
}
 
int main(){
 
    char buf[1000];
    strcpy(buf,"a b c d e f g h i j k l m n");
    reverse(buf);
    printf("\r\n");
 
    strcpy(buf,"a");
    reverse(buf);
    printf("\r\n");
 
    return 0;
} 
