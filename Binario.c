#include <stdio.h>

void decimal_para_binario(int n) {
    int numero_binario[32];
    int i = 0;

    while (n != 0) {
        numero_binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    if(i%4!=0){
        while( i%4!=0){
            numero_binario[i] = 0;
            i++;
        }
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", numero_binario[j]);
        if((j % 4) == 0)
            printf(" ");
    }
}

int main() {
    int numero_decimal = 0;

    scanf("%d", &numero_decimal);
    printf("O binario equivalente de %d: ", numero_decimal);
    decimal_para_binario(numero_decimal);
    printf("\n");

    return 0;
}