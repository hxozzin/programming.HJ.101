#include <stdio.h>

int get_num(void); //�Ű������� ���� �Լ� ����

int main(void)
{
    int res;

    res = get_num(); //�Լ� ȣ��, ��ȯ���� res�� ����
    printf("Result value : %d\n", res); //���� ��ȯ�� ���

    return 0;
}

int get_num(void) //�Ű������� ���� ��ȯ���� �ִ� �Լ�
{
    int num1, num2; //Ű���� �Է°��� ������ ������ ����
    int res;
    char op;

    printf("Enter two integers and symbols : "); //�Է� �ȳ� �޽���
    scanf_s("%d%c%d", &num1, &op, 1, &num2); 

    switch (op)
    {
    case '+': res = num1 + num2; break; // ��������
    case '-': res = num1 - num2; break; // ���� ����
    case '*': res = num1 * num2; break; // ���� ����
    case '/': res = num1 / num2; break; // ������ ����
    case '%': res = num1 % num2; break; // ������ ����
    }


    return res; // �Է��� ��Ģ������ ����� ��ȯ
}

