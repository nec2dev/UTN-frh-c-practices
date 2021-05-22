/*Solicitar al usuario los tres lados de un triángulo
e informar su tipo (escaleno, equilatero, isóceles*/

#include <stdio.h>

int main() {

    float lado1, lado2, lado3;
   
    printf("Por favor, Ingrese la medida del primer lado del tri%cngulo\n", 160);
    scanf("%f", &lado1);

    printf("Ahora, Ingrese la medida del segundo lado del tri%cngulo\n", 160);
    scanf("%f", &lado2);

    printf("Por favor, Ingrese la medida del tercer lado del tri%cngulo\n", 160);
    scanf("%f", &lado3);

    if(lado1==lado2&&lado2==lado3){
        printf("El tri%cngulo es equil%ctero",160,160);
    }else if(lado1==lado2||lado2==lado3||lado3==lado1){
        printf("El tri%cngulo es is%cceles",160,162);
    }else{
      
        printf("El tri%cngulo es escaleno",160);
    }
    
    return 0;
}; 