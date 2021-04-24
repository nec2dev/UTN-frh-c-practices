#include <stdio.h>

int main() {

    float base, altura, perimetro, superficie;

    printf("Por favor ingrese la base: \n");
    scanf("%f", &base);

    printf("Por favor ingrese la altura: \n");
    scanf("%f", &altura);

    superficie = base*altura;
    perimetro = 2*(base+altura);

    printf("El perímetro es igual a: %.2f. \nLa seuperficie es igual a: %.2f. \n", perimetro, altura);
}