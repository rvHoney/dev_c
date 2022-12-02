#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Classes
class Eleve
{
private:
    string nom;
    string prenom;
    int groupe;
    float moyenne;

public:
    Eleve()
    {
        nom = "";
        prenom = "";
        groupe = 1;
        moyenne = 0;
    }
    Eleve
    (
        string leprenom,
        string lenom,
        int legroupe,
        float lamoyenne
    )
    {
        prenom = leprenom;
        nom = lenom;
        groupe = legroupe;
        moyenne = lamoyenne;
    }

    // Accesseurs
    string get_prenom()
    {
        return this->nom;
    }

    string get_nom()
    {
        return this->nom;
    }

    int get_groupe()
    {
        return this->groupe;
    }

    float get_moyenne()
    {
        return this->moyenne;
    }

    // Mutateurs
    void set_prenom(string leprenom)
    {
        this->prenom = leprenom;
    }

    void set_nom(string lenom)
    {
        this->nom = lenom;
    }

    void set_groupe(int legroupe)
    {
        this->groupe = legroupe;
    }

    void set_moyenne(float lamoyenne)
    {
        this->moyenne = lamoyenne;
    }

    void afficher_eleve()
    {
        cout << prenom << endl;
        cout << nom << endl;
        cout << groupe << endl;
        cout << moyenne << endl;
    }
};

class Classe
{
private:
    string nom;
    string professeur_principal;
    int nbEleves;
    Eleve eleves[30];

public:
    Classe()
    {
        nom = "";
        nbEleves = 0;
    }

    // Accesseurs
    string get_nom()
    {
        return this->nom;
    }

    string get_professeur_principal()
    {
        return this->professeur_principal;
    }

    // Mutateurs
    void set_nom(string lenom)
    {
        this->nom = lenom;
    }

    void set_professeur_principal(string lenom)
    {
        this->professeur_principal = lenom;
    }

    void ajoute_eleve(Eleve unEleve)
    {
        this->eleves[nbEleves] = unEleve;
        nbEleves++;
    }

    void afficher_classe()
    {
        cout << nom << endl;
        cout << professeur_principal << endl;
        for(int i=0; i<nbEleves; i++)
            eleves[i].afficher_eleve();
    }

    void afficher_moyenne_classe()
    {
        float moyenne_classe = 0;
        for (int i=0; i<nbEleves; i++)
        {
            moyenne_classe += eleves[i].get_moyenne();
        }
        moyenne_classe = moyenne_classe / nbEleves;
        cout << moyenne_classe << endl;

    }

};

// Fonction principale.
int main()
{
    Eleve premier, deuxieme, troisieme, quatrieme;
    Classe classe;

    // Eleves
    premier.set_prenom("John");
    premier.set_nom("Doe");
    premier.set_groupe(2);
    premier.set_moyenne(12.5);
    premier.afficher_eleve();

    deuxieme.set_prenom("Bernard");
    deuxieme.set_nom("Lhermite");
    deuxieme.set_groupe(1);
    deuxieme.set_moyenne(4.75);
    deuxieme.afficher_eleve();
    
    troisieme.set_prenom("Jean");
    troisieme.set_nom("Dujardin");
    troisieme.set_groupe(2);
    troisieme.set_moyenne(14);
    troisieme.afficher_eleve();

    quatrieme.set_prenom("Pierre");
    quatrieme.set_nom("Quiroule");
    quatrieme.set_groupe(1);
    quatrieme.set_moyenne(10);
    quatrieme.afficher_eleve();

    // Classe
    classe.set_nom("SIO1");
    classe.set_professeur_principal("Tryphon Tournesol");
    classe.ajoute_eleve(premier);
    classe.ajoute_eleve(deuxieme);
    classe.ajoute_eleve(troisieme);
    classe.ajoute_eleve(quatrieme);
    classe.afficher_moyenne_classe();

    return 0;
}