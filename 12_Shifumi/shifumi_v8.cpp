#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

// Initialisations.
int random_number(int start, int end);
int strToInt(string str);
string intToStr(int integer);

// Fonctions principale.
int main()
{
    bool game = true;
    string gamemode;
    string replay;
    int plrPts;
    int cpuPts;
    int goal;
    string plrStrChoice;
    int plrChoice;
    int cpuChoice;
    const int plrWin = 0; // Joueur gagnant
    const int cpuWin = 1; // Ordi gagnant
    const int equality = 2; // Match nul

    //                   |    P    |    F     |     C     |    T   |       // <-  Ordi
    int moveSet[4][4] = {
                         {equality, cpuWin,    plrWin,     cpuWin},      //  P
                         {plrWin,   equality,   cpuWin,    plrWin},       //  F    <- Joueur
                         {cpuWin,  plrWin,     equality,   cpuWin},      //  C
                         {plrWin,   cpuWin,    plrWin,     equality}      //  T
                        };

    do 
    {
        plrPts = cpuPts = 0;
        system("clear");

        // Récupération du nombre de points à atteindre.
        do
        {
            cout << "En combien de points la partie doit-elle se dérouler ? (3-5-10)" << endl;
            cin >> goal;

        } while(goal != 3 && goal != 5 && goal != 10);

        // Récupération du mode de partie.
        do
        {
            cout << "Voulez-vous le mode Classique ou le mode Trou ? (C-T)" << endl;
            cin >> gamemode;

        } while(gamemode != "C" && gamemode != "T");


        // Boucle de jeu.
        while(plrPts < goal && cpuPts < goal)
        {
            // Récupération du choix de mouvement de l'utilisateur.
            do
            {
                if(gamemode == "C")
                    cout << "Voulez-vous faire Pierre, Feuille ou Ciseaux ? (P,F,C)" << endl;
                if(gamemode == "T")
                    cout << "Voulez-vous faire Pierre, Feuille, Ciseaux ou Trou ? (P,F,C,T)" << endl;
                cin >> plrStrChoice;

            } while(plrStrChoice != "P" && plrStrChoice != "F" && plrStrChoice != "C" && plrStrChoice != "T");
            plrChoice = strToInt(plrStrChoice); // Conversion du choix en entier

            system("clear");

            // Récupération du choix de l'ordinateur.
            cout << "L'ordinateur est en train de jouer..." << endl;
            cpuChoice = random_number(0, 2);

            // Afficher les choix.
            /*sleep(3)*/
            cout << "Vous (" << (plrPts) << "pts): " << plrStrChoice << " | CPU: (" << (cpuPts) << "pts): " << intToStr(cpuChoice) << endl;

            // Comparaison des scores.
            if(moveSet[plrChoice][cpuChoice] == plrWin)
            {
                cout << "Joueur gagne !" << endl;
                plrPts++;
            }
            else if(moveSet[plrChoice][cpuChoice] == cpuWin)
            {
                cout << "Ordi gagne !" << endl;
                cpuPts++;
            }
            else if(moveSet[plrChoice][cpuChoice] == equality)
                cout << "Match nul !" << endl;
        }

        system("clear");

        do
        {
            if(plrPts == goal)
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

int strToInt(string str)
{
    if(str == "P")
        return(0);
    if(str == "F")
        return(1);
    if(str == "C")
        return(2);
    if(str == "T")
        return(3);
    return 0;
}

string intToStr(int integer)
{
    if(integer == 0)
        return("P");
    if(integer == 1)
        return("F");
    if(integer == 2)
        return("C");
    if(integer == 3)
        return("T");
    return 0;
}