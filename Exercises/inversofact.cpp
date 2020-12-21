#include <stdio.h>
#include <iostream>
using namespace std;
/* n! */

float numeros(int m) {
	int i = 1;
	float fact = 1;
	while (i <= m){
		fact = 1/(fact*i);
		i = i + 1 ;
	}
	return fact;
}


int main(int argc, char* argv[]) {
	
	int m = atoi(argv[1]);
	
	cout<< numeros(m) << endl;
	
	return 0;
}
