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
    int random = 0;
    string replay = "";
    string user_choice = "";
    string computer_choice = "";
    bool game = true;

    do {
        // Récupération du nombre de points à atteindre.
        do
        {
            cout << "En combien de points la partie doit-elle se dérouler ? (3-5-10)" << endl;
            cin >> goal;

        } while(goal != 3 && goal != 5 && goal != 10);

        // Boucle de jeu.
        while(user_pts < goal && computer_pts < goal)
        {
            // Récupération du choix de mouvement de l'utilisateur.
            do
            {
                cout << "Voulez-vous faire Pierre, Feuille ou Ciseaux ? (P,F,C)" << endl;
                cin >> user_choice;

            } while(user_choice != "P" && user_choice != "F" && user_choice != "C");

            // Choix aléatoire de l'ordinateur.
            random = random_number(0, 2);
            if(random == 0)
                computer_choice = "P";
            else if(random == 1)
                computer_choice = "F";
            else if(random == 2)
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
        }

    // Affichage du gagnant.
        do
        {
            if(user_pts == goal)
                cout << "L'utilisateur à gagné ! Voulez-vous rejouer ? (O/N)" << endl;
            else
                cout << "L'ordinateur à gagné ! Voulez-vous rejouer ? (O/N)" << endl;

            cin >> replay;
            if(replay == "N")
                game = false;
        } while(replay != "O" && replay != "N");
        
    } while (game);
    
    return 0;
}

// Fonctions annexes.
int random_number(int start, int end)
{
    srand((unsigned) time(NULL));
    return start + (rand() % (end-start+1));
}