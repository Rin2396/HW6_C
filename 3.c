#include <stdio.h>
#include <string.h>

int main() {
    char password[101];
    int n, big = 0, small = 0, numbers = 0, kod = 0, dop = 0, k = 0;
    scanf("%s", password);
    n = strlen(password);
    if (n >= 8 && n <= 14) {
      for (int i = 0; i < n; i++) {
        if (password[i] < 33 || password[i] > 126) { // если коды элементов пароля не входят в обозначенную область
            dop = 1;
        }       
        if (password[i] >= 'a' && password[i] <= 'z') { // наличие хоть одной маленькой буквы
            small = 1;
        }        
        else if(password[i] >= 'A' && password[i] <= 'Z') { // наличие хоть одной заглавной буквы
            big = 1;
        }        
        else if(password[i] >= '0' && password[i] <= '9') { // наличие хоть одной цифры
            k++;
            if (k >= 2) {
              numbers = 1;
            }
        }        
        else if (password[i] >= 33 && password[i] <= 126) { // наличие хоть одного знака
            kod = 1;
        }
      }
      if (small + big + numbers + kod < 3 || dop > 0) {
        printf("NO"); // если не выполняются как минимум 3 условия или коды элементов пароля не входят в обозначенную область
      }
      else {
        printf("YES"); // если 3 условия выполняются и коды элементов пароля принадлежат области
      }
    }
    else { // если пароль не подходит по длине
        printf("NO");
    }
}