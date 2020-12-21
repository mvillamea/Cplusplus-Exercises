#include <stdio.h>
#include <iostream>
using namespace std;
/* nCk */

int factorial(int m) {
	int i = 1;
	int fact = 1;
	while (i <= m){
		fact = fact*i;
		i = i + 1 ;
	}
	return fact;
}




int main(int argc, char* argv[]) {
	
	int n = atoi(argv[1]);
	int k = atoi(argv[2]);
	
	
	cout<< (factorial(n))/((factorial(k))*(factorial(n-k))) << endl;
	
	return 0;
}
