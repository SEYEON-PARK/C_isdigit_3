#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a = '5';

    if (isdigit(a) != 0)
    {
        printf("숫자입니다.\n");
    }
    else
    {
        printf("숫자가 아닙니다.\n");
    }

    return 0;
}
