//Es lo mismo A = B que B = A?

#include <stdio.h>
int main() {

//Evaluar el siguiente conjunto de asignaciones:
int A, B, C, D, E, F;

A = 5;
printf("A: %i", A);
printf("\n");

B = 3;
printf("B: %i", B);
printf("\n");

C = (A+B)*2;
printf("C: %i", C);
printf("\n");

D = A+B*2;
printf("D: %i", D);
printf("\n");

E = A;
printf("E: %i", E);
printf("\n");

F = A;
printf("F: %i", F);
printf("\n");

A = B;
printf("A: %i", A);
printf("\n");

B = F ;
printf("F: %i", F);
printf("\n");

}