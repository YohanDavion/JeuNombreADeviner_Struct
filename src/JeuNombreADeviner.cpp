/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code des fonctions du jeu
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
// Rôle : Crée un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
// Paramètres d'entrée :
// Paramètres de sortie :
// Paramètres d'entrée/sortie :

void InitJoueur(TJoueur &joueurAcreer, string un_nom)
{
    //TJoueur j1;

    joueurAcreer.nbPartiesJouees = 0;
    joueurAcreer.nbPartiesGagnees = 0;
    joueurAcreer.nbTentatives = 0;


}


// Nom :TirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre 0 et 10
// Valeur de retour : nombre à deviner

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
// Rôle : Fait jouer une partie au joueur passé en paramètre
//        A la fin, met à jour les informations du joueur
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie : un_joueur

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
// Rôle : met à jour les informations du joueur passé en paramètre
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void MajResultatsJoueur(TJoueur &joueur, int nbEssais, bool gagne)
{
   // A COMPLETER
}

// Nom : ResultatsJoueur
// Rôle : indique les résultats du joueur passé en paramètre
//        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations à l'écran
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
    // A COMPLETER
}

// Nom :Nom
// Rôle : retourne le nom du joueur
// Paramètres d'entrée: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.j1;
}

