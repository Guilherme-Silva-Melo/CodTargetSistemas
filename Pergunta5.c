#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
  int inicio = 0;
  int fim = strlen(str) - 1;

  while (inicio < fim) {
    // Troca os caracteres no início e no final
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    // Move os índices para o próximo par de caracteres
    inicio++;
    fim--;
  }
}

int main(void) {
  int x;
  char str[55] = "OLA MUNDO";
  inverterString(str);
  printf("%s", str);
}
