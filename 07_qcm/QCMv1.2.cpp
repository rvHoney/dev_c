/********************************************************************************
 *
 *                          P R O J E T      Q C M
 *
 *                           g++ -o qcm ./qcm.cpp
 *
 *******************************************************************************/

#include <string> // Inclusion de la bibliothèque C++ string
#include <iostream> // Inclusion de la bibliothèque C++ iostream (cout, cin, endl)

// Déclaration de l'usage de l'espace de nommage std
// pour simplifier la syntaxe d'accès à string, cout, cin et endl
using namespace std;

/**
 * Cette classe permet de gérer une question du QCM.
 *
 * Note: en accord avec le client la V1 du programme ne gere que des questions à choix
 * unique avec trois réponses possibles.
 */
class Question
{
public:
    
    // Constructeur de la classe
    Question()
    {
    }
    
    // Destructeur de la classe
    ~Question()
    {
    }
    
    // Accesseur de la consigne
    string getConsigne()
    {
        return this->consigne;
    }

    // Mutateur de la consigne
    void setConsigne(string uneConsigne)
    {
        this->consigne = uneConsigne;
    }

    // Accesseur du choix 1
    string getChoix1()
    {
        return this->choix1;
    }
    
    // Mutateur de choix 1
    void setChoix1(string leChoix1, bool laRep1)
    {
        this->choix1 = leChoix1;
    }
    
    // Accesseur du choix 2
    string getChoix2()
    {
        return this->choix2;
    }
    
    // Mutateur de choix2
    void setChoix2(string leChoix2, bool laRep2)
    {
        this->choix2 = leChoix2;
    }
    
    // Accesseur du choix 3
    string getChoix3()
    {
        return this->choix3;
    }
    
    void setChoix3(string leChoix3, bool laRep3)
    {
        this->choix3 = leChoix3;
    }

    // Accesseur du choix 4
    string getChoix4()
    {
        return this->choix4;
    }
    
    // Mutateur du choix 4
    void setChoix4(string leChoix4, bool laRep4)
    {
        this->choix4 = leChoix4;
    }
    
private:
    
    // Consigne à afficher
    string consigne;
    
    // Choix 1 à afficher
    string choix1;
    bool choix1Valide = false;
    
    // Choix 2 à afficher
    string choix2;
    bool choix2Valide = false;    
    
    // Choix 3 à afficher
    string choix3;
    bool choix3Valide = false;

    // Choix 4 à afficher
    string choix4;
    bool choix4Valide = false;

    // Index de la bonne réponse
    // TEMPORAIRE > int reponse;

};

// Fonction princiaple du programme
int main()
{
    const int nbQuestion = 7;
    int input, points = 0;
    
    // Création du formulaire sous forme d'un tableau C de questions
    Question questionnaire[nbQuestion];
    
    questionnaire[0].setConsigne("Quel est le mode de comptage utilisé en informatique?");
    questionnaire[0].setChoix1("Base 1", false);
    questionnaire[0].setChoix2("Base 2", true);
    questionnaire[0].setChoix3("Base 10", false);

    questionnaire[1].setConsigne("Les données entre la mémoire centrale et l'unité centrale de traitement transitent par...");
    questionnaire[1].setChoix1("... les unités de stockage.", false);
    questionnaire[1].setChoix2("... un système de bus de communication.", true);
    questionnaire[1].setChoix3("... les périphériques d'entrée.", false);
    questionnaire[1].setChoix4("... le périphérique parisien.", false);

    questionnaire[2].setConsigne("Quelle est la plus petite unité d'information manipulable par une machine numérique ?");
    questionnaire[2].setChoix1("bit", true);
    questionnaire[2].setChoix2("byte", false);
    questionnaire[2].setChoix3("octet", false);

    questionnaire[3].setConsigne("Un octet est composé de...");
    questionnaire[3].setChoix1("8 bits", true);
    questionnaire[3].setChoix2("16 bits", false);
    questionnaire[3].setChoix3("32 bits", false);
    questionnaire[3].setChoix4("64 bits", false);

    questionnaire[4].setConsigne("Le langage C est un langage... (QCM)");
    questionnaire[4].setChoix1("... de programmation procédurale.", true);
    questionnaire[4].setChoix2("... compilé.", true);
    questionnaire[4].setChoix3("... interprété.", false);

    questionnaire[5].setConsigne("Une variable est...");
    questionnaire[5].setChoix1("... une zone en mémoire modifiable via son identificateur.", true);
    questionnaire[5].setChoix2("... un identificateur de fonction.", false);
    questionnaire[5].setChoix3("... une instruction conditionnelle.", false);

    questionnaire[6].setConsigne("La déclaration d'une variable doit respecter le formalisme suivant :");
    questionnaire[6].setChoix1("<identificateur> <type de base <=initialisation-opt>>, ...;", false);
    questionnaire[6].setChoix2("<type de base> <identificateur <==initialisation-opt>>, ...;", false);
    questionnaire[6].setChoix3("<type de base> <identificateur <=initialisation-opt>>, ...;", true);
    
    // TODO: Hey man! Là tu dois initialiser les autres questions. Good luck!
    
    // Itération sur le tableaux de questions
    for(int i=0; i<nbQuestion; i++)
    {
        cout << questionnaire[i].getConsigne() << endl;
        if(questionnaire[i].getChoix1() != "") cout << "1) " << questionnaire[i].getChoix1() << endl;
        if(questionnaire[i].getChoix2() != "") cout << "2) " << questionnaire[i].getChoix2() << endl;
        if(questionnaire[i].getChoix3() != "") cout << "3) " << questionnaire[i].getChoix3() << endl;
        if(questionnaire[i].getChoix4() != "") cout << "4) " << questionnaire[i].getChoix4() << endl;

        cin >> input;



        /*
        // Comparaison de la saisie avec la réponse attendue.
        if(input==questionnaire[i].getReponse())
            {
                points++; // Ajout d'un point.
                cout << "Bonne réponse :)" << endl; // Annonce du résultat.
            }
        else
            cout << "Mauvaise réponse :c" << endl; // Annonce du résultat.

        cout << endl; // Saut de ligne.
        */
    }

    // Bilan du QCM.
    cout << endl;
    cout << "Vous avez eu " << points << " bonnes réponses sur " << nbQuestion << " questions. " << endl;

        
        // A toi de faire le reste du taf. Je suis en vacances pour deux semaines!!!
        //
        // TODO: Ce serait bien d'utiliser un cin pour récupérer la saisie mais j'ai pas
        // pris le temps de le faire. A toi de jouer (google est ton ami ;) )...
    
    // TODO: Faudra aussi calculer la note finale et l'afficher
    // Have fun man! Moi je m'éclate à faire du surf pendant que tu codes!

    return 0;
}
