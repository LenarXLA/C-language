#include <stdio.h>
/* ����� ������� ���������� �� ���������� � �������
    ��� celsius = 0, 20, ..., 300;
    ������ � ������������ ����������� */
main()
{
    setlocale(0,"Russian");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("������� ���������� �� ���������� � �������\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0; /* ������ ������� ���������� � ������� */
        printf("%3.0f %6.0f\n", celsius, fahr); /* ������� ������� */
        celsius = celsius + step; /* �������� ���� */
    }
}
