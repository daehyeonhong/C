#include<time.h>
#include<stdio.h>

int main_random(void) {
    /*srand(time(NULL));
    int num = rand() % 100 + 1;*/

    printf("���� �ʱ�ȭ ����==>\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10 + 1);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10 + 1);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10 + 1);
    }
    printf("\n");

    srand(time(NULL));

    printf("���� �ʱ�ȭ ����==>\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10 + 1);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10 + 1);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10 + 1);
    }
    printf("\n");


    return 0;
}