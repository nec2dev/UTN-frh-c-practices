/*3. Ingresar el precio de lista de un producto, calcular
e informar el precio final si al precio de lista se le
aplica un 10% de decuento*/

#include <stdio.h>
int main(){

    float listPrice;

    printf("Por favor, ingrese el precio de lista: \n", 163);
    scanf("%f", &listPrice);

    float listPriceDiscount = listPrice-(listPrice/10);;

    printf("El precio de lista es de $ %.2f.\nCon un descuanto aplicado del 10%c, el precio final es de: $ %.2f\n", listPrice, 37, listPriceDiscount);

    return(0);
}