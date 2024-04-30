#include <iostream>
#include <cmath>

using namespace std;

bool trianguloRetangulo(float hip, float catetoA, float catetoB) {
    return (pow(hip, 2) == (pow(catetoA, 2) + pow(catetoB, 2)));
}

int main() {
    setlocale(LC_ALL, "");

    float hip, catetoA, catetoB;

    cout << "Digite o valor da hipotenusa: ";
    cin >> hip;
    cout << "Digite o valor do cateto adjacente: ";
    cin >> catetoA;
    cout << "Digite o valor do cateto oposto: ";
    cin >> catetoB;

    if (hip > 0 && catetoA > 0 && catetoB > 0) {
        cout << "\n" << pow(hip, 2) << " = " << (pow(catetoA, 2) + pow(catetoB, 2)) << endl;

        bool ehTriRet = trianguloRetangulo(hip, catetoA, catetoB);

        if (ehTriRet) {
            cout << "Os dados informados formam um triângulo retângulo." << std::endl;
        } else {
            cout << "Os dados informados NÃO formam um triângulo retângulo." << std::endl;
        }
    } else {
        cout << "Os lados do triângulo devem ser positivos." << std::endl;
    }

    return 0;
}
