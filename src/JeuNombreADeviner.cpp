/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 25/01/2021
// R�le du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
//                              ctime
// Historique du fichier:
/*************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
#include "../include/JeuNombreAdeviner.h"

// Nom :InitJoueur
// R�le : Cr�e un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagn�es et de parties jou�es seront � 0.
// Param�tres d'entr�e :
// Param�tres de sortie :
// Param�tres d'entr�e/sortie :

void InitJoueur(TJoueur &joueurAcreer, string un_nom)
{
    //TJoueur j1;

    joueurAcreer.nbPartiesJouees = 0;
    joueurAcreer.nbPartiesGagnees = 0;
    joueurAcreer.nbTentatives = 0;


}


// Nom :TirerNombreMystere
// R�le : Tire al�atoirement un nombre � deviner entre 0 et 10
// Valeur de retour : nombre � deviner

int TirerNombreMystere()
{
   int nombreADeviner;
    /* initialize random seed: */
    srand (time(NULL));
    /* generate secret number between 1 and 10 */
    nombreADeviner = rand() % 10 + 1;
        return -1;
}


// Nom :JouerPartie
// R�le : Fait jouer une partie au joueur pass� en param�tre
//        A la fin, met � jour les informations du joueur
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie : un_joueur

void JouerPartie(TJoueur &un_joueur, int nombreADeviner)
{
    int nbrproposer =0;
    int essais =0;

    cout<<"Essayez de deviner le nombre :"<<endl;
    cin>> nbrproposer;
    essais++;

    while (essais < 5){
        while (nombreADeviner != nbrproposer)
        {
            if (nombreADeviner < nbrproposer)
            {
                cout<<"Plus petit"<<endl;
                cout<<"Essayez de deviner le nombre :"<<endl;
                cin>> nbrproposer;
                essais++;
            }
            else{
                if (nombreADeviner > nbrproposer)
                {
                    cout<<"Plus grand"<<endl;
                    cout<<"Essayez de deviner le nombre :"<<endl;
                    cin>> nbrproposer;
                    essais++;
                }
            }
         }
         cout<<"Bravo vous avez trouve le nombre en "<<essais<<" essais."<<endl;
    }
    cout<<"Perdu ! Tu as fait plus de 4 essais"<<endl;

// Nom : MajResultatsJoueur
// R�le : met � jour les informations du joueur pass� en param�tre
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

void MajResultatsJoueur(TJoueur &joueur, int nbEssais, bool gagne)
{
   // A COMPLETER
}

// Nom : ResultatsJoueur
// R�le : indique les r�sultats du joueur pass� en param�tre
//        le nombre de parties gagn�es, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations � l'�cran
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
    // A COMPLETER
}

// Nom :Nom
// R�le : retourne le nom du joueur
// Param�tres d'entr�e: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.j1;
}

