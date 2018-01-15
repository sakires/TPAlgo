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
const int MININT = -2147483630; // On ne met pas au maximum pour la compatibilite entre PC.
const int MAXINT = 2147483630;
const int MAXLIVRE = 50;
const int MAX_AUTEUR = 100;
const int MAXLISTE = 20;
#define TAILLEMATRICE 100
///////////////////////// Type compose ///////////////////////////////////

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

typedef struct {
	int liste[MAXLISTE];
	int nbliste;
}t_liste_int;
//////////////////////////////////////////////////////////////////////////

//////////////////////// Fonction ////////////////////////////////////////
bool date(int jour, int mois, int annee);
int Alea();
int Cherchelivre(t_biblio bib, string livrerechercher);
int ChercheListe(t_liste_int li, int var);
int Nbelementliste(t_liste_int li);
//void lendemain(int &j, int &m, int &a);
//////////////////////////////////////////////////////////////////////////

/////////////////////// Procedure ////////////////////////////////////////
void saisirControleEntierBorne(string message, int borneinf, int bornesup, int& nombre);
void TableauCarre(int tab[TAILLEMATRICE][TAILLEMATRICE], int n);
void Tableau(string tab[TAILLEMATRICE], string motsSaisie);
void Mots(string motsSaisie);
void Palindrome(string motsSaisie);
void Majuscule(string& motsSaisie);
void MotsTableau(string motsSaisie);
void PalindromeTableau(string motsSaisie);
void MajusculeTableau(string motsSaisie);
void TableauAuto(int N, int tab[TAILLEMATRICE]);
void Tribulles(int tab[TAILLEMATRICE], int N);
void Afftab(int tab[TAILLEMATRICE], int N);
void Ajout(t_biblio& bib, t_liste_aut& liste_aut);
void Affichagebibli(t_biblio bib, t_liste_aut liste_aut);
void Suppression(t_biblio& bib);
void recherche(t_biblio bib, t_liste_aut liste_aut);
void Ensemble(t_biblio bib);
void AfficherAuteur(t_biblio bib, t_liste_aut liste_aut, int i);
void EntreeAuteur(t_liste_aut& liste_aut, t_biblio& bib);
void Affliste(t_liste_int li);
void Ajoutliste(t_liste_int& li);
void Suppressionliste(t_liste_int& li);
void initialisation(t_liste_int& li);
void Reset(t_liste_int& li);
void ProChercheListe(t_liste_int li);
void Tribullesliste(t_liste_int& li);
//////////////////////////////////////////////////////////////////////////

#endif