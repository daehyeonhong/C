#include<stdio.h>

//declaration
void p(int num);

void function_without_return();
int function_with_return();
void function_without_parameters();
void function_with_parameters(int num1, int num2, int num3);

int apple(int total, int ate);

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_funtion(void) {
    /*function
    calculator*/

    //int num = 2;
    ///*printf("num�� %d �Դϴ�.\n", num);*/
    //p(num);

    //num += 3;
    ///*printf("num�� %d �Դϴ�.\n", num);*/
    //p(num);

    //num -= 1;
    ///*printf("num�� %d �Դϴ�.\n", num);*/
    //p(num);

    //num *= 3;
    ///*printf("num�� %d �Դϴ�.\n", num);*/
    //p(num);

    //num /= 3;
    ///*printf("num�� %d �Դϴ�.\n", num);*/
    //p(num);

    /*�Լ� ����*/
    /*��ȯ ���� ���� �Լ�*/

    function_without_return();

    /*��ȯ ���� �ִ� �Լ�*/
    int ret = function_with_return();
    p(ret);

    /*parameter(���� ��)�� ���� �Լ�*/
    function_without_parameters();

    /*parameter(���� ��)�� �ִ� �Լ�*/
    function_with_parameters(35, 27, 12);

    /*parameter�� �ް�, return�� �ִ� function*/
    int retu = apple(5, 2);
    printf("��� %d �� �߿� %d ���� ������? %d ���� ���ƿ�.\n", 10, 4, apple(10, 4));

    /*calculator function*/
    int num = 2;
    num = add(num, 3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = div(num, 6);
    p(num);


    return 0;
}

//definition
//return_type function_name(parameters){}
void p(int num) {
    printf("num �� %d �Դϴ�.\n", num);
}

void function_without_return() {
    printf("��ȯ ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return() {
    printf("��ȯ ���� �ִ� �Լ��Դϴ�.\n");
}

void function_without_parameters() {
    printf("���� ���� ���� �Լ��Դϴ�.\n");
}

void function_with_parameters(int num1, int num2, int num3) {
    printf("���� ���� �ִ� �Լ��̸� ���޹��� ���� %d, %d, %d �Դϴ�.\n", num1, num2, num3);
}

int apple(int total, int ate) {
    printf("���� ���� ��ȯ ���� �ִ� �Լ��Դϴ�.\n");
    return total - ate;
}

int add(int num1, int num2) {
    return num1 + num2;
}
int sub(int num1, int num2) {
    return num1 - num2;
}
int mul(int num1, int num2) {
    return num1 * num2;
}
int div(int num1, int num2) {
    return num1 / num2;
}