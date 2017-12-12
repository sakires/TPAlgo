#ifndef OUTILS_H
#define OUTILS_H
/////////////////////////// include //////////////////////////////////////
#include <iostream> 
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/////////////////////////////////////////////////////////////////////////

///////////////////////// constante //////////////////////////////////////
const int MININT = -2147483630; // On ne met pas au maximum pour la compatibilité entre PC.
const int MAXINT = 2147483630;
const int MAXLIVRE = 50;
//////////////////////////////////////////////////////////////////////////

///////////////////////// type composé ///////////////////////////////////
typedef struct {
	string titre;
	string nom_aut;
	int annee;
	int nb_pages;
}t_livre;
typedef struct{
	t_livre bibli[MAXLIVRE];
	int nblivre;
}t_biblio;
//////////////////////////////////////////////////////////////////////////

//////////////////////// fonction ////////////////////////////////////////
bool date(int jour, int mois, int annee);
int Alea();
int Cherchelivre(t_livre biblio[MAXLIVRE], int nblivre, string livrerechercher);
//void lendemain(int &j, int &m, int &a);
//////////////////////////////////////////////////////////////////////////

/////////////////////// procédure ////////////////////////////////////////
void saisirControleEntierBorne(string message, int borneinf, int bornesup, int& nombre);
#define TAILLEMATRICE 100
void TableauCarre(int tab[TAILLEMATRICE][TAILLEMATRICE], int n);
void Tableau(string tab[TAILLEMATRICE], string motsSaisie);
void Mots(string motsSaisie);
void Palindrome(string motsSaisie);
void Majuscule(string motsSaisie);
void MotsTableau(string motsSaisie);
void PalindromeTableau(string motsSaisie);
void MajusculeTableau(string motsSaisie);
void TableauAuto(int N, int tab[TAILLEMATRICE]);
void Tribulles(int tab[TAILLEMATRICE], int N);
void Afftab(int tab[TAILLEMATRICE], int N);
void bibliotheque();
void Ajout(t_livre biblio[MAXLIVRE], int& nblivre);
void Affichagebibli(t_livre biblio[MAXLIVRE], int nblivre);
void Suppression(t_livre biblio[MAXLIVRE], int& nblivre);
void recherche(t_livre biblio[MAXLIVRE], int nblivres);
//////////////////////////////////////////////////////////////////////////

#endif