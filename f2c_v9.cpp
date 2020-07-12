#include <stdio.h>
/* conversor fahrenheit a celsius */
float fahrenheit2Celsius(float valor) {
	return (5*(valor-32))/9;
	}
void convertir(int valorInicial, int valorFinal, int intervalo) {
	float fahr, cel;
	fahr = valorInicial;
	while(fahr < valorFinal+1) {
		cel = fahrenheit2Celsius(fahr);
		printf("fahr=%6.2f -> cel=%6.2f\n",fahr,cel);
		fahr = fahr + intervalo;
		}
	}
int main(int argc, char* argv[]) {
	convertir(0, 100, 10);
	convertir(101, 110, 1);
	return 0;
	}
