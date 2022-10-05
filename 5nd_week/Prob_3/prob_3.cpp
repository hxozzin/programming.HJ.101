#include <stdio.h>

int get_num(void); //매개변수가 없는 함수 선언

int main(void)
{
    int res;

    res = get_num(); //함수 호출, 반환값은 res에 저장
    printf("Result value : %d\n", res); //계산된 반환값 출력

    return 0;
}

int get_num(void) //매개변수가 없고 반환형만 있는 함수
{
    int num1, num2; //키보드 입력값을 저장할 변수들 선언
    int res;
    char op;

    printf("Enter two integers and symbols : "); //입력 안내 메시지
    scanf_s("%d%c%d", &num1, &op, 1, &num2); 

    switch (op)
    {
    case '+': res = num1 + num2; break; // 덧셈연산
    case '-': res = num1 - num2; break; // 뺄셈 연산
    case '*': res = num1 * num2; break; // 곱셈 연산
    case '/': res = num1 / num2; break; // 나눗셈 연산
    case '%': res = num1 % num2; break; // 나머지 연산
    }


    return res; // 입력한 사칙연산의 결과값 반환
}

