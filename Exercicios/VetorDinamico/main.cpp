#include <iostream>
#include "VetorDinamico.h"
using namespace std;

/* 
Analise a classe do programa abaixo e, sem utilizar a STL, crie os métodos construtor, destrutor e adiciona. 
O construtor deve alocar um vetor de inteiros com um tamanho inicial, passado por parâmetro. O parâmetro define o número de
elementos que podem ser colocados no vetor sem que seja necessário fazer novas alocações de memória. O destrutor deve
fazer a respectiva desalocação.
O método adiciona deve colocar um dado no vetor na primeira posição livre. Esta posição é sempre dada pelo número de
elementos que já estão presentes no vetor. Por exemplo, se o vetor está vazio, a posição livre é 0, se o vetor tem 3 elementos, a
posição livre é a 3. Se não houver espaço, o método adiciona deve alocar um novo vetor com 50% a mais de espaço. A classe
deve gerenciar a “desalocação” de dados que não são mais utilizados.
Crie os atributos que julgar necessários.
*/


int main() {

	VetorDinamico V1(5);
	int dado;

	do {
		cin >> dado;
		if (dado > 0)
			V1.adiciona(dado);
		else break;
	} while (1);

	for (int i = 0; i < V1.qtdDados(); i++)
		cout << V1.getDado(i) << endl;
	return 0;
}
