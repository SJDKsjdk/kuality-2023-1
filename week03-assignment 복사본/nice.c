#include <stdio.h>
 
int main()
{
    int n, t = 0;
    float average;
    char score;

    printf("총 수강 과목 수는? : ");
    scanf(" %d", &n);

    for (int i = 0; i < n; i++)
    {
        flag:
        printf("과목 %d의 학점을 입력하세요. : ", i + 1);
        scanf(" %c", &score);

        switch (score)
        {
            case 'A':
                t += 4;
                break;
            case 'B':
                t += 3;
                break;
            case 'C':
                t += 2;
                break;
            case 'D':
                t += 1;
                break;
            case 'F':
                t += 0;
                break;
            default:
                printf("잘못된 정보를 입력하였습니다.");
                goto flag;
        }
    }
    
    average = (float) t / n;

    printf("평균 학점은 %.2f입니다.", average);

    return 0;
}