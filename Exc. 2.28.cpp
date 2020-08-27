#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main(){
	
	int n, i=0, p=2, f=0;
	
	cout<<"Me diga o tamanho do quadrado que voce quer: ";
	cin>>n;
	
	while(i<=n){
		
		cout<<"*";
		i++;

		if(i == n){	
		  while(p < n){
	     	  cout<<"\n*"<<setw(n)<<"*\n";
		  p++;
			if(p == n){
			f = p - n;
			     while(f < n-1){
			     cout<<"*";
			     f++;
				 }
			}
		}
	}
}
return 0;
}
