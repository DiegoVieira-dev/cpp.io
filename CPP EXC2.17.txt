#include <iostream>

/* 2.17 Desenvolva um programa em C++ que determinará se um cliente de uma loja excedeu o limite de credito em sua conta corrente. 
Para cada cliente, os seguintes datos estão disponíveis.

a) Número da conta(um inteiro);
b) Saldo no princípio do mês;
c) Total de todos os itens comprados a crédito por este cliente neste mês;
d) Total de todos os créditos do cliente nesta conta neste mês;
e) Limite de crédito permitido;

  O programa deve receber  como entrada cada um destes fatos, calcula o novo saldo (= saldo inicial + débitos - créditos) 
  e determinar se o novo saldo excede o limite de crédito do cliente. Para aqueles clientes cujo limite de crédito for excedido, 
  o programa deve exibir o número da conta do clientte, o limite de crédito, o novo saldo e a mensagem "Limite de crédito excedido."  */

int main() {
	
	int num;
	float saldom, totm, nsaldo;
	
	while(true){
	
    std::cout<<"\nInforme o numero de sua conta ou (-1) para finalizar: ";
    std::cin>>num;
    
    if(num == -1){
		
		std::cout<<"\n\nNenhum limite foi excedido, podemos finalizar o programa!";
		break;
		
		}	
    
    std::cout<<"\nSaldo no inicio do mes: R$";
	std::cin>>saldom;
	std::cout<<"\nO total de itens comprados nese mes: R$";
	std::cin>>totm;
	std::cout<<"\n\nO limite atual para esta conta neste mes e de: R$"<<saldom - totm<<std::endl;
	
	nsaldo = saldom - totm;
	
	if(nsaldo<0){
		
		std::cout<<"\n\nConta cliente: "<<num<<std::endl;
		std::cout<<"Limite de credito: R$"<<saldom<<std::endl;
		std::cout<<"Saldo atual: R$"<<nsaldo<<std::endl;
		std::cout<<"\n\nSeu limite de credito foi excedido, entao se conforme porque vc não vai comprar mais nada!!!";
		break;
		
		}
	
    }
	
	return 0;
}


 









