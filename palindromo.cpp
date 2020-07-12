#include <iostream>
#include <string>
using namespace std;
/* Determina si una palabra dada es palíndromo o no*/

string darvuelta (string palabra) {

	int tamano = palabra.size();
	int i=tamano-1;
	string alreves = "";

	while (i>=0) {
		alreves=alreves+palabra [i];
		i=i-1;

}	
	return alreves;

}


int main(int argc, char* argv[]) {

	string palabra = argv[1];
	int tamano = palabra.size();
	string alreves= "";
	int m = 0;
	int i=tamano-1;

	/*cout<< darvuelta( palabra ) << endl;*/

 	if (palabra == darvuelta(palabra)) {

	cout<< palabra << " es palindromo" << endl;
		}

	else {

	cout<< palabra << " no es palindromo" << endl;
		}

	return 0;
}
