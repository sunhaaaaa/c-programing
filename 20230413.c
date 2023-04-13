#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int int_a, int_b, a, b;
    printf("2개의 정수를 각각 입력하세요.₩n");

    printf("정수 int_a:");
    scanf("%d", &int_a);

    printf("정수 int_b:");
    scanf("%d", &int_b);

    a = int_a % 2;
    b = int_b % 2;
   { if (a== 0 && b== 0)
    printf("두 정수 모두 짝수입니다.");
    else if (a!= 0 && b== 0)
    printf("두 정수 모두 홀수입니다.");
    else if((a==0 && b!==0)||(a!=0 && b==0))
    printf("하나의 홀수이며 다른 하나는 짝수입니다.");}

    return 0;
    
}