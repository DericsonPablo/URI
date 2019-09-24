#include <iostream>
#include <string.h>

using namespace std;

int main(){

	int abas, acoes;
	string acao;

	cin >> abas >> acoes;


	for (int i = 0; i < acoes; i++){

		cin >> acao;
		if(acao == "clicou")
			abas--;
		else
			abas++;

	}

	cout << abas << endl;
	return 0;
}
