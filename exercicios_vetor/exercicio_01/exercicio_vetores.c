//#include <stdio.h>
int main() {
printf("-----vetores 1.0-----\n");
int tamanho = 1;
int a [6];
a[0] = 1;
a[1] = 0;
a[2] = -5;
a[3] = -2;
a[4] = 5;
a[5] = 7;
int soma = 0;
soma =a[0] + a[1] + a[5];
for( int i = 0; i < tamanho; i++) {
    
    printf("a soma dos valores do vetor a eh: %d\n", soma);
    a[4] = 100;
 printf(" os valores atribuidos sao:\n %d %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
}
 



return 0;

}