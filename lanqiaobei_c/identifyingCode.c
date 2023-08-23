#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define N 5
//该函数生成5位数的由大、小写字母和数字组成的随机验证码
void identifyingCode(char s[],int n){
    char str[]="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,k,len;
    len=strlen(str);
    srand(time(0));
    for(i=0;i<n;i++){
        k=rand()%len;
        s[i]=str[k];7
    }
    s[i]='\0';
}
int main(){
    char code[N+1],str[N+1];
    do{
        identifyingCode(code,N);
        printf("请输入验证码：%s\n",code);
        scanf("%s",str);
    }while(strcmp(code,str)!=0);
    printf("验证正确.");
    return 0;
}