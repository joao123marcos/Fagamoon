#include <iostream>
using namespace std;
	void preencheVetor(int vet[], int tam){
		cout << "Digite o elemento da posicao\n";
		for(int i = 0; i < tam; i++){
			cout << i+1 << ": ";
			cin >> vet[i];
		}
	}
	void merge(int vet[], int esq, int meio, int dir){
		int i, j, k, temporario[dir - esq + 1];
		i = esq;
		j = meio + 1;
		k = 0;
		
		while(k < (dir - esq + 1)){
			if((i <= meio) and (j <= dir)){
				if(vet[i] > vet[j]){
					temporario[k] = vet[i];
					i++;
				}
				else{
					temporario[k] = vet[j];
					j++;
				}
				k++;
			}else if (i > meio){
				temporario[k] = vet[j];
				j++;
				k++;	
			}else{
				temporario[k] = vet[i];
				i++;
				k++;
			}
		}
		k = 0;
		for(int i = esq; i <= dir; i++){
			vet[i] = temporario[k];
			k++;
		}
	}
	void mergeSort(int vet[], int esq, int dir){
		int meio;
		if(esq < dir)
			meio = ((esq + dir)/2);
			mergeSort(vet, esq, meio);
			mergeSort(vet, meio + 1, dir);
			
			merge(vet, esq, meio, dir);
	}
	void mostraVetor(int vet[], int tam){
		for(int i = 0; i < tam; i++){
			cout << vet[i] << " ";
		}
		cout << "\n";
	}
int main(){
	int tamanho;
	cout << "Informe o tamanho do vetor: ";
	cin >> tamanho;
	int vetor[tamanho];
	
	preencheVetor(vetor, tamanho);
	cout << "Vetor preenchido! " << endl;
	mostraVetor(vetor, tamanho);
	cout << "Vetor ordenado: ";
	mergeSort(vetor, 0, tamanho - 1);
	mostraVetor(vetor, tamanho);
}
