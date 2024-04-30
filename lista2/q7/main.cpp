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

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tam, maior;

    cout << "Informe o tamanho do seu vetor: ";
    cin >> tam;

    int vetor[tam];

    preencher_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);
    maior = maior_valor(vetor, tam);

    cout << "\nO maior valor encontrado no vetor foi: " << maior << endl;

    return 0;
}
