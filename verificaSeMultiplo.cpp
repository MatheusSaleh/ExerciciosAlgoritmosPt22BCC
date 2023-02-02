#include <iostream>

using namespace std;

bool verificaDobro(int a)
{
    if (a % 3 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    int teste;
    cout << "Informe um numero";
    cin >> num;
    teste = verificaDobro(num);
    if (teste == true)
    {
        cout << "Eh multiplo de 3";
    }
    else
    {
        cout << "Nao eh multiplo de 3";
    }
    return 0;
}
