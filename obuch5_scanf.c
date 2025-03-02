#include <stdio.h>

int main()
{
    float length_m, length_f;
    printf("Enter Length in foots: ");
    scanf("%f", &length_f);
    length_m = length_f / 3.281;
    printf("%.2f foots is %.2f meters\n", length_f, length_m);
    return 0;
}