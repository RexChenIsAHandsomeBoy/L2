#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Chinese, English, math, SocialStudy, science;
    printf("�Ш̧ǨåH�ťն��j��J���B�^��B�ƾǡB�۵M�B���|����U�۪����Z:\n");
    scanf("%f %f %f %f %f", &Chinese, &English, &math, &SocialStudy, &science);
    float total=Chinese+English+math+SocialStudy+science;
    printf("���쪺�������Z�O:%f��", total/5);
    system("pause");
    return 0;
}
