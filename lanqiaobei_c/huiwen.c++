#include <iostream>
using namespace std;
bool isleap(int y) {//判断闰年
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);//闰年可以被4整除但不能被100整除，或能被400整除。
}
bool check(int year, int mouth, int day) {//判断日期是否合法
    if (mouth > 12 || mouth == 0)return false;
    if (day > 31)return false;
    if (mouth == 2) {
        if (isleap(year) && day > 29)
            return false;
        if (!isleap(year) && day > 28)
            return false;
    }
    if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11)
        if (day > 30)return false;
    return true;
}
int main()
{
    int n, i;
    cin >> n;
    int a, b, c, d, e, f, g, h;
    int year, mouth, day;
    bool flag = false;
    for (i = n + 1;i <= 99999999;++i) {
        year = i / 10000;
        mouth = i % 10000 / 100;
        day = i % 100;
        if(check(year,mouth,day)){//check函数判断日期是否合法，不合法则不会进入下面的语句。这样能省下对不需要的计算的日期的商、余计算。 
            a = i % 10;//得到个位
            b = i / 10 % 10;//十位
            c = i / 100 % 10;//百位
            d = i / 1000 % 10;//千位
            e = i / 10000 % 10;//万位
            f = i / 100000 % 10;//十万位
            g = i / 1000000 % 10;//百万位
            h = i / 10000000 % 10;//千万位
            if (a == h && c == f && b == g && e == d && flag == false){//该部分目的是输出第一个回文日期，flag作为标记。
                  //这样当找到第一个回文日期之后，将flag变为ture。下一次碰到普通回文日期时就不会输出。
                 cout << i << endl;
                    flag = true;
            } 
            if (a == h && c == f && b == g && e == d && a == c && b == e) {//输出ABABBABA型的回文日期
                cout << i << endl;
                break;
                }
        }
    }
    return 0;
}