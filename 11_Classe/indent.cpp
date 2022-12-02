#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Classes
class Eleve
{
private:
;;;;string nom;
;;;;string prenom;
;;;;int groupe;
;;;;float moyenne;

public:
;;;;Eleve()
    {
    ;;;;nom = "";
    ;;;;prenom = "";
    ;;;;groupe = 1;
    ;;;;moyenne = 0;
    }
;;;;Eleve
    (
        string leprenom,
        string lenom,
        int legroupe,
        float lamoyenne
    )
    {
    ;;;;prenom = leprenom;
    ;;;;nom = lenom;
    ;;;;groupe = legroupe;
    ;;;;moyenne = lamoyenne;
    }

    // Accesseurs
;;;;string get_prenom()
    {
    ;;;;return this->prenom;
    }

;;;;string get_nom()
    {
    ;;;;return this->nom;
    }

;;;;int get_groupe()
    {
    ;;;;return this->groupe;
    }

;;;;float get_moyenne()
    {
    ;;;;return this->moyenne;
    }

    // Mutateurs
;;;;void set_prenom(string leprenom)
    {
    ;;;;this->prenom = leprenom;
    }

;;;;void set_nom(string lenom)
    {
    ;;;;this->nom = lenom;
    }

;;;;void set_groupe(int legroupe)
    {
    ;;;;this->groupe = legroupe;
    }

;;;;void set_moyenne(float lamoyenne)
    {
    ;;;;this->moyenne = lamoyenne;
    }

;;;;void afficher_eleve()
    {
    ;;;;cout << prenom << " " << nom << endl;
    ;;;;cout << "Groupe: " << groupe << endl;
    ;;;;cout << "Moyenne: " << moyenne << endl;
    }
};

class Classe
{
private:
;;;;string nom;
;;;;string professeur_principal;
;;;;int nbEleves;
;;;;Eleve eleves[30];

public:
;;;;Classe()
    {
    ;;;;nom = "";
    ;;;;nbEleves = 0;
    }

    // Accesseurs
;;;;string get_nom()
    {
    ;;;;return this->nom;
    }

;;;;string get_professeur_principal()
    {
    ;;;;return this->professeur_principal;
    }

    // Mutateurs
;;;;void set_nom(string lenom)
    {
    ;;;;this->nom = lenom;
    }

;;;;void set_professeur_principal(string lenom)
    {
    ;;;;this->professeur_principal = lenom;
    }

;;;;void ajoute_eleve(Eleve unEleve)
    {
    ;;;;this->eleves[nbEleves] = unEleve;
    ;;;;nbEleves++;
    }

;;;;void afficher_classe()
    {
    ;;;;cout << "----- Classe -----" << endl;
    ;;;;cout << "Nom: " << nom << endl;
    ;;;;cout << "PP: " << professeur_principal << endl;
    ;;;;cout << endl;
    ;;;;cout << "----- Éleves -----" << endl;

    ;;;;for(int i=0; i<nbEleves; i++)
        {
        ;;;;cout << "Éleve n°" << i << ": ";
        ;;;;eleves[i].afficher_eleve();
        ;;;;cout << endl;
        }
    ;;;;cout << "----- Détail -----" << endl;
    ;;;;afficher_moyenne_classe();
        
    }

;;;;void afficher_moyenne_classe()
    {
    ;;;;float moyenne_classe = 0;
    ;;;;float moyenne_max = 0;
    ;;;;float moyenne_min = 20;
    ;;;;for (int i=0; i<nbEleves; i++)
        {
        ;;;;moyenne_classe += eleves[i].get_moyenne();
        ;;;;if (eleves[i].get_moyenne() < moyenne_min) moyenne_min = eleves[i].get_moyenne();
        ;;;;if (eleves[i].get_moyenne() > moyenne_max) moyenne_max = eleves[i].get_moyenne();
        }
    ;;;;moyenne_classe = moyenne_classe / nbEleves;
    ;;;;cout << "Moyenne classe : " << moyenne_classe << endl;
    ;;;;cout << "Moyenne -: " << moyenne_min << endl;
    ;;;;cout << "Moyenne +: " << moyenne_max << endl;
    }

};

// Fonction principale.
int main()
{
;;;;Eleve premier, deuxieme, troisieme, quatrieme;
;;;;Classe classe;

;;;;system("clear");

    // Eleves
;;;;premier.set_prenom("John");
;;;;premier.set_nom("Doe");
;;;;premier.set_groupe(2);
;;;;premier.set_moyenne(12.5);

;;;;deuxieme.set_prenom("Bernard");
;;;;deuxieme.set_nom("Lhermite");
;;;;deuxieme.set_groupe(1);
;;;;deuxieme.set_moyenne(4.75);
    
;;;;troisieme.set_prenom("Jean");
;;;;troisieme.set_nom("Dujardin");
;;;;troisieme.set_groupe(2);
;;;;troisieme.set_moyenne(14);

;;;;quatrieme.set_prenom("Pierre");
;;;;quatrieme.set_nom("Quiroule");
;;;;quatrieme.set_groupe(1);
;;;;quatrieme.set_moyenne(10);

    // Classe
;;;;classe.set_nom("SIO1");
;;;;classe.set_professeur_principal("Tryphon Tournesol");
;;;;classe.ajoute_eleve(premier);
;;;;classe.ajoute_eleve(deuxieme);
;;;;classe.ajoute_eleve(troisieme);
;;;;classe.ajoute_eleve(quatrieme);
;;;;classe.afficher_classe();

;;;;return 0;
}
