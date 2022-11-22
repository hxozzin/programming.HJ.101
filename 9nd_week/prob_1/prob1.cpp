#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int *pi;
    int i, j, cnt = 0;
    
    printf("> 양수 입력 : ");
    scanf_s("%d", &num);

    pi = (int *)malloc((num - 1) * sizeof(int));            // 메모리 동적 할당 후 포인터 연결 (저장공간이 num - 1개)

    if (pi == NULL)         // 동적 할당에 실패하면 NULL 포인터 반환
    {
        printf("메모리 부족...\n");      // 예외 상황 메세지 출력
        exit(1);                         // 프로그램 종료
    }

   for (i = 0; i < (num - 1); i++)
   {
        pi[i] = i + 2;
   }
   i = 0;      // 다시 i를 0으로 반환
  
   while (i < (num - 2))
   {

       if (pi[i] == 0)
       {
           i++;
           continue;
       }

        for (j = i + 1; j < (num - 1); j++)
        {
            if ((pi[j] % pi[i]) == 0)
            {
                pi[j] = 0;
            }
        }
        i++;
    }

    for (i = 0; i < (num - 1); i++)
    {
        if (pi[i] != 0)
        {
            printf("%5d", pi[i]);
        }
        else
        {
            printf("%5c", 'X');
        }
        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }

    free(pi);

    return 0;
}

