#include <iostream>

using namespace std;

int main(){
	
	int pass = 0, rep = 0, count = 0, result;
	
	cout<<"Informe quais estudantes foram aprovados e quais foram reprovados\n ";
	
	while(count <= 10){
		
		cout<<"1=aprovado e 2=reprovado): ";
		cin>>result;
		
		if(result == 1){
			pass = pass + 1;
			count ++;
			}else{
				if(result == 2){
					rep = rep + 1;
					count++;
						}
				}
		if(result != 1 && result != 2){
			cout<<"Voce digitou uma entrada incorreta. Por favor, tente novamente.\n";
			}		
	}
	cout<<"\n\nForam aprovados: "<<pass<<" alunos."<<endl;
	cout<<"Foram reprovados: "<<rep<<" alunos."<<endl;			
	
return 0;
}
