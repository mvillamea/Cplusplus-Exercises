#include <stdio.h>
#include<array>
#include <iostream>
using namespace std;
/* Determina si un array está ordenado de manera estrictamente creciente*/

int creciente(array <int, 4> sec) {
	int i = 0;
	int sum = 0;	 


	while (i<4) {
		if (sec[i]<sec[i+1]) {
		sum= 1;
		}

		else {
		sum=0;
		}

		i=i+1;

		return sum;
		}
}


int main(int argc, char* argv[]) {
	array <int, 4> sec={1, 1, 3, 4};
	
	if (creciente(sec) == 1) {
	cout<<"es estrictamente creciente" << endl;
	}

	else {
	cout<<"no es estrictamente creciente" << endl;

	}
		return 0;
}
