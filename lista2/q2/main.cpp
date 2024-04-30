#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetor[100];

    for(int i = 0; i < 100; i++){
        cout << "Digite o " << i+1 << "° valor: ";
        cin >> vetor[i];
    }

    for(int i = 0; i < 100; i++){
        if(vetor[i] <= 10){
            cout << "V[" << i+1 << "]" << " = " << vetor[i] << endl;
        }
    }

    return 0;
}
