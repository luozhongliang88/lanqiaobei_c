//（单词分析）

// 输入描述
// 输入一行包含一个单词，单词只由小写英文字母组成。

// 对于所有的评测用例，输入的单词长度不超过 1000。

// 输出描述
// 输出两行，第一行包含一个英文字母，表示单词中出现得最多的字母是哪 个。如果有多个字母出现的次数相等，输出字典序最小的那个。

// 第二行包含一个整数，表示出现得最多的那个字母在单词中出现的次数。

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int count[26]={0},max=0,i;
    char ch;
    while((ch=getchar())!='\n')
        count[ch-'a']++;
    for(i=1;i<26;i++){
        if(count[i]>count[max])
            max=i;
    }
    printf("%c\n%d",max+'a',count[max]);
    return 0;
}