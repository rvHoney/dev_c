#include <iostream>
using namespace std;

int main()
{
    int nb = 0;

    do
    {
        cin >> nb;
        if(nb < 10)
            cout << "Plus grand !" << endl;
        if(nb > 20)
            cout << "Plus petit !" << endl;
    }
    while (nb < 10 || nb > 20);
    
}