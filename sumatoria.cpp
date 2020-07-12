#include <stdio.h>
#include <iostream>
using namespace std;
/* sumatoria primeros n números */

int numeros(int m) {
	int i = 1;
	int sum = 0;
	while (i <= m){
		sum = sum+i;
		i = i + 1 ;
	}
	return sum;
}


int main(int argc, char* argv[]) {
	
	int m = atoi(argv[1]);
	
	cout<< numeros(m) << endl;
	
	return 0;
}
