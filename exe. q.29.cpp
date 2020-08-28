#include <iostream>

using namespace std;

int main() {
	
	int n, a, b, c, d, e;
	
    cout<<"Infome um numero de 5 digitos e veja se e ou nao um palindromo: ";
    cin>>n;
    
    a = (n/10000);
    b = ((n/1000) - a *10);
    c = (((n/100) - a * 100) - b *10 );
    d = ((((n/10)-a*1000)-b * 100)-c * 10);
    e = ((((n - a * 10000)-b * 1000)-c*100)-d * 10);
    
	if(10000<n && n<99999 ){
	
    	if(b == d && a == e ){
    	
    	cout<<"Esse numero e um palindromo!!";
		}else{
		cout<<"Esse numero nao e um palindromo!!";
		}
	}else{
	if(n % 1000 !=0 && n % 100 !=0 ){
		cout<<"Digite 5 digitos por favor, tente de novo!";
			}
	if (n == 00000){
		cout<<"Esse numero e um palindromo!!";	
		}		
	}
	
	
		
	
	return 0;
}
