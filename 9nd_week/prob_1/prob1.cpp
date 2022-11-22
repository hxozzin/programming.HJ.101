#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int *pi;
    int i, j, cnt = 0;
    
    printf("> ��� �Է� : ");
    scanf_s("%d", &num);

    pi = (int *)malloc((num - 1) * sizeof(int));            // �޸� ���� �Ҵ� �� ������ ���� (��������� num - 1��)

    if (pi == NULL)         // ���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
    {
        printf("�޸� ����...\n");      // ���� ��Ȳ �޼��� ���
        exit(1);                         // ���α׷� ����
    }

   for (i = 0; i < (num - 1); i++)
   {
        pi[i] = i + 2;
   }
   i = 0;      // �ٽ� i�� 0���� ��ȯ
  
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

