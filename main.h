#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void lire(char *chaine, int longueur);
void selectRotor(int *rotor,int numeroRotor,int *rotor1,int *rotor2,int *rotor3,int *rotor4,int *rotor5,int *rotor6,int *rotor7,int *rotor8);
void selectReflecteur(int *reflecteur,int *reflecteur1,int *reflecteur2,int *reflecteur3, int *reflecteur4);
void setupRotor(int *rotor,int numeroRotor);
void Rotor(int *rotor1, int *rotor2, int *rotor3);
void viderBuffer();
int inverse(int *rotor, int lettre);

#endif // MAIN_H_INCLUDED
