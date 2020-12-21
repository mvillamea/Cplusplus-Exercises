#include <stdio.h>
#include<array>
#include <iostream>
using namespace std;
/* Determina número y longitud de la meseta más larga*/

int main(int argc, char* argv[]) {

	array<int,8> sec = {1,1,2,6,6,6,3,3};
	int NumActual = -1;
	int NumMax = 999;
	int LongActual = 0;
	int LongMax = 0;
	int i= 0;

	while (i<sec.size()) {

		if (NumActual == sec[i]) {
			LongActual = LongActual+1 ;
		}

		else {
			LongActual = 1;
		}


		if (LongMax < LongActual) {
			LongMax = LongActual;
			NumMax = sec[i];
		}

	NumActual= sec[i];
	i=1+i;
	}

	cout<< "Numero = " << NumMax <<"; Longitud = " << LongMax << endl;


		return 0;
}
