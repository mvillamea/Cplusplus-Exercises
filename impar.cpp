#include <stdio.h>
#include <iostream>
using namespace std;
/* primeros n impares */
int main(int argc, char* argv[]) {
	int n;
	int m ;
	n = 1;
	m = atoi(argv[1]);

	while (n < m+1) {

		cout << 2*n-1 << endl;
		n = n + 1;
		
	}
	return 0;
	}
