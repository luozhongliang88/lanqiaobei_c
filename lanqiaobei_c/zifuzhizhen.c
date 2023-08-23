#include<stdio.h>
int main(){
    //删除掉后面*最后s1的内容是：***A*BC**DE
    char s1[]="***A*BC**DE*****";
    char *q=s1;
    while(*q)
        q++;
    q--;
    while(*q=='*')
        q--;
    q++;
    *q='\0';
    printf("%s\n",s1);
}