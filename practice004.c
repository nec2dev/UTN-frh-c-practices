

#include <stdio.h>
#include <math.h>

int main() {

    long int segundos, horas;
    int minutos, segundosfinal;
   
    printf("Por favor, Ingrese la cantidad de segundos\n");
    scanf("%i", &segundos);

    horas = segundos/3600;
    //minutos = (segundos-horas*3600)/60;
    minutos = (segundos%3600)/60;
    segundosfinal = (segundos%3600)%60;

    printf("%i seg. expresados en horas, minutos y segundos= %i:%i:%i.", segundos, horas, minutos, segundosfinal);

   return 0;
}; 