#include <iostream>
using namespace std;

int main()
{
    int nb;

    cin >> nb;
    for(int i = 1; i<=10; i++)
        cout << nb << "*" << i << "=" << nb*i << endl;
}