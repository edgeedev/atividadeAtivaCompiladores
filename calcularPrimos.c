#include <stdio.h>
#include <stdlib.h>

int verificarNumeroPrimo(int valor) {
    int i, numeroDeDivisores = 0;
    for (i = 1; i <= valor; i++) {
        if (valor % i == 0) {
            numeroDeDivisores++;
        }
    }

    if (numeroDeDivisores == 2) {
        return 1; // se for primo
    }
    else {
        return 0; // se NÃO for primo
    }
}

int main() {
    int numerosPrimos[100] = {};
    int checarPrimo = 0;
    int count = 1;
    int indexVetor = 0;

    while (indexVetor < 100) {
        checarPrimo = verificarNumeroPrimo(count);
        if (checarPrimo == 1) {
            numerosPrimos[indexVetor] = count;
            indexVetor = indexVetor + 1;
        }
        count++;
    }

    for (int i = 0; i < 100; i++) {
        printf("%i ", numerosPrimos[i]);
    }
}



