#include <stdio.h>
#include <iostream>
using namespace std;
/* Devuelve el producto entre dos números dados n y m */

int producto(int n, int m) {
	int sum = 0;
	int i = 0;
	while (i < m){
		sum = sum+n;
		i = i + 1 ;
	}
	return sum;
}


int main(int argc, char* argv[]) {
	
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);

	cout<< producto (n, m)  << endl;

	
	return 0;
}
