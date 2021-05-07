/*2.Solicitar al usuario que ingrese un número real
y luego calcule e informe: su doble, su mitad, su 
cuadrado y su cubo*/

#include <stdio.h>
int main(){

    float num;

    printf("Por favor, ingrese un n%cmero real: \n", 163);
    scanf("%f", &num);

    float doubleNum = 2*num;
    float halfNum = num/2;
    float squaredNum = num*num;
    float cubedNum = num*num*num;

    printf("El doble de %f es: %.2f\n", num, doubleNum);
    printf("La mitad de %f es: %.2f\n", num, halfNum);
    printf("El cuadrado de %f es: %.2f\n", num, squaredNum);
    printf("El cubo de %f es: %.2f\n", num, cubedNum);

    return(0);
}