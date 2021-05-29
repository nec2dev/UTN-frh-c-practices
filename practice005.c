/*Solicite al usuario que ingrese dos números enteros
e informe cuál es el mayor de ellos o si son iguales*/

#include <stdio.h>

int main() {

    int num001, num002;
   
    printf("Por favor, Ingrese un n%cmero entero\n", 163);
    scanf("%d", &num001);

    printf("Ahora, Ingrese otro n%cmero entero, por favor\n", 163);
    scanf("%d", &num002);

    if(num001>num002){
        printf("el n%cmero mayor ingresado es %d", 163, num001);
    }else if(num001<num002){
        printf("el n%cmero mayor ingresado es %d", 163, num002);
    }else{
        printf("Los n%cmeros ingresados son iguales", 163);
    }
    return 0;
}; 