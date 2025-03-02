#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int cash;
    size_t size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size/2; i++)
        {
        cash = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = cash;
        }
    for (size_t i = 0; i <size; i++)
        printf("%d\n", array[i]);
    return 0;
}