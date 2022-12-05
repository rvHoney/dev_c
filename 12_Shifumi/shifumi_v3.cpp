#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

// Initialisations.
int random_number(int start, int end);

// Fonctions principale.
int main()
{
    int goal = 0;
    string user_choice = "";
    string computer_choice = "";

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

    // Choix aléatoire de l'ordinateur.
    if(random_number(0, 2) == 0)
        computer_choice = "P";
    else if(random_number(0, 2) == 1)
        computer_choice = "F";
    else if(random_number(0, 2) == 2)
        computer_choice = "C";

    return 0;
}

// Fonctions annexes.
int random_number(int start, int end)
{
    srand((unsigned) time(NULL));
    return start + (rand() % (end-start+1));
}