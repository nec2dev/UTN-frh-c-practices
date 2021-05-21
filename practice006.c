/*Solicitar al usuario los tres lados de un triángulo
e informar su tipo (escaleno, equilatero, isóceles*/

#include <stdio.h>

int main() {

    float l1, l2, l3;
   
    printf("Por favor, Ingrese la medida del primer lado del tri%cngulo\n", 160);
    scanf("%f", &l1);

    printf("Ahora, Ingrese la medida del segundo lado del tri%cngulo\n", 160);
    scanf("%f", &l2);

    printf("Por favor, Ingrese la medida del tercer lado del tri%cngulo\n", 160);
    scanf("%f", &l3);

    if(l1==l2&&l2==l3){
        printf("El tri%cngulo es equil%ctero",160,160);
    }else if(l1==l2||l2==l3||l3==l1){
        printf("El tri%cngulo es is%cceles",160,162);
    }else{
      
        printf("El tri%cngulo es escaleno",160);
    }
    return 0;
}; 