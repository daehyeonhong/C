#include<stdio.h>

int main_condition(void) {

    /*if(condition){}else{}*/

    /*int age = 7;

    if (age >= 20) {
        printf("�Ϲ����Դϴ�.");
    }
    else {
        printf("�л��Դϴ�.");
    }

    printf("\n");
    printf(age < 8 ? "����Դϴ�." : age >= 8 && age <= 13 ? "�ʵ��л��Դϴ�." : age >= 14 && age <= 16 ? "���л��Դϴ�." : age >= 17 && age <= 19 ? "����л��Դϴ�." : "�Ϲ����Դϴ�.");
    printf("\n");*/

    /*break / continue*/
    /*for (int i = 1; i <= 30; i++) {
        if (i >= 6) {
            printf("������ �л��� ���� ������!\n");
            break;
        }
        printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���!\n", i);
    }*/

    /*for (int i = 1; i < 30; i++)
    {
        if (i >= 6 && i <= 10)
        {
            printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
            continue;
        }
        printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���!\n", i);
    }*/

    /*int a = 10, b = 11, c = 12, d = 12;

    if (a == b || c == d) {
        printf("a�� b, Ȥ�� c�� d�� ���� �����ϴ�\n");
    }
    else
    {
        printf("���� ���� �ٸ��׿�\n");
    }*/

    /*���� ���� ��*/
    /*srand(time(NULL));

    int i = rand() % 3;

    printf(i == 0 ? "����" : i == 1 ? "����" : i == 2 ? "��" : "�����");*/

    /*switch (switch_on)
    {
    case condition: result;
    default:
        break;
    }*/

    /*srand(time(NULL));
    int i = rand() % 3;
    switch (i)
    {
    case 0:printf("����"); break;
    case 1:printf("����"); break;
    case 2:printf("��"); break;
    default:printf("�����"); break;
    }*/

    /*int age = 21;
    switch (age)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:printf("����Դϴ�."); break;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:printf("�ʵ��л��Դϴ�."); break;
    case 14:
    case 15:
    case 16:printf("���л��Դϴ�."); break;
    case 17:
    case 18:
    case 19:printf("����л��Դϴ�."); break;

    default:printf("�л��� �ƴѰ� ����.");
        break;
    }*/

    /*Up and Down*/
    srand(time(NULL));
    int num = rand() % 100 + 1;
    printf("���� ==> %d", num);
    int answer = 0;
    int chance = 5;
    while (chance > 0)
    {
        printf("���� ��ȸ %d ��\n", chance--);
        printf("���ڸ� ���������� (1~100) : ");
        scanf_s("%d", &answer);

        if (answer > num) {
            printf("DOWN �� \n\n");
        }
        else if (answer < num) {
            printf("UP �� \n\n");
        }
        else if (answer == num) {
            printf("�����Դϴ�!\n\n");
            break;
        }
        else {
            printf("�� �� ���� ������ �߻��߾��\n\n");
        }

        if (chance == 0)
        {
            printf("��� ��ȸ�� �����ϼ̽��ϴ�.\n\n"); break;
        }
    }

    return 0;
}