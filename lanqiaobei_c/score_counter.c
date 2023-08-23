// 小蓝给学生们组织了一场考试，卷面总分为 100 分，每个学生的得分都是一个 0 到 100 的整数。
// 如果得分至少是 60 分，则称为及格。如果得分至少为 85 分，则称为优秀。
// 请计算及格率和优秀率，用百分数表示，百分号前的部分四舍五入保留整 数。
// 第一行输入整数n表示人数，接下来n行表示一个学生的得分

#include <stdio.h>

int main() {
    int n, passCount = 0, excellentCount = 0;
    double passRate, excellentRate;
    scanf("%d", &n);
    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        if (scores[i] >= 60) {
            passCount++;
        }
        if (scores[i] >= 85) {
            excellentCount++;
        }
    }
    passRate = (double) passCount / n * 100;
    excellentRate = (double) excellentCount / n * 100;
    printf("%.0f%%\n%.0f%%", passRate, excellentRate);
    return 0;
}