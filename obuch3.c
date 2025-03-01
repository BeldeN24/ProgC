#include <stdio.h>

int main(void)
{
    int count = 7;
    for (int pr1 = 0; pr1 < count; pr1++)
    {
        for (int pr2 = 0; pr2 < count; pr2++)
        {
            if (pr1 == pr2 || pr2 == count - pr1 -1 || pr1 == 0 || pr1 == count-1)
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
return 0;
}