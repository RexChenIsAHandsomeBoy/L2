#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("�п�J��Ӭ۲������(�H�ťն��j):");
    scanf("%d %d",&a,&b);
    int ans=1;
    for(int i=1; i<=a&&i<=b; i++){
        if(a%i==0&&b%i==0){
            ans=i;
        }
    }
    printf("�̤j���]�Ƭ�:%d", ans);
    system("pause");
    return 0;
}
