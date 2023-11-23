// #include <stdio.h>

int main(){
    
int num1, num2, soma, subtracao, multi, div;
printf("Calculadura 1.0\n");
printf("entre os 2 numeros a serem processados: ");
scanf("%i%i", &num1, &num2);
soma = num1 + num2;
subtracao = num1 - num2;
multi = num1 * num2;
div = num1 / num2;
printf("a soma é: %i/n", soma);
printf("a subtracao é: %i/n", subtracao);
printf("o produto é: %i/n", multi);
printf("a divisao é: %i/n", div);
return 0;   
}