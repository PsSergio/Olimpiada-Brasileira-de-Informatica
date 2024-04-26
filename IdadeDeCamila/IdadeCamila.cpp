#include <stdio.h>

int* organizaVetor(int idadesArray[], int tamanho){
	
	int aux;
	for(int i = 0; i < tamanho; i++){
		for(int j = 0; j < tamanho; j++){
			if (idadesArray[i] < idadesArray[j]){
				aux = idadesArray[i];
				idadesArray[i] = idadesArray[j];
				idadesArray[j] = aux;
			}
		}
	}
	
	return idadesArray;
	
}

int retornaIdadeCamila(int idades[]){
	return idades[1];
}

int main(){
	
	int idades[] = {34, 36, 38};
	
	int tamanhoVetor = sizeof(idades)/sizeof(idades[0]);
	
	int idadeCamila = retornaIdadeCamila(organizaVetor(idades, tamanhoVetor));
	printf("%d", idadeCamila);
	
}
