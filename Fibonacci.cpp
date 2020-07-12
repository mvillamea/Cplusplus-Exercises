#include <stdio.h>
#include <iostream>
using namespace std;

/*Imprime los 10 primeros valores pares de Fibonacci
f(0) = 0
f(1) 1
f(n)=f(n-1)+f(n-2)
*/

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 1;
	int i= 1;
	int c = 1;
	int n = 30;
	

	while (i<=n) {
		c = a+b;
		a = b;
		b = c;
		
		if (c%2==0) {
		 cout << c << endl;
		}

		i=i+1;
	}

 	/*cout << c << endl;*/

return 0;
}

