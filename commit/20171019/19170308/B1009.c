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
    //scanf("%s", buf);    //用字符串直接模拟吧，就不输入了
    strcpy(buf,"a b c d e f g h i j k l m n");//多个词的用例
    reverse(buf);
    printf("\r\n");
 
    strcpy(buf,"a");    //单个词的用例
    reverse(buf);
    printf("\r\n");
 
    return 0;
} 
