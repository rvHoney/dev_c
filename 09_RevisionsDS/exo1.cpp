#include <iostream>
using namespace std;

int main()
{
    int nb = 0;

    do
    {
        cin >> nb;
        if(nb < 1 || nb > 3)
            cout << "Saisie érronée, recommencez." << endl;
    }
    while (nb < 1 || nb > 3);
    
}