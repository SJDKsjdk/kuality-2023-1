#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    int num, money;
    int stock1=10;
    int stock2=12;
    int stock3=11;
    int stock4=5;
    int stock5=3;

    start:

    printf("=========================메뉴=========================\n");
    printf("1.이온음료[500] 2.카페인음료 [1000] 3.초코우유 [700] 4.커피 [800] 5.탄산음료 [900]\n");
    scanf(" %d", &num);

    switch(num)
    {
        case 1:
            printf("이온음료 선택 ; 재고 : %d ; 500원을 투입하세요.\n", stock1);
            scanf(" %d", &money);
            if(money < 500)
            {
                printf("돈이 부족합니다.\n");
                printf("%d원을 반환합니다.\n", money);
                goto start;
            }
            else if(money == 500)
            {
                printf("음료가 나옵니다.\n");
                printf("재고 : %d", stock1-1);
            }
            else if(money > 500)
            {
                printf("음료가 나옵니다.\n");
                printf("%d원을 반환합니다.\n", money-500);
                printf("재고 : %d", stock1-1);
            }
            break;
        case 2:
            printf("카페인음료 선택 ; 재고 : %d ; 1000원을 투입하세요.\n", stock2);
            scanf(" %d", &money);
            if(money < 1000)
            {
                printf("돈이 부족합니다.\n");
                printf("%d원을 반환합니다.\n", money);
                goto start;
            }
            else if(money == 1000)
            {
                printf("음료가 나옵니다.\n");
                printf("재고 : %d", stock2-1);
            }
            else if(money > 1000)
            {
                printf("음료가 나옵니다.\n");
                printf("%d원을 반환합니다.\n", money-1000);
                printf("재고 : %d", stock2-1);
            }
            break;
        case 3:
            printf("초코우유 선택 ; 재고 : %d ; 1000원을 투입하세요.\n", stock3);
            scanf(" %d", &money);
            if(money < 700)
            {
                printf("돈이 부족합니다.\n");
                printf("%d원을 반환합니다.\n", money);
                goto start;
            }
            else if(money == 700)
            {
                printf("음료가 나옵니다.\n");
                printf("재고 : %d", stock3-1);
            }
            else if(money > 700)
            {
                printf("음료가 나옵니다.\n");
                printf("%d원을 반환합니다.\n", money-700);
                printf("재고 : %d", stock3-1);
            }
            break;
        case 4:
            printf("커피 선택 ; 재고 : %d ; 800원을 투입하세요.\n", stock4);
            scanf(" %d", &money);
            if(money <800)
            {
                printf("돈이 부족합니다.\n");
                printf("%d원을 반환합니다.\n", money);
                goto start;
            }
            else if(money == 800)
            {
                printf("음료가 나옵니다.\n");
                printf("재고 : %d", stock4-1);
            }
            else if(money > 800)
            {
                printf("음료가 나옵니다.\n");
                printf("%d원을 반환합니다.\n", money-800);
                printf("재고 : %d", stock4-1);
            }
            break;
        case 5:
            printf("탄산음료 선택 ; 재고 : %d ; 900원을 투입하세요.\n", stock5);
            scanf(" %d", &money);
            if(money < 900)
            {
                printf("돈이 부족합니다.\n");
                printf("%d원을 반환합니다.\n", money);
                goto start;
            }
            else if(money == 900)
            {
                printf("음료가 나옵니다.\n");
                printf("재고 : %d", stock5-1);
            }
            else if(money > 900)
            {
                printf("음료가 나옵니다.\n");
                printf("%d원을 반환합니다.\n", money-900);
                printf("재고 : %d", stock5-1);
            }
            break;
        default:
            printf("잘못된 선택입니다.\n");
            goto start;
    }
    printf("안녕히 가십시오.\n");

    return 0;
}