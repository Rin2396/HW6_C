#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* join (char* words[], int n) { 
    char *merge_words = malloc (255); // выделяем память
    for (int i = 0; i < n - 1; i++) {
        strcat (merge_words, words[i]); // запысываем значение words[i]
        strcat (merge_words, " "); // потом добавляем пробел
    }
    strcat (merge_words, words[n - 1]); // записываем значение последней переменной (без пробела)
    return merge_words;
}

int main () {
    char* words[4] = {
        "Fashion", 
        "is", 
        "my",
        "profession"
    };
    printf("%s ", join (words, 4));
}
