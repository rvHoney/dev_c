#include <iostream>
#include <string>

using namespace std;

int main()
{
    int goal = 0;
    string user_choice = "";

    // Récupération du nombre de points à atteindre.
    do
    {
        cout << "En combien de points la partie doit-elle se dérouler ? (3-5-10)" << endl;
        cin >> goal;

    } while(goal != 3 && goal != 5 && goal != 10);

    // Récupération du choix de mouvement de l'utilisateur.
    do
    {
        cout << "Voulez-vous faire Pierre, Feuille ou Ciseaux ? (P,F,C)" << endl;
        cin >> user_choice;

    } while(user_choice != "P" && user_choice != "F" && user_choice != "C");


    return 0;
}