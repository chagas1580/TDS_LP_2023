#include<stdio.h>
int main() {

int tamanho = 1;
int soma = 0;
int a[8];
a[0] = 10;
a[1] = 20;
a[2] = 30;
a[3] = 40;
a[4] = 50;
a[5] = 60;
a[6] = 70;
a[7] = 80;
a[8] = 90;
for(int i=0; i< tamanho; i++) {
soma = a[5] + a[8];
printf(" a soma dos numeros eh: \n%d", soma);
}
return 0;
}