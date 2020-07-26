#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n1, n2, soma;

	std::cout<<"Escreva 2 numeros: "<<std::endl;
	std::cin>>n1;
	std::cin>>n2;
	
	if(n1 > n2)
	{
		std::cout<<"O primeiro numero e maior que o segundo.";
	}
	if(n1 < n2)
	{
		std::cout<<"O primeiro numero e menor que o segundo.";
	}
	if(n1 = n2)
	{
		std::cout<<"Esses numeros sao iguais!!!";
	}
	
	
	return 0;
}
