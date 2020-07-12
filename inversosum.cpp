#include <stdio.h>
#include <iostream>
using namespace std;
/* sumatoria primeros 1/n números */


int suma(int m) {
	int i = 1;
	float sum = 1/i;
	
	while (i <= m){
		sum = sum+i;
		
		i = i + 1 ;
	}
	return sum;
}


int main(int argc, char* argv[]) {
	
	int m = atoi(argv[1]);
	
	cout<< suma(m) << endl;
	
	return 0;
}
