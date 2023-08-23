#include <stdio.h>
#include <string.h>
//仅供自己学习，做笔记  先遍历所有字母，记录字母的格式，然后进行最大值判断。
int main()
{
  // 请在此输入您的代码
  char a[1000];
  int b[26]={0};
  int lenth;
  scanf("%s",a);

  lenth=strlen(a);

  int i=0;
  int max = 0;
  int j=0;
  int max_index =0;

  
  for (i=0;i<lenth;i++){

    switch(a[i]){
      case 'a': b[0] += 1;   break;
      case 'b': b[1] += 1;   break;
      case 'c': b[2] += 1;   break;
      case 'd': b[3] += 1;   break;
      case 'e': b[4] += 1;   break;
      case 'f': b[5] += 1;   break;
      case 'g': b[6] += 1;   break;
      case 'h': b[7] += 1;   break;
      case 'i': b[8] += 1;   break;
      case 'j': b[9] += 1;   break;
      case 'k': b[10] += 1;   break;
      case 'l': b[11] += 1;   break;
      case 'm': b[12] += 1;   break;
      case 'n': b[13] += 1;   break;
      case 'o': b[14] += 1;   break;
      case 'p': b[15] += 1;   break;
      case 'q': b[16] += 1;   break;
      case 'r': b[17] += 1;   break;
      case 's': b[18] += 1;   break;
      case 't': b[19] += 1;   break;
      case 'u': b[20] += 1;   break;
      case 'v': b[21] += 1;   break;
      case 'w': b[22] += 1;   break;
      case 'x': b[23] += 1;   break;
      case 'y': b[24] += 1;   break;
      case 'z': b[25] += 1;   break;
    }
  }

  for (j=0;j<26;j++){
    if(b[j] > max)
    {
       max = b[j];
       max_index = j;
    }
    else if (b[j] == max ){
      if(j<max_index){
        max_index = j;
        max = b[j];
      } 
      else {
        max = max;
        max_index = max_index;
      }
    }
  } 

  //for(i=0;i<26;i++){
  //  printf("%d\n",b[i]);
  //}

  //printf("%s\n%d%d",a,max,max_index);

  printf("%c\n%d\n",'a'+max_index,max);

  return 0;
}