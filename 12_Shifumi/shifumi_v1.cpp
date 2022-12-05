#include <iostream>

using namespace std;

int main()
{
    int goal;

    do
    {
        cout << "En combien de points la partie doit-elle se dérouler ? (3-5-10) " << endl;
        cin >> goal;

    } while(goal != 3 && goal != 5 && goal != 10);

    return 0;
}