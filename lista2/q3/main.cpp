#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int matriz[5][10];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            cout << "Digite um valor: ";
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            cout << matriz[i][j] << " | ";
        }
        cout << endl;
    }

    int esco_coluna, soma = 0;
    cout << "Escolha a coluna que deverá seus valores somados: ";
    cin >> esco_coluna;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            if(j == esco_coluna-1){
                soma += matriz[i][j];
                cout << "\nAdicionei '" << matriz[i][j] << "' a soma." << endl;
            }
        }
    }

    cout << "\nA soma dos valores foi: " << soma << endl;

    return 0;
}
