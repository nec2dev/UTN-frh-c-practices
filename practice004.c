/*Solicite al usuario que ingrese un número entero
e informe si diciho número es par o impar*/

#include <stdio.h>

int main() {

    int num;
   
    printf("Por favor, Ingrese un n%cmero entero\n", 163);
    scanf("%d", &num);

    if(num%2==0){
        printf("el n%cmero ingresado es par", 163);
    }else{
        printf("el n%cmero ingresado es impar", 163);
    }

   return 0;
}; 