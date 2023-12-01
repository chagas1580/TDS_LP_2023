//#include<stdio.h>
int main() {
int tabuada = 0;
int resultado[9];
int  start;
printf("------tabuada 1.0------\n");

printf("deseja iniciar a tabuada 1.0? 1/0  \n");
scanf("%d", &start);
if (start == 0){
   return;
}
for (int a=0; a<=10; a++){
   
   for(int x = 0; x<= 10; x++){
      int valor= a * x;
      
    printf("%dx%d = %d\n", a, x, valor);
    resultado[a] = valor;
    
   }

}




 









}