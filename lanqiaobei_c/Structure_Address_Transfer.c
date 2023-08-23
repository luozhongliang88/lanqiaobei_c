#include<stdio.h>
//结构体地址传递
struct date
{
    int year;
    int month;
    int day;
};
void fun(struct date *p){
    p->year=2008;
    p->month=8;
    p->day=8;
}
int main(){
    struct date d={2014,9,1};
    printf("%d-%d-%d\n",d.year,d.month,d.day);
    fun(&d);
    printf("%d-%d-%d\n",d.year,d.month,d.day);
    return 0;
}