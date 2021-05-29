/*4. dada una cantidad de segundos, conviertirlas en horas, 
minutos y segundos.*/

#include <stdio.h>
#include <math.h>

int main() {

    long int segundos, horas;
    int minutos, segundosfinal;
   
    printf("Por favor, Ingrese la cantidad de segundos\n");
    scanf("%d", &segundos);

    horas = segundos/3600;
    //minutos = (segundos-horas*3600)/60;
    minutos = (segundos%3600)/60;
    segundosfinal = (segundos%3600)%60;

    printf("%d seg. expresados en horas, minutos y segundos= %d:%d:%d.", segundos, horas, minutos, segundosfinal);

   return 0;
};  