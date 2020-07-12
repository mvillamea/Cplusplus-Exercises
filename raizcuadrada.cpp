#include <stdio.h>
#include <iostream>
using namespace std;
/* Devuelve la parte entera de la raiz cuadrada de un valor dado n */

int raizcuadrada(int n) {
	float p = 1;
	int raiz = 0;
	while (p <= n/2){
		if (p*p==n) {
			
		raiz = p;
	
		}
	
		p = p + 1 ;
	}
	return raiz;
}


int main(int argc, char* argv[]) {
	
	int n = atoi(argv[1]);

	cout<< "la raiz cuadrada de " << n << " es " << raizcuadrada (n)  << endl;
	
	return 0;
}
