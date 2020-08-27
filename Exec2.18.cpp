#include <iostream>

/* Uma grande empresa química paga a seu pessoal de vendas com base em comissão. O pessoal de vendas recebe
R$200 por semana mais 9% de suas vendas brutas daquela semana. Por exemplo, um vendedor que vende R$5000 em 
substâncias químicas em uma semana recebe R$200 mais 9% de R$5000, ou um total de R$650. Desenvola um programa
em C++ que receba como entrada as vendas de cada vendedor na semana anterior e que calcula e exibe o salário
daquele vendedor. Processe os números de cada um de cada vez.*/

#include <iostream>

using namespace std;

int main() {
	
	float salh, h;
	
	
	while(h != -1){
		
		cout<<"\nInforme as horas trabalhadas ou digite -1 para finalizar: ";
		cin>>h;
		
		if(h == -1){
			
			cout<<"\n\nPrograma finalizado!";
			break;
	}else{
		if(h >= 40){
			
			cout<<"\nInfome seu salario hora (R$00.00): ";
			cin>>salh;
			cout<<"\nSeu salario bruto e de: R$"<<salh/2 + (salh * h);
		}else{
			if(h < 40){
				cout<<"\nInfome seu salario hora (R$00.00): ";
				cin>>salh;
				cout<<"\nSeu salario bruto e de: R$"<<salh * h;
			}
		}
		
		
	  }
	
	} 
	
	return 0;
}
