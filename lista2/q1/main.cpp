#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetor[30];


    for(int i = 0; i < 30; i++){
        cout << "Digite o " << i+1 << "° valor: ";
        cin >> vetor[i];
    }

    cout << "Pares: " << endl;
    for(int i = 0; i < 30; i++){
        if(vetor[i] % 2 == 0){
            cout << vetor[i] << " | ";
        }
    }


    cout << endl;
    cout << "Ímpares: " << endl;
    for(int i = 0; i < 30; i++){
        if(vetor[i] % 2 == 1 || vetor[i] % 2 == -1){
            cout << vetor[i] << " | ";
        }
    }

    return 0;
}
