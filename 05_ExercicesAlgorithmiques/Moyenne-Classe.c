// inclut le contenu du fichier stdio.h dans le fichier actuel.
// le fichier stdio.h intègre la bibliothèque des fonctions scanf/printf. (Standard input/output)
#include <stdio.h>
//inclusion de la bibliothèque standard pour l'usage de la fonction system.
#include <stdlib.h>

// Fonction permettant de saisir les notes.
int saisie_notes(float tab[100], int nbNotes)
{
    int note, i = 0, restNotes = nbNotes;

    do
    {
        printf("Tapez une note comprise en 0 et 20 (reste %d) : ", restNotes);
        scanf("%f",&note);
        if (note >= 0)
        {
            tab[i] = note;
            i++;
            restNotes = nbNotes - i;
        }
    }
    while (i < nbNotes);
    
    return i;
}

// Fonction permettant de récupèrer la note la plus élevée.
int note_max(float *notes, int nbNotes)
{
    int i, large;
    
    i=0;
    large = notes[i];
    while(i<nbNotes)
    {
        if(large<notes[i])
            large = notes[i];
        i++;
    }
    printf("\nLa note la plus élevée est %d\n", large);
    return 0;
}

// Fonction permettant de faire la moyenne des notes.
int note_moyenne(float *notes, int nbNotes)
{
    int sum, loop;
    float avg;

    sum = avg = 0;
   
    for(loop = 0; loop < nbNotes; loop++)
    {
    	sum = sum + notes[loop];
    }
   
    avg = (float)sum / loop;
    printf("La moyenne de ces valeurs est : %.2f\n", avg);   
   
   return 0;
}

// fonction principale du programme
int main()
{
    float* notes = NULL;
    int nbNotes;
    
    system("clear");
    printf("Combien de notes devez vous rentrer ? ");
    scanf("%d", &nbNotes);
    notes = malloc(sizeof(float)*nbNotes);
    
    saisie_notes(notes, nbNotes);
    note_max(notes, nbNotes);
    note_moyenne(notes, nbNotes);
    
    free(notes);
    
    return 0;
}





