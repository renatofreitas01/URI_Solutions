/*********
Problem 1175
    Troca em Vetor I
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n[20], i;

    for(i = 19; i >= 0; i--){
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 20; ++i) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}