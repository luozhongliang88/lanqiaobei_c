#include <stdio.h>
int main()
{
  int i,j,count=0;
  for(i=1;i<=2020;i++)
  {
    for(j=i;j>0;j=j/10)
    {
      if(j%10==2)
      {
      count++;
      }
    }
  }
  printf("%d",count);
  // 请在此输入您的代码
  return 0;
}