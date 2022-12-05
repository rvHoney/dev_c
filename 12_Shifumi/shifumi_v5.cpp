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
    int user_pts = 0;
    int computer_pts = 0;
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

    // Afficher le choix de l'ordinateur.
    sleep(3);
    cout << "L'ordinateur a choisi " << computer_choice << endl;

    // Comparaison des scores.
    if(user_choice == "P" && computer_choice == "C")
    {
        cout << "L'utilisateur a gagné !" << endl;
        user_pts++;
    }
    else if(user_choice == "F" && computer_choice == "P")
    {
        cout << "L'utilisateur a gagné !" << endl;
        user_pts++;
    }
    else if(user_choice == "C" && computer_choice == "F")
    {
        cout << "L'utilisateur a gagné !" << endl;
        user_pts++;
    }
    else if(user_choice == computer_choice)
    {
        cout << "C'est une égalité." << endl;
    }
    else
    {
        cout << "L'ordinateur a gagné !" << endl;
        computer_pts++;
    }


    return 0;
}

// Fonctions annexes.
int random_number(int start, int end)
{
    srand((unsigned) time(NULL));
    return start + (rand() % (end-start+1));
}