#include <iostream>
int main () {
	
	int na = rand() % 2 + 1; //assignación de valores aleatorios
	int nb = rand() % 100 + 1;
	int nc = rand() % 10;
	int nd = rand() % 113 + 1000;
	int ne = rand() % 3 - 1;
	int	nf = rand() % 15 -3;

	std::cout << "na: " << na << std::endl; //comprobación de que los numeros aleatorios cumplen las condiciones
	std::cout << "nb: " << nb << std::endl;
	std::cout << "nc: " << nc << std::endl;
	std::cout << "nd: " << nd << std::endl;
	std::cout << "ne: " << ne << std::endl;
	std::cout << "nf: " << nf << std::endl;

	return 0;
}