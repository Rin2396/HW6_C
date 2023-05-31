#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* join (char* words[], int n) { 
    char *cout = malloc(255); // выделяем память
    for (int i = 0; i < n - 1; i++) {
        strcat (cout, words[i]); // запысываем в cout значение words[i]
        strcat (cout, " "); // записываем в cout " "
    }
    strcat (cout, words[n - 1]); // записываем в cout значение последней переменной
    return cout;
}

int main () {
    char* words[4] = {
        "Fashion", 
        "is", 
        "my",
        "profession"
    };
    printf("%s ", join(words, 4));
}