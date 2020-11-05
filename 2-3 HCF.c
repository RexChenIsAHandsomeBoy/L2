#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("請輸入兩個相異正整數(以空白間隔):");
    scanf("%d %d",&a,&b);
    int ans=1;
    for(int i=1; i<=a&&i<=b; i++){
        if(a%i==0&&b%i==0){
            ans=i;
        }
    }
    printf("最大公因數為:%d", ans);
    system("pause");
    return 0;
}
