/* Faça um programa que converta Celsius para Fahrenheit. */

#include <stdio.h>

int main () {

  double celsius, fahrenheit;

  printf("Digite um valor em graus Celsius: \n");

  scanf("%lf", &celsius);

  fahrenheit = celsius * 1.8 + 32;

  printf("%lf graus Celsius sao %lf graus Fahrenheit.", celsius, fahrenheit);

  return 0;
}
