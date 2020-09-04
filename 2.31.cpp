#include <iostream>

using namespace std;

int main(){
	
	for(int i=1; i<=64;i++){

		cout<<" "<<" *";
		
			if(i == 1){
				cout<<" ";
			 
					}else {
						if(i % 16 == 0){
							cout<<" "<<endl<<" ";
								}else{
													
									if(i % 16 == 8)	
										cout<<" "<<endl;	
					
									}
								
								}	
							
							
							}
	
	return 0;
	}
