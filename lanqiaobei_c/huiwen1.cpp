#include <iostream>
using namespace std;
bool isleap(int y) {//�ж�����
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);//������Ա�4���������ܱ�100���������ܱ�400������
}
bool check(int year, int mouth, int day) {//�ж������Ƿ�Ϸ�
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
        if(check(year,mouth,day)){//check�����ж������Ƿ�Ϸ������Ϸ��򲻻�����������䡣������ʡ�¶Բ���Ҫ�ļ�������ڵ��̡�����㡣 
            a = i % 10;//�õ���λ
            b = i / 10 % 10;//ʮλ
            c = i / 100 % 10;//��λ
            d = i / 1000 % 10;//ǧλ
            e = i / 10000 % 10;//��λ
            f = i / 100000 % 10;//ʮ��λ
            g = i / 1000000 % 10;//����λ
            h = i / 10000000 % 10;//ǧ��λ
            if (a == h && c == f && b == g && e == d && flag == false){//�ò���Ŀ���������һ���������ڣ�flag��Ϊ��ǡ�
                  //�������ҵ���һ����������֮�󣬽�flag��Ϊture����һ��������ͨ��������ʱ�Ͳ��������
                 cout << i << endl;
                    flag = true;
            } 
            if (a == h && c == f && b == g && e == d && a == c && b == e) {//���ABABBABA�͵Ļ�������
                cout << i << endl;
                break;
                }
        }
    }
    return 0;
}
