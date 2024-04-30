#include <iostream>

using namespace std;

void preencher_vetor(int vet[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Digite o " << i+1 << "° valor: ";
        cin >> vet[i];
    }

}

void imprimir_vetor(int vet[], int tam){
    cout << "\nElementos do vetor:" << endl;
    for(int i = 0; i < tam; i++){
        cout << vet[i] << " | ";
    }

    cout << endl;
}

int maior_valor(int vet[], int tam){
    int maior = 0;

    for(int i = 0; i < tam; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    return maior;
}

bool repetiu(int vet[], int tam){
    int j = 1;

    for(int i = 0; i < tam; i++){
        for(; j < tam; j++){
            if(vet[i] == vet[j]){
                return true;
            }
        }
        j++;
    }

    return false;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tam, maior;
    bool repet = false;

    cout << "Informe o tamanho do seu vetor: ";
    cin >> tam;

    int vetor[tam];

    preencher_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);
    maior = maior_valor(vetor, tam);

    cout << "\nO maior valor encontrado no vetor foi: " << maior << endl;

    repet = repetiu(vetor, tam);
    cout << "repet: " << repet << endl;
    if(repet == true){
        cout << "\nHá repetição." << endl;
    }else{
        cout << "\nNão há repetição." << endl;
    }

    return 0;
}
