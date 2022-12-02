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

    // Accesseur de la réponse du choix 1
    bool getRep1()
    {
        return this->choix1Valide;
    }
    
    // Mutateur de choix 1
    void setChoix1(string leChoix, bool laRep=false)
    {
        this->choix1 = leChoix;
        this->choix1Valide = laRep;
    }
    
    // Accesseur du choix 2
    string getChoix2()
    {
        return this->choix2;
    }
    
    // Accesseur de la réponse du choix 2
    bool getRep2()
    {
        return this->choix2Valide;
    }

    // Mutateur de choix2
    void setChoix2(string leChoix, bool laRep=false)
    {
        this->choix2 = leChoix;
        this->choix2Valide = laRep;
    }
    
    // Accesseur du choix 3
    string getChoix3()
    {
        return this->choix3;
    }
    
    // Accesseur de la réponse du choix 3
    bool getRep3()
    {
        return this->choix3Valide;
    }

    // Mutateur du choix 3
    void setChoix3(string leChoix, bool laRep=false)
    {
        this->choix3 = leChoix;
        this->choix3Valide = laRep;
    }

    // Accesseur du choix 4
    string getChoix4()
    {
        return this->choix4;
    }

    // Accesseur de la réponse du choix 4
    bool getRep4()
    {
        return this->choix4Valide;
    }
    
    // Mutateur du choix 4
    void setChoix4(string leChoix, bool laRep=false)
    {
        this->choix4 = leChoix;
        this->choix4Valide = laRep;
    }
    
    // Accesseur du nombre de bonnes réponses.
    int getNbReponses()
    {
        return this->reponses_valides;
    }

    // Mutateur du nombre de bonnes réponses.
    void setNbReponses(int nbrep)
    {
        this->reponses_valides = nbrep;
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

    // Réponses valides
    int reponses_valides;

    // Index de la bonne réponse
    // TEMPORAIRE > int reponse;

};

// Fonction princiaple du programme
int main()
{
    const int nbQuestion = 7;
    int points, temp_points, errors;
    string input;
    
    points = temp_points = 0;

    // Création du formulaire sous forme d'un tableau C de questions
    Question questionnaire[nbQuestion];
    
    questionnaire[0].setConsigne("Quel est le mode de comptage utilisé en informatique?");
    questionnaire[0].setNbReponses(1);
    questionnaire[0].setChoix1("Base 1");
    questionnaire[0].setChoix2("Base 2", true);
    questionnaire[0].setChoix3("Base 10");

    questionnaire[1].setConsigne("Les données entre la mémoire centrale et l'unité centrale de traitement transitent par...");
    questionnaire[1].setNbReponses(1);
    questionnaire[1].setChoix1("... les unités de stockage.");
    questionnaire[1].setChoix2("... un système de bus de communication.", true);
    questionnaire[1].setChoix3("... les périphériques d'entrée.");
    questionnaire[1].setChoix4("... le périphérique parisien.");

    questionnaire[2].setConsigne("Quelle est la plus petite unité d'information manipulable par une machine numérique ?");
    questionnaire[2].setNbReponses(1);
    questionnaire[2].setChoix1("bit", true);
    questionnaire[2].setChoix2("byte");
    questionnaire[2].setChoix3("octet");

    questionnaire[3].setConsigne("Un octet est composé de...");
    questionnaire[3].setNbReponses(1);
    questionnaire[3].setChoix1("8 bits", true);
    questionnaire[3].setChoix2("16 bits");
    questionnaire[3].setChoix3("32 bits");
    questionnaire[3].setChoix4("64 bits");

    questionnaire[4].setConsigne("Le langage C est un langage... (QCM)");
    questionnaire[4].setNbReponses(2);
    questionnaire[4].setChoix1("... de programmation procédurale.", true);
    questionnaire[4].setChoix2("... compilé.", true);
    questionnaire[4].setChoix3("... interprété.");

    questionnaire[5].setConsigne("Une variable est...");
    questionnaire[5].setNbReponses(1);
    questionnaire[5].setChoix1("... une zone en mémoire modifiable via son identificateur.", true);
    questionnaire[5].setChoix2("... un identificateur de fonction.");
    questionnaire[5].setChoix3("... une instruction conditionnelle.");

    questionnaire[6].setConsigne("La déclaration d'une variable doit respecter le formalisme suivant :");
    questionnaire[6].setNbReponses(1);
    questionnaire[6].setChoix1("<identificateur> <type de base <=initialisation-opt>>, ...;");
    questionnaire[6].setChoix2("<type de base> <identificateur <==initialisation-opt>>, ...;");
    questionnaire[6].setChoix3("<type de base> <identificateur <=initialisation-opt>>, ...;", true);
    
    // Itération sur le tableaux de questions
    for(int i=0; i<nbQuestion; i++)
    {
        temp_points = 0;
        system("clear");

        cout << questionnaire[i].getConsigne() << endl;
        if(questionnaire[i].getChoix1() != "") cout << "1) " << questionnaire[i].getChoix1() << endl;
        if(questionnaire[i].getChoix2() != "") cout << "2) " << questionnaire[i].getChoix2() << endl;
        if(questionnaire[i].getChoix3() != "") cout << "3) " << questionnaire[i].getChoix3() << endl;
        if(questionnaire[i].getChoix4() != "") cout << "4) " << questionnaire[i].getChoix4() << endl;

        cout << "----- Votre réponse -----" << endl;

        if(questionnaire[i].getChoix1() != "")
        {
            cout << "Le choix 1 est-il juste ? (O/N)" << endl;
            cin >> input;
            if(((input=="O") || (input=="o")) && (questionnaire[i].getRep1() == true))
                temp_points++;
        }

        if(questionnaire[i].getChoix2() != "")
        {
            cout << "Le choix 2 est-il juste ? (O/N)" << endl;
            cin >> input;
            if(((input=="O") || (input=="o")) && (questionnaire[i].getRep2() == true))
                temp_points++;
        }

        if(questionnaire[i].getChoix3() != "")
        {
            cout << "Le choix 3 est-il juste ? (O/N)" << endl;
            cin >> input;
            if(((input=="O") || (input=="o")) && (questionnaire[i].getRep3() == true))
                temp_points++;
        }

        if(questionnaire[i].getChoix4() != "")
        {
            cout << "Le choix 4 est-il juste ? (O/N)" << endl;
            cin >> input;
            if(((input=="O") || (input=="o")) && (questionnaire[i].getRep4() == true))
                temp_points++;
        }
        
        if(questionnaire[i].getNbReponses() == temp_points)
            points++;

    }

    // Bilan du QCM.
    cout << endl;
    cout << "Vous avez eu " << points << " bonnes réponses sur " << nbQuestion << " questions. " << endl;

    // Have fun man! Moi je m'éclate à faire du surf pendant que tu codes!

    return 0;
}
