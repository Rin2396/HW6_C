#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int concat(int a, int b) // сщздаю функцию, которая будет совмещать 2 числа
{  
    char number1[3], number2[3]; // оба числа могут быть максимум двузначными, поэтому создаем строки длиной 3
    sprintf (number1, "%d", a); // записываем в первую строку- первое число,
    sprintf (number2, "%d", b); // во вторую - втророе

    int c; // создаем третье число, в котором соединим эти два числа
    c = atoi (strcat (number1, number2)); // соединяем строки с числами и делаем из строки число

    return c; // возвращаем получвшееся число
}


int ispolnitel (int num) {
    int first_digit, second_digit, third_digit; // делим 3-хзначное число на 3 цифры
    
    first_digit = num / 100;
    second_digit = (num / 10) % 10;
    third_digit = num % 10;

    int out; // создаем число, которое будет выводить результат действий (первое*второе и второе*третье)
    if (first_digit * second_digit > second_digit * third_digit) { // записываем в порядке невозрастания
        out = concat (first_digit * second_digit, second_digit * third_digit);

    } else {
        out = concat (second_digit * third_digit, first_digit * second_digit);
    }

    return out; // и возвращаем получившееся значение
}

int main () {
    int x;
    scanf ("%d", &x); // вводим число
    printf ("%d", ispolnitel(x)); // выводим результат действий
    return 0;
}