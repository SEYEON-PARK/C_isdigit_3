#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a = '5';

    if (isdigit(a) != 0)
    {
        printf("�����Դϴ�.\n");
    }
    else
    {
        printf("���ڰ� �ƴմϴ�.\n");
    }

    return 0;
}
