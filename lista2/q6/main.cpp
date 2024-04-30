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

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tam;

    cout << "Informe o tamanho do seu vetor: ";
    cin >> tam;

    int vetor[tam];

    preencher_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);

    return 0;
}
