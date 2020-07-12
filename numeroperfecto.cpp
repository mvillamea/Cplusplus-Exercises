#include <stdio.h>
#include <iostream>
using namespace std;
/* Determina si un número dado es perfecto o no */

int sumaDeDivisores(int m) {
	int i = 1;
	int sum = 0;
	while (i < m){
		if ((m%i)==0) {
		sum = sum+i;
		}

		
		else {
		sum = sum;
		}
		i = i + 1;
	}

	return sum;
}


int main(int argc, char* argv[]) {
	
	int m = atoi(argv[1]);

		if (m == sumaDeDivisores(m)) {
		cout<< m << " es perfecto" << endl;
		}
	
		else {
		cout<< m << " no es perfecto" << endl;
		}
	
	
	return 0;
}
