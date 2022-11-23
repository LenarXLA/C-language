#include <stdio.h>
/* вывод таблицы температур по Фаренгейту и Цельсию
    для celsius = 0, 20, ..., 300;
    версия с вещественной арифметикой */
main()
{
    setlocale(0,"Russian");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Таблица температур по Фаренгейту и Цельсию\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0; /* нижняя граница температур в таблице */
        printf("%3.0f %6.0f\n", celsius, fahr); /* верхняя граница */
        celsius = celsius + step; /* величина шага */
    }
}
