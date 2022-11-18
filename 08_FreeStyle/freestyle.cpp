#include <string> // Inclusion de la bibliothèque C++ string
#include <iostream> // Inclusion de la bibliothèque C++ iostream (cout, cin, endl)
#include <stdlib.h>

// Déclaration de l'usage de l'espace de nommage std
// pour simplifier la syntaxe d'accès à string, cout, cin et endl
using namespace std;


// INITIALISATIONS
float calc(float mesure, int moment);
float round(float floatInput);
void test();



// FONCTION PRINCIPALE
int main()
{
    system("clear");
    float mesure, unites, difference, res;
    int moment, unite_entieres;

    test();
    cout << "Quel est votre niveau de glycémie ? " << endl;
    cin >> mesure;

    cout << "Quel est le moment de la journée ?\n1. Matin 2. Midi 3. Soir" << endl;
    cin >> moment;
    
    res = calc(mesure, moment); // Calcul de la dose
    res = round(res);

    cout << "Unités à injecter " << res << endl;

    return(0);
}



// FONCTIONS
// Fonction de calcul.
float calc(float mesure, int moment)
{
    switch (moment)
    {
        case 1:
            return((mesure-1.5)/0.37);
        case 2:
            return((mesure-1.5)/0.75);
        case 3:
            return((mesure-1.5)/0.5);
        default:
            cout << "Erreur dans la saisie :c" << endl;
            return(1);
    }
}


// Fonction pour arrondir à 0.5 près.
float round(float floatInput)
{
    int intValue;
    float floatValue = floatInput;
    float diff, res;

    if (floatInput < 0) // Vérification des valeurs négatives.
        floatValue = floatValue*-1; // Passage en positif.

    intValue = floatValue;
    diff = floatValue-intValue;

    // Arrondissement de la valeur.
    if(diff < 0.25)
        res = intValue; // Arrondir au minimum.
    else if(diff > 0.75)
        res = intValue+1; // Arrondir au maximum.
    else
        res = intValue+0.5; // Arrondir à 0,5.

    if (floatInput < 0) // Retour en négatif.
        res = -res;
    
    return(res);
}


// Fonction de test.
void test()
{
    float mesureTable[4] = {2.2, 3.15, 3.15, 0.5};
    float momentTable[4] = {1, 3, 1, 2};
    float resTab[4] = {2, 3.5, 4.5, -1.5};
    float res;

    for(int i = 0; i<4; i++)
    {
        res = round(calc(mesureTable[i], momentTable[i]));
        if (res != resTab[i])
        {
            cout << "ERREUR: Le " << i << "ème test renvoie une valeur éronnée." << endl;
            cout << "Mesure: " << mesureTable[i] << " | Moment: " << momentTable[i] << " | Résultat: " << res <<  " | Résultat attendu: " << resTab[i] << endl;
            exit(-1);
        }
    }
}
