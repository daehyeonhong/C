#include<stdio.h>

//void swap(int a, int b);
//void swap_addr(int* a, int* b);
void changeArray(int* ptr);

int main_pointer(void) {
    /*Pointer*/
    //int john = 1, tim = 2, harry = 3;

    //printf("john�� �ּ� :%d, ��ȣ %d\n", &john, john);
    //printf("tim�� �ּ� :%d, ��ȣ %d\n", &tim, tim);
    //printf("harry�� �ּ� :%d, ��ȣ %d\n", &harry, harry);

    //int* mission;
    //mission = &john;
    //printf("mission�� �湮�ϴ� ���� �ּ� : %d, ��ȣ : %d\n", mission, *mission);

    //mission = &tim;
    //printf("mission�� �湮�ϴ� ���� �ּ� : %d, ��ȣ : %d\n", mission, *mission);

    //mission = &harry;
    //printf("mission�� �湮�ϴ� ���� �ּ� : %d, ��ȣ : %d\n", mission, *mission);

    //mission = &john;

    //*mission = *mission * 3;
    //printf("mission�� ��ȣ�� �ٲ� ���� �ּ� : %d, ��ȣ : %d\n", mission, *mission);

    //mission = &tim;

    //*mission = *mission * 3;
    //printf("mission�� ��ȣ�� �ٲ� ���� �ּ� : %d, ��ȣ : %d\n", mission, *mission);

    //mission = &harry;

    //*mission = *mission * 3;
    //printf("mission�� ��ȣ�� �ٲ� ���� �ּ� : %d, ��ȣ : %d\n", mission, *mission);

    //int* spy = &john;

    //printf("\n ... Spy�� Mission �����ϴ� ��\n\n");
    //*spy = *spy - 2;
    //printf("\nSpy�� �湮�� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

    //spy = &tim;

    //printf("\n ... Spy�� Mission �����ϴ� ��\n\n");
    //*spy = *spy - 2;
    //printf("\nSpy�� �湮�� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

    //spy = &harry;

    //printf("\n ... Spy�� Mission �����ϴ� ��\n\n");
    //*spy = *spy - 2;
    //printf("\nSpy�� �湮�� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

    //printf("john�� �ּ� :%d, ��ȣ %d\n", &john, john);
    //printf("tim�� �ּ� :%d, ��ȣ %d\n", &tim, tim);
    //printf("harry�� �ּ� :%d, ��ȣ %d\n", &harry, harry);

    //printf("mission�� �ּ� : %d\n", &mission);
    //printf("spy�� �ּ� : %d\n", &spy);

    //int arr[3] = { 5,10,15 };
    //int* ptr = arr;
    //for (int i = 0; i < 3; i++) {
    //    printf("Array arr[%d]�� �� : %d\n", i, arr[i]);
    //}

    //for (int i = 0; i < 3; i++) {
    //    printf("Pointer ptr[%d]�� �� : %d\n", i, ptr[i]);
    //}
    //ptr[0] = 100;
    //ptr[1] = 200;
    //ptr[2] = 300;
    //for (int i = 0; i < 3; i++) {
    //    printf("Array arr[%d]�� �� : %d\n", i, arr[i]);
    //    printf("Array arr[%d]�� �� : %d\n", i, *(arr + i));
    //}

    //for (int i = 0; i < 3; i++) {
    //    printf("Pointer ptr[%d]�� �� : %d\n", i, ptr[i]);
    //    printf("Pointer ptr[%d]�� �� : %d\n", i, *(ptr + i));
    //}

    ///**(arr + i) == arr[i];*/
    ///*arr == arr �迭�� ù��° ���� �ּҿ� ���� == &arr[0]*/
    //printf("arr ��ü�� �� : %d\n", arr);
    //printf("arr[0] ��ü�� �� : %d\n", &arr[0]);

    //printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr);
    //printf("arr[0]�� ���� �� : %d\n", *&arr[0]);
    //printf("arr[0]�� ���� �� : %d\n", *&*&*&*&*&*&*&*&*&*&*&*&*&arr[0]);
    //printf("arr[0]�� ���� �� : %d\n", arr[0]);

    /*swap*/
    /*int a = 10, b = 20;*/
    /*a �� b�� ���� �ٲ۴�*/
    /*printf("a�� �ּ� : %d\n", &a);
    printf("b�� �ּ� : %d\n", &b);

    printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
    swap(a, b);
    printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);*/
    /*���� ���� ���� (Call by Value) => ���� �����Ѵٴ� �ǹ�*/

    /*�ּ� ���� �ѱ��? �޸� ������ �ִ� �ּҰ� ��ü�� �ѱ��*/
    /*printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
    swap_addr(&a, &b);
    printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);*/

    /*�迭�� ��, arr2 => �ּ�*/
    int arr2[3] = { 10,20,30 };

    changeArray(arr2);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr2[i]);
    }

    return 0;

}

//void swap(int a, int b) {
//    printf("(Swap �Լ� ��)a�� �ּ� : %d\n", &a);
//    printf("(Swap �Լ� ��)b�� �ּ� : %d\n", &b);
//    printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
//    int temp = a;
//    a = b;
//    b = temp;
//    printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
//}
//
//void swap_addr(int* a, int* b) {
//    printf("(Swap �Լ� ��)a�� �ּ� : %d\n", &a);
//    printf("(Swap �Լ� ��)b�� �ּ� : %d\n", &b);
//    printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//    printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
//}

void changeArray(int* ptr) {
    ptr[2] = 50;
}