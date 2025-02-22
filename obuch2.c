#include <stdio.h>

int main(void)
{
    int param1 = 15, param2 = 18, param3 = 18;
    int max = param3;
    if (param1 > param2 && param1 > param3)
    {
        max = param1;
    }
    else if (param2 > param1 && param2 > param3)
        {
            max = param2;
        }
    printf("MAX %d is \n",max);
    return(0);
}