#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Chinese, English, math, SocialStudy, science;
    printf("請依序並以空白間隔輸入國文、英文、數學、自然、社會五科各自的成績:\n");
    scanf("%f %f %f %f %f", &Chinese, &English, &math, &SocialStudy, &science);
    float total=Chinese+English+math+SocialStudy+science;
    printf("五科的平均成績是:%f分", total/5);
    system("pause");
    return 0;
}
