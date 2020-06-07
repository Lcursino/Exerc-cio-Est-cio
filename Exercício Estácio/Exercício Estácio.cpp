#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

	int indice, num[20], result, alternat, crescente[3];
	int primeira, segunda, terceira, tentativa, posicao = 0;
	for (indice = 0; indice < 20; indice++) {	//Criar 20 números aleatórios
		result = rand() % 100 + 1;
		num[indice] = result;
		cout << "|" << indice << ": " << num[indice] << ' ';
	}
	cout << "\n\n Indices\n\n";
	srand(time(NULL)); //randômico via segundos
	for (int aleat = 0; aleat < 3; aleat++) { //Alternar srand na segunda e terceira tentativas.
		alternat = rand() % 10 + 1;
		crescente[aleat] = alternat;
		cout << aleat << ": " << crescente[aleat] << endl;
	}

	cout << "\n Segunda rodada\n\n";
	cout << "Primeira tentativa, restam 2\n";
	tentativa = 1;
	//srand(time(NULL));
	srand(crescente[0]);
	//srand(1);
	primeira = rand() % 100 + 1;
	indice = 0;
	//cout << primeira<<endl;
	while (primeira != num[indice] && posicao < 19) {
		indice++;
		posicao++;
	}

	if (primeira == num[indice]) {
		cout << "Parabens, encontrou o valor: " << primeira << " na posicao: " << posicao;
	}
	else { //Caso contrário 2ª e 3ª tentativas
		cout << "Seu numero foi: " << primeira << " Voce errou, proxima tentativa!";

		cout << "\n\nSegunda tentativa, resta 1\n" << endl;
		srand(crescente[1]);
		//srand(3);
		segunda = rand() % 100 + 1;
		tentativa = 2;
		indice = 0;
		//cout << segunda<<endl;
		while (segunda != num[indice] && posicao < 19) {
			indice++;
			posicao++;
		}

		if (segunda == num[indice]) {
			cout << "Parabens, encontrou o valor: " << segunda << " na posicao: " << posicao;
		}
		else { //caso contrário 3ª	
			cout << "Seu numero foi: " << segunda << " Voce errou, proxima tentativa!";
			cout << "\n\nTerceira tentativa, ultima\n" << endl;
			srand(crescente[2]);
			//srand(4);
			terceira = rand() % 100 + 1;
			tentativa = 3;
			indice = 0;
			//cout << terceira<<endl;
			while (terceira != num[indice] && posicao < 19) {
				indice++;
				posicao++;
			}
			if (terceira == num[indice]) {
				cout << "Parabens, encontrou o valor: " << terceira << " na posicao: " << posicao;
			}
			else {
				cout << "Seu numero foi: " << terceira << " Voce errou, acabaram as tentativas!";
			}
		}
	} //Teste
	return 0;
}

