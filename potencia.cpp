#include <stdio.h>
#include <iostream>
using namespace std;
/* potencia de base n y exponente m (ambos dados) */

int potencia(int n, int m) {
	int prod = 1;
	int i = 0;
	while (i < m){
		prod = prod*n;
		i = i + 1 ;
	}
	return prod;
}


int main(int argc, char* argv[]) {
	
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);

	cout<< potencia (n, m)  << endl;

	
	return 0;
}
