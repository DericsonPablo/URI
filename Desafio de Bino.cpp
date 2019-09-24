#include <iostream>

using namespace std;

int main(){
	
	int tam, mod2 = 0, mod3 = 0, mod4 = 0, mod5 = 0;
	
	cin >> tam;
	
	int vetor[tam];
	
	for(int i = 0; i < tam; i++){
		cin >> vetor[i];
		
		if(vetor[i] % 2 == 0)
			mod2++;
		if(vetor[i] % 3 == 0)
			mod3++;
		if(vetor[i] % 4 == 0)
			mod4++;
		if(vetor[i] % 5 == 0)
			mod5++;
		
	}
	
	cout << mod2 << " Multiplo(s) de 2" << endl;
	cout << mod3 << " Multiplo(s) de 3" << endl;
	cout << mod4 << " Multiplo(s) de 4" << endl;
	cout << mod5 << " Multiplo(s) de 5" << endl;
	
	return 0;
}
