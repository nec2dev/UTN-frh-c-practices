//Es lo mismo A = B que B = A?

#include <stdio.h>
int main() {

//Evaluar el siguiente conjunto de asignaciones:
int A, B, C, D, E, F;

A = 5;
printf("A: %d", A);
printf("\n");

B = 3;
printf("B: %d", B);
printf("\n");

C = (A+B)*2;
printf("C: %d", C);
printf("\n");

D = A+B*2;
printf("D: %d", D);
printf("\n");

E = A;
printf("E: %d", E);
printf("\n");

F = A;
printf("F: %d", F);
printf("\n");

A = B;
printf("A: %d", A);
printf("\n");

B = F ;
printf("F: %d", F);
printf("\n");

}