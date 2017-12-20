#ifndef OUTILS_H
#define OUTILS_H
/////////////////////////// Include //////////////////////////////////////
#include <iostream> 
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

///////////////////////// Constante //////////////////////////////////////
const int MININT = -2147483630; // On ne met pas au maximum pour la compatibilité entre PC.
const int MAXINT = 2147483630;
const int MAXLIVRE = 50;
const int MAX_AUTEUR = 100;
#define TAILLEMATRICE 100
///////////////////////// Type composé ///////////////////////////////////

typedef struct {
	string titre;
	int nom_aut;
	int annee;
	int nb_pages;
}t_livre;

typedef struct {
	t_livre biblio[MAXLIVRE];
	int nblivre;
}t_biblio;

typedef struct {
	string nom;
	string prenom;
	string nat;
	int nais;
	int mort;
}t_auteur;

typedef struct {
	t_auteur li_aut[MAX_AUTEUR];
	int nbAut;
}t_liste_aut;

//////////////////////////////////////////////////////////////////////////

//////////////////////// Fonction ////////////////////////////////////////
bool date(int jour, int mois, int annee);
int Alea();
int Cherchelivre(t_biblio bib, string livrerechercher);
//void lendemain(int &j, int &m, int &a);
//////////////////////////////////////////////////////////////////////////

/////////////////////// Procédure ////////////////////////////////////////
void saisirControleEntierBorne(string message, int borneinf, int bornesup, int& nombre);
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
void Ajout(t_biblio& bib, t_liste_aut& liste_aut);
void Affichagebibli(t_biblio bib);
void Suppression(t_biblio& bib);
void recherche(t_biblio bib);
void Ensemble(t_biblio bib);
void AfficherAuteur(t_biblio bib, t_liste_aut liste_aut, int i);
void EntreeAuteur(t_liste_aut& liste_aut, t_biblio& bib);
//////////////////////////////////////////////////////////////////////////

#endif