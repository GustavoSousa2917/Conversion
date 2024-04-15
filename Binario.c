#include <stdio.h>

void decimal_para_binario(int n) {
    int numerobinario[32];
    int i = 0;

    while (n != 0) {
        numerobinario[i] = n % 2;
        n = n / 2;
        i++;
    }

    if(i % 4 != 0){
        while(i % 4 != 0){
            numerobinario[i] = 0;
            i++;
        }
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", numerobinario[j]);
        if((j % 4) == 0)
            printf(" ");
    }
}

int main() {
    int numerodecimal = 0;

    scanf("%d", &numerodecimal);
    printf("O binario equivalente de %d: ", numerodecimal);
    decimal_para_binario(numerodecimal);
    printf("\n");

    return 0;
}
