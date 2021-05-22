#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int cont1 = 1, cont2 = 1;
    double numero = 0, soma = 0;
    string teste;
    cin >> teste;
    while (cont1 != 12){
        while (cont2 <= 12){
            cin >> numero;
            if (cont2 > cont1){
                soma = soma + numero;
            }
            cont2++;
        }
        cont2 = 1;
        cont1++;
    }
    cout.precision(1);
    if (teste[0] == 'S'){
        cout << fixed << soma <<endl;
    }else{
        soma = soma / 66;
        cout << fixed << soma <<endl;
    }
    return 0;
}
