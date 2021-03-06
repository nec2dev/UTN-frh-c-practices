/*Les solicitan desarrollar un programa en lenguaje C para
la evaluación de los costos generados por los aviones per-
tenecientes a una campaña de chárter
Etapa 1: Estructura secuencial y Estructura de desición
Al acceder al sistema el usuario debe ingresar:
    *Número de matrícula
    *Distancia del vuelo a realizar
    *Cantidad de pasajeros
Aquellos valores ingresados erróneamente deben ser in-
formados por pantalla. A saber:
    *Número de matrícula:
    entre 10000 y 20000 corresponde a aviones tipo Cessna
    entre 20001 y 30000 corresponde a aviones tipo Boeing
    entre 30001 y 40000 corresponden a aviones tipo Airbus
    Cualquier otro Número de Matricula se considera erróneo, 
    debe ser informado por pantalla y descartarse.
El programa debe calcular e informar: El costo que genera 
cada avión, sabiendo que el consumo promedio para cada tipo 
de avión es: 
        Cessna	        Boeing	        Airbus
        0.535 US$/Km	49.665 US$/Km	10.464 US$/Km*/

#include <stdio.h>

int main() {
    int regnum, passnum, planetype;
    float flightdistance, planecost;

    printf("Ingrese el n%cmero de matr%ccula\n", 163, 161);
    scanf("%d", &regnum);

    printf("Ingrese la distancia de vuelo a realizar (en km)\n");
    scanf("%f", &flightdistance);

    printf("Ingrese la cantidad de pasajeros\n");
    scanf("%d", &passnum);

    if(regnum>=10000&&regnum<=20000){
        planetype=1;     
    }else if (regnum>20000&&regnum<=30000){
        planetype=2;
    }else if(regnum>30000&&regnum<=40000){
        planetype=3;
    }else{
        printf("El valor para matr%ccula ingresado es err%cneo\n", 161, 162);
    }
    
    switch(planetype){
    case 1: planecost=flightdistance*0.535;
            printf("El costo generado por el vuelo Cessna matr%ccula %d es de: u$s %f", 161, regnum, planecost);
    break;
    case 2: planecost=flightdistance*49.665;
            printf("El costo generado por el vuelo Boeing matr%ccula %d  es de: u$s %f", 161, regnum, planecost);
    break;
    case 3: planecost=flightdistance*10.464;
            printf("El costo generado por el vuelo Airbus matr%ccula %d es de: u$s %f", 161, regnum, planecost);
    break;
    default: printf("Por favor ingrese un n%cmero de matr%ccula v%clido", 163, 161, 160);
    }
    
    return 0;
}; 