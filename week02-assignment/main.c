#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    float f1, f2;

    printf("실수 2개 ? ");
    scanf("%f %f", &f1, &f2);
    printf("%f + %f = %f\n", f1, f2, f1 + f2);
    printf("%f - %f = %f", f1, f2, f1 - f2);

    return 0;
}