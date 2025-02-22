#include <stdio.h>
int main(void)
{
    char symvol = 'A';
    float pi = 3.141592;
    unsigned short age = 41;
    printf("Привет, меня зовут Денис. Мой возраст %d \n", age);
    printf("Введите свой возраст: \n");
    scanf("%d", &age);
    printf("Отныне Ваш возраст: %d \n", age);
    printf("Символ %c в кодировке имеет значение ", symvol);
    printf("%d \n", symvol);
    printf("Число Пи = %3.2f \n", pi);
    printf("int %lu \n", sizeof(int));
    printf("short %lu \n", sizeof(short));
    printf("unsigned short %lu \n", sizeof(age));
    return(0);    
}

