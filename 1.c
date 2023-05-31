#include <stdio.h>

int main () {
    int a, b, c, d;
    scanf ("%d\n %d\n %d\n %d", &a, &b, &c, &d); // вводим
    for (int i = a; i <= b; i++) { // рассматриваем отрезок от а до b
        if (i % d == c) { // если число при делении на d дает отсаток c
            printf ("%d ", i); // выводим число
        }
    }
    return 0;
}