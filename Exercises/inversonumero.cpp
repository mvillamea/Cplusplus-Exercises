#include <stdio.h>
#include <iostream>
using namespace std;

/*crea el inverso de números*/

float numerosinvertidos(int m) {
	int i = 1;
	float inv;
	
	while (i <= m){
		inv = 1/i ;
		
		i = i + 1 ;
	}
	return inv;
}

int main(int argc, char* argv[]) {
	
	int m = atoi(argv[1]);
	
	cout<< numerosinvertidos(m) << endl;
	
	return 0;
}
