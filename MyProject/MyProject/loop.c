#include<stdio.h>

int main(void) {
    /*loop*/
    /*for, while, do while*/

    /*for (declaration, condition, increase)*/
    /*
    printf("for\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Hello World%d\n", i);
    }*/

    /*while (condition)*/
    /*printf("while\n");
    int i = 0;
    while (i < 10) {
        printf("Hello World%d\n", i++);
    }*/

    /*do () while (condition)*/
    /*printf("do while\n");
    int i = 0;
    do
    {
        printf("Hello World%d\n", i++);
    } while (i < 10);*/

    /*duplication loop*/
    /*for (int i = 0; i < 3; i++)
    {
        printf("ù ��° �ݺ��� ==> %d\n", i);
        for (int j = 0; j < 5; j++)
        {
            printf("    �� ��° �ݺ��� ==> %d\n", j);
        }
    }*/

    /*multiplication table*/
    /*for (int i = 2; i < 10; i++)
    {
        printf("%d�� ���\n", i);
        for (int j = 1; j < 10; j++)
        {
            printf("    %d * %d = %d", i, j, i * j);
        }
    }*/

    int input;
    printf("���ڸ� �Է��ϼ���");
    scanf_s("%d", &input);

    /*for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    /*for (int i = input; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}