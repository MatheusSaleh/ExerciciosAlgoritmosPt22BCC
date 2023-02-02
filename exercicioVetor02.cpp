#include <iostream>
#include <climits>
using namespace std;
int main()
{
    float media;
    int numeroLido, maior, menor, cont, soma;
    int vetNumeros[10];
    maior = INT_MIN;
    menor = INT_MAX;
    soma = 0;
    for (cont = 0; cont < 10; cont++)
    {
        cout << "Informe um numero:";
        cin >> vetNumeros[cont];
        if (vetNumeros[cont] == vetNumeros[cont - 1])
        {
            break;
        }
        if (vetNumeros[cont] > maior)
        {
            maior = vetNumeros[cont];
        }
        if (vetNumeros[cont] < menor)
        {
            menor = vetNumeros[cont];
        }
        soma = soma + vetNumeros[cont];
    }
    media = soma / 10;
    cout << "Maior " << maior << "\nMenor " << menor << "\nMedia " << media << "\nSoma " << soma;
}
