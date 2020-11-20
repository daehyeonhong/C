#include <stdio.h>
#include<time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void failure();

int main(void) {
    srand(time(NULL));
    int count = 0;
    for (int i = 1; i < 5; i++)
    {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        /*printf("%d x %d ?" num1, num2);*/
        showQuestion(i, num1, num2);

        int answer = -1;
        scanf_s("%d", &answer);

        if (answer == -1)
        {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }
        else if (answer==num1*num2)
        {
            success();
            count++;
        }
        else {
            failure();
        }

    }

    return 0;
}

int getRandomNumber(int level) {
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
    printf("\n\n\n########### %d ��° ��й�ȣ ###########\n\n\n", level);
    printf("\n\t%d x %d�� \n\n", num1, num2);
    printf("#################################\n");
    printf("\n��й�ȣ�� �Է��ϼ��� ==> (���� : -1)");
}