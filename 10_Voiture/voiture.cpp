#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Voiture
{
private:
    string marque;
    string model;
    string etat;
    int km;
    int annee;
    string couleur;

public:
    Voiture()
    {
        marque = "";
        model = "";
        etat = "";
        km = 0;
        annee = 0;
        couleur = "";
    }
    Voiture(
        string lamarque,
        string lemodel,
        string letat,
        int lekm,
        int lannee,
        string lacouleur
    )
    {
        model = lemodel;
        etat = letat;
        km = lekm;
        annee = lannee;
        couleur = lacouleur;
    }

    // Accesseurs :
        string get_marque()
    {
        return this->marque;
    }

    string get_model()
    {
        return this->model;
    }

    string get_etat()
    {
        return this->etat;
    }

    int get_km()
    {
        return this->km;
    }

    int get_annee()
    {
        return this->annee;
    }

    string get_couleur()
    {
        return this->couleur;
    }

    // Mutateurs
    void set_marque(string lamarque)
    {
        this->marque = lamarque;
    }

    void set_model(string lemodel)
    {
        this->model = lemodel;
    }

    void set_etat(string letat)
    {
        this->etat = letat;
    }

    void set_km(int lekm)
    {
        this->km = lekm;
    }

    void set_annee(int lannee)
    {
        this->annee = lannee;
    }

    void set_couleur(string lacouleur)
    {
        this->couleur = lacouleur;
    }

    void afficher_voiture()
    {
        if(marque != "") cout << "Marque: " << marque << endl;
        if(model != "") cout << "Modèle: " << model << endl;
        if(etat != "") cout << "Etat: " << etat << endl;
        if(km != 0) cout << "Kilométrage: " << km << "km" << endl;
        if(annee != 0) cout << "Année: " << annee << endl;
        if(couleur != "") cout << "Couleur: " << couleur << endl;
    }
};

// Fonction principale.
int main()
{
    const int nbVoitures = 5;
    Voiture garage[nbVoitures];

    system("clear");

    garage[0].set_marque("Renault");
    garage[0].set_model("Mégane");
    garage[0].set_etat("OCCASION");
    garage[0].set_km(90000);
    garage[0].set_annee(2010);
    garage[0].set_couleur("Rouge");

    garage[1].set_marque("Peugot");
    garage[1].set_model("306");
    garage[1].set_etat("NEUVE");
    garage[1].set_couleur("Noire");

    garage[2].set_marque("Opel");
    garage[2].set_model("Astra");
    garage[2].set_etat("OCCASION");
    garage[2].set_km(30000);
    garage[2].set_annee(2019);
    garage[2].set_couleur("Bleue");

    garage[3].set_marque("Peugeot");
    garage[3].set_model("5008");
    garage[3].set_etat("NEUVE");
    garage[3].set_couleur("Jaune");

    // Affichage des caractéristiques des voitures.
    for (int i = 0; i<nbVoitures; i++)
    {
        cout << "--- Voiture n°" << i+1 << ": ---" << endl;
        garage[i].afficher_voiture();
        cout << endl;
    }


    return(0);
}