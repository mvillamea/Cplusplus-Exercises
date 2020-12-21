#include <stdio.h>
#include <iostream>
using namespace std;

/* Determina si dos numeros dados son amigos*/

int sumaDeDivisoresDePrimerNumero(int primnum) {
	int i = 1;
	int sumprim = 0;
	while (i <= primnum){
		if ((primnum%i)==0) {
		sumprim = sumprim+i;
		}

		
		else {
		sumprim = sumprim;
		}
		i = i + 1;
	}

	return sumprim;
}

int sumaDeDivisoresDeSegundoNumero(int segnum) {
	int i = 1;
	int sumseg = 0;
	while (i <= segnum){
		if ((segnum%i)==0) {
		sumseg = sumseg+i;
		}

		
		else {
		sumseg = sumseg;
		}
		i = i + 1;
	}

	return sumseg;
}



int main(int argc, char* argv[]) {
	
	int primnum = atoi(argv[1]);
	int segnum = atoi(argv[2]);

		if (primnum == sumaDeDivisoresDeSegundoNumero(segnum)) {
		cout<< primnum <<" y "<< segnum << " son amigos." << endl;
		}

		
		if (segnum == sumaDeDivisoresDePrimerNumero(primnum)) {
		cout<< primnum <<" y "<< segnum << " son amigos." << endl;
		}
	
		else {
		cout<< primnum <<" y "<< segnum << " no son amigos." << endl;
		}
	
	
	return 0;
}
