#include <iostream>
using namespace std;

int main()
{
    int nombre, resultat = 0;

    cout << "Saisissez un nombre :" << endl;
    cin >> nombre;

    for (int i = 1; i<nombre; i++ )
    {
        resultat = resultat + i;
        cout << i << " + ";
    }
    cout << nombre << " = " << resultat+nombre;

    return 0;
}
