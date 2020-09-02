/* Forneça um inteiro contendo somente 0s e 1s (i.e, um inteiro binário) e imprima seu equivalente decimal. (Sugestão: use os operadores módulo e divisão
 * para pegar os digitos do número binário, um de cada vez, da direita para a esquerda. Da mesma maneira que no sistema de numeração decimal, no qual o 
 * dígito à esquerda  tem um valor posicional de 1 e o próximo dígito a esquerda tem um valor posicional de 10, depois de 100, depois de 1000, etc., no 
 * sistema de numeração binário o dígito mais a direita tem um valor posicional de 1, o próximo digito à esquerda tem um valor posicional de 2, depois 4,
 * depois 8, etc. Assim, o numero decimal 234 pode ser interpretado como 4 * 1 + 3 * 10 + 2 * 100. O equivalente decimal do número binário 1101 é: 1 * 1
 * + 0 * 2 + 1 * 4 +1 * 8 ou 13).*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int bin,i = 0, a, b, c, d, e, f, g, h, j;
	
	cout<<"Digite um byte qualquer: ";
	cin>>bin;
	while(i<8,i++){
		
		if(i==0){
			a = (bin/pow(10,8));
			if(a!=0){
				a = 1;
			}
		}else{
			if(i==1){
				b = (bin/pow(10,7));
				if(b!=0){
					b = 2;
				}
			}else{
				if(i==2){
					c = (bin/pow(10,6));
					if(c!=0){
						c = 3;
					}
				}else{
					if(i==3){
						d = (bin/pow(10,5));
						if(d!=0){
							d = 4;
						}
					}else{
						if(i==4){
							e = (bin/pow(10,4));
							if(e!=0){
								e = 5;
							}
						}else{
							if(i==5){
								f = (bin/pow(10,3));
								if(f!=0){
									f = 6;
								}
							}else{
								if(i==6){
									g = (bin/pow(10,2));
									if(g!=0){
										g = 7;
									}
								}else{
									if(i==7){
										h = (bin/pow(10,1));
										if(h!=0){
											h = 8;
										}
									}
								}
							}
						}
					}
				}
				}
			}
			
	}
	
	cout<<g ;
	
	return 0;
}
