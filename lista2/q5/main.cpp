#include <iostream>

using namespace std;

void preencehr_vetor(int vet[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Digite o " << i+1 << "° valor: ";
        cin >> vet[i];
    }

}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tam;

    cout << "Informe o tamanho do seu vetor: ";
    cin >> tam;

    int vetor[tam];

    preencher_vetor(vetor, tam);

    return 0;
}
