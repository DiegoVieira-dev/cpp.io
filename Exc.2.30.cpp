/* Forneça um inteiro contendo somente 0s e 1s (i.e, um inteiro binário) e imprima seu equivalente decimal. (Sugestão: use os operadores módulo e divisão
 * para pegar os digitos do número binário, um de cada vez, da direita para a esquerda. Da mesma maneira que no sistema de numeração decimal, no qual o 
 * dígito à esquerda  tem um valor posicional de 1 e o próximo dígito a esquerda tem um valor posicional de 10, depois de 100, depois de 1000, etc., no 
 * sistema de numeração binário o dígito mais a direita tem um valor posicional de 1, o próximo digito à esquerda tem um valor posicional de 2, depois 4,
 * depois 8, etc. Assim, o numero decimal 234 pode ser interpretado como 4 * 1 + 3 * 10 + 2 * 100. O equivalente decimal do número binário 1101 é: 1 * 1
 * + 0 * 2 + 1 * 4 +1 * 8 ou 13).*/

#include <iostream>

using namespace std;

int main() {
	
	int n, a, b, c, d, e, f, g, h, total;
	
	cout<<"Digite um byte qualquer: ";
	cin>>n;
	
	a = (n/10000000);
        b = ((n/1000000) - a *10);
        c = (((n/100000) - a * 100) - b * 10);
        d = ((((n/10000) -a * 1000)- b * 100)-c * 10);
        e = (((((n/1000) - a * 10000)- b * 1000)-c*100)-d * 10); 
	f = ((((((n/100) - a *100000)- b * 10000) - c * 1000) - d * 100) - e * 10);
	g = (((((((n/10) - a * 1000000)- b * 100000)- c * 10000)- d * 1000)- e *100) - f *10); 
	h = (((((((n - a * 10000000)- b * 1000000)- c * 100000)- d * 10000)- e * 1000) - f * 100)- g * 10);
	
	if(a!=0){
		a = 8;
	}
	if(b!=0){
		b = 7;
	}
	if(c!=0){
		c = 6;
	}
	if(d!=0){
		d = 5;		
	}
	if(e!=0){
		e = 4;
	}
	if(f!=0){
		f = 3;
	}
	if(g!=0){
		g = 2;
	}
	if(h!=0){
		h = 1;
	}
	total = a + b + c + d + e + f + g + h;
							
						
					
	cout<<total;
	
	
	
	return 0;
}
