#include <stdio.h>
#include <iostream>
using namespace std;
/* conversor millas a kilómetros */
int main(int argc, char* argv[]) {
	int mi, km;
	mi = 0;
	while(mi < 100) {
		km = (1.61*mi);
		cout << "mi= " <<mi << "   "  << "km= " << km << endl;
		mi = mi + 10;
	}
	
	return 0;
	}
