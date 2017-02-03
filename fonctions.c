#include "fonctions.h"


void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}



void lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;

    if (fgets(chaine, longueur, stdin) != NULL)
    {
        positionEntree = strchr(chaine, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            viderBuffer();
        }
    }
    else
    {
        viderBuffer();
    }
}



void selectRotor(int *rotor,int numeroRotor,int *rotor1,int *rotor2,int *rotor3,int *rotor4,int *rotor5,int *rotor6,int *rotor7,int *rotor8)
{
    int i;
    printf("Numero du rotor %d: ", numeroRotor);
    scanf("%d", &numeroRotor);
    viderBuffer();
    switch (numeroRotor)
    {
    case 1:
        for ( i = 0 ; i < 26 ; i++)
        {
         rotor[i] = rotor1[i];
        }
        break;
    case 2:
        for ( i = 0 ; i < 26 ; i++)
        {
         rotor[i] = rotor2[i];
        }
        break;
    case 3:
        for ( i = 0 ; i < 26 ; i++)
        {
         rotor[i] = rotor3[i];
        }
        break;
    case 4:
        for ( i = 0 ; i < 26 ; i++)
        {
         rotor[i] = rotor4[i];
        }
        break;
    case 5:
        for ( i = 0 ; i < 26 ; i++)
        {
         rotor[i] = rotor5[i];
        }
        break;
    case 6:
        for ( i = 0 ; i < 26 ; i++)
        {
         rotor[i] = rotor6[i];
        }
        break;
    case 7:
        for ( i = 0 ; i < 26 ; i++)
        {
         rotor[i] = rotor7[i];
        }
        break;
    case 8:
        for ( i = 0 ; i < 26 ; i++)
        {
         rotor[i] = rotor8[i];
        }
        break;
    default:
        printf("Veuillez selectionner un rotor entre 1 et 8.");
        exit(1);
    }

}



void selectReflecteur(int *reflecteur,int *reflecteur1,int *reflecteur2,int *reflecteur3, int *reflecteur4)
{
    int numeroReflecteur, i;
    printf("Numero du reflecteur: ");
    scanf("%d", &numeroReflecteur);
    viderBuffer();
    switch (numeroReflecteur)
    {
    case 1:
        for ( i = 0 ; i < 26 ; i++)
        {
         reflecteur[i] = reflecteur1[i];
        }
        break;
    case 2:
        for ( i = 0 ; i < 26 ; i++)
        {
         reflecteur[i] = reflecteur2[i];
        }
        break;
    case 3:
        for ( i = 0 ; i < 26 ; i++)
        {
         reflecteur[i] = reflecteur3[i];
        }
        break;
    case 4:
        for ( i = 0 ; i < 26 ; i++)
        {
         reflecteur[i] = reflecteur4[i];
        }
        break;
    default:
        printf("Veuillez selectionner un reflecteur entre 1 et 4.");
        exit(1);

    }


}



void setupRotor(int *rotor,int numeroRotor)
{
    int nombreTours = 0, tampon, i;
    printf("Position du rotor %d (0-25): ", numeroRotor);
    scanf("%d", &rotor[26]);
    viderBuffer();
    for(nombreTours = 0; nombreTours < rotor[26]; nombreTours++)
    {
    tampon = rotor[0];
    for ( i = 0; i < 25; i++)
    {
        rotor[i] = rotor[i + 1];
    }
    rotor[25] = tampon;
    }
}



void Rotor(int *rotor1, int *rotor2, int *rotor3)
{
    int i, tampon1 = rotor1[0], tampon2 = rotor2[0],tampon3 = rotor3[0];

    for ( i = 0; i <= 24; i++)
    {
        rotor1[i] = rotor1[i + 1];
    }

    rotor1[25] = tampon1;
    rotor1[26] ++;

    if (rotor1[26] > 25)
    {
        for ( i = 0; i <= 24; i++)
        {
            rotor2[i] = rotor2[i + 1];
        }

        rotor2[25] = tampon2;
        rotor2[26] ++;
        rotor1[26] = 0;
    }

    if (rotor2[26] > 25)
    {
        for ( i = 0; i <= 24; i++)
        {
            rotor3[i] = rotor3[i + 1];
        }

        rotor3[25] = tampon3;
        rotor3[26] ++;
        rotor2[26] = 0;
    }
}




int inverse(int *rotor, int lettre)
{
    int i = 0;
    while(rotor[i] != lettre)
    {
        i++;
    }
    return i;
}
