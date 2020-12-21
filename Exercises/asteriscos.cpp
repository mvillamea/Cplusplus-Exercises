#include <stdio.h>
#include <iostream>
using namespace std;
/* un asterisco por linea */

void imprimirFilas(int n) {
	int i = 0;
	while (i < n){
		cout <<"*";
		i = i + 1 ;
	}

}


int main(int argc, char* argv[]) {
	int n;
	int m;
	n = 1;
	m = atoi(argv[1]);

	while(n <= m) {
		
		imprimirFilas(n);	
		cout<< "" << endl;
		n = n + 1;
	}
	
	return 0;
}
