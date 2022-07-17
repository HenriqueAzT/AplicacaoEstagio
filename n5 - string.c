#include <stdio.h>
#include <string.h>

int main(void) {
	int i;
    char string[] = "Estagio";
    size_t tamanho = strlen(string);
    for(i = 0; i < tamanho / 2; i++) {
       char var = string[i];
       string[i] = string[tamanho -i-1];
       string[tamanho - i - 1] = var;
    }
    printf("%s", string);
}
