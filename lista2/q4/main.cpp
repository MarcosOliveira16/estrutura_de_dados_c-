#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int matriz[2][2], maior = 0, linha, coluna;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Digite um valor: ";
            cin >> matriz[i][j];
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    cout << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matriz[i][j] << " | ";
        }
        cout << endl;
    }

    cout << "\nO maior foi: " << maior << endl;

    cout << "Elementos da coluna: ";
    for(int i = 0; i < 2; i++){
        cout << matriz[i][linha] << " | ";
    }

    cout << "\nElementos da linha: ";
    for(int j = 0; j < 2; j++){
        cout << matriz[coluna][j] << " | ";
    }

    cout << endl;

    return 0;
}
