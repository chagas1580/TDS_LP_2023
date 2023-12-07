#include<stdio.h>

int main() {
printf("-----exercicio vetores 3.0-----\n");
int tamanho = 1;
int a[10];
a[0] = 5;
a[1] = 10;
a[2] = 15;
a[3] = 20;
a[4] = 25;
a[5] = 30;
a[6] = 35;
a[7] = 40;
a[8] = 45;
a[9] = 50;
for (int i = 0; i< tamanho; i++) {
    printf("esses sao os numeros impares do vetor: \n %d %d %d %d", a[0], a[2], a[4], a[6], a[8]);
    }
    



    return 0;
}