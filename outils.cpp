#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream> 
#include <string>
#include "outils.h"
#include <iomanip>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////
// Programme permettant de saisr une variable entière et ceux entre les bornes choisi
//  entré : le message souhaitant être afficher, les deux borne (borne inférieur borneinf et 
//   borne supérieur bornesup 
// Sorti : le nombre souhaitant être saisi 
///////////////////////////////////////////////////////////////////////////////////////////////

void saisirControleEntierBorne(string message, int borneinf, int bornesup, int& nombre)
{
	cout << message << endl;
	cin >> nombre;
	while (nombre < borneinf || nombre > bornesup)
	{
		cout << "Erreur, " << message << endl;
		cin >> nombre;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////
// Programme permettant de renvoyer un booléens pour vérifier la validité de la date  
// Entrer : on rentre la date de manière numérique dans l'ordre suivant jour mois annee        
// Retour : on retourne un booléen ( vrai : date cohérente ; faux,date non cohérente)                                                                                                    
///////////////////////////////////////////////////////////////////////////////////////////////// 
bool date(int jour, int mois, int annee) {

	const int ANNEEMIN = -2147483646;
	const int ANNEMAX = 2147483645;
	bool ok = true;
	if (annee < ANNEEMIN || annee > ANNEMAX)
	{
		ok = false;
	}
	switch (mois) {
	case 1: if (jour<1 || jour>31) {
		ok = false;
	}
			break;
	case 2: if ((annee % 400) == 0 || (annee % 4 == 0 && annee % 100 != 0)) {
		if (jour<1 || jour>29) {
			ok = false;
		}
	}
			else {
				if (jour <1 || jour > 28) {
					ok = false;
				}
			}
			break;
	case 3: if (jour<1 || jour>31) {
		ok = false;
	}
			break;
	case 4: if (jour<1 || jour>30) {
		ok = false;
	}
			break;
	case 5: if (jour<1 || jour>31) {
		ok = false;
	}
			break;
	case 6: if (jour<1 || jour>30) {
		ok = false;
	}
			break;
	case 7: if (jour<1 || jour>31) {
		ok = false;
	}
			break;
	case 8: if (jour<1 || jour>31) {
		ok = false;
	}
			break;
	case 9: if (jour<1 || jour>30) {
		ok = false;
	}
			break;
	case 10: if (jour<1 || jour>31) {
		ok = false;
	}
			 break;
	case 11: if (jour<1 || jour>30) {
		ok = false;
	}
			 break;
	case 12: if (jour<1 || jour>31) {
		ok = false;
	}
			 break;
	default: ok = false;
	}
	return(ok);
}

///////////////////////////////////////////////////////////////////////////////////////
// Utilité : Remplissage d'un tableau Carré en fonction d'un entier.
// Entrée / Sortie : Le tableau avec les valeurs saisies.
// Juste en entrée : l'entier n.
////////////////////////////////////////////////////////////////////////////////////////

void TableauCarre(int tab[TAILLEMATRICE][TAILLEMATRICE], int n) {
	int i;
	int j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "Remplir le tableau : (" << i << ") (" << j << ") " << endl;
			cin >> tab[i][j];
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////
// Utilité : Compter le nombre de voyelles dans une chaines de caractère.
// Entrée / Sortie : Le tableau a une dimension.
// Juste en entrée : la chaine saisie.
////////////////////////////////////////////////////////////////////////////////////////

void Mots(string motsSaisie) {
	int i;
	int longueur;
	int nb_voyelles = 0;

	longueur = motsSaisie.length();

	for (i = 0; i < longueur; i++) {
		if (motsSaisie[i] == 'a' || motsSaisie[i] == 'A' || motsSaisie[i] == 'e' || motsSaisie[i] == 'E' || motsSaisie[i] == 'i' || motsSaisie[i] == 'I' || motsSaisie[i] == 'o' || motsSaisie[i] == 'O' || motsSaisie[i] == 'u' || motsSaisie[i] == 'U' || motsSaisie[i] == 'y' || motsSaisie[i] == 'Y') {
			nb_voyelles = nb_voyelles + 1;
		}
	}

	cout << "Il y a " << nb_voyelles << " voyelles dans la chaine saisie" << endl;
	system("PAUSE");
}
///////////////////////////////////////////////////////////////////////////////////////
// Utilité : Vérifier si la chaine saisie est un palindrome.
// Entrée / Sortie : Le tableau a une dimension.
// Juste en entrée : la chaine saisie.
////////////////////////////////////////////////////////////////////////////////////////

void Palindrome(string motsSaisie) {
	int i;
	int j;
	int longueur;

	longueur = motsSaisie.length();
	for (i = 0; i < longueur; i++)
	{
		if (motsSaisie[i] >= 97 && motsSaisie[i] <= 122)
		{
			motsSaisie[i] = motsSaisie[i] - 32;
		}
	}
	// On met tout en majuscule (voir la procédure majuscule)
	i = 0;
	j = motsSaisie.length() - 1;
	bool isPalindrome = true;

	while (i < j) //Boucle pour décomposer la chaine pour savoir si c'est un palindrome
	{
		if (motsSaisie[i] != motsSaisie[j])
		{
			isPalindrome = false;
		}
		i++;
		j--;
	}
	if (isPalindrome == true) { // Avec le booleen qui a été traité on gère l'affichage.
		cout << "La chaine est un palindrome" << endl;
	}
	else {
		cout << "La chaine n est pas un palindrome" << endl;
	}
	system("PAUSE");
}
///////////////////////////////////////////////////////////////////////////////////////
// Utilité : Saisir un nom et tout mettre en majuscule
// Entrée / Sortie : Le tableau a une dimension.
// Juste en entrée : la chaine saisie.
////////////////////////////////////////////////////////////////////////////////////////

void Majuscule(string& motsSaisie) {
	int i = 0;
	int j = 0;
	int longueur;

	longueur = motsSaisie.length();
	for (i = 0; i < longueur; i++)
	{
		if (motsSaisie[i] >= 97 && motsSaisie[i] <= 122)
		{
			motsSaisie[i] = motsSaisie[i] - 32;
		}
	}
	//	cout << motsSaisie << endl; Facultatif
}
///////////////////////////////////////////////////////////////////////////////////////
// Utilité : Compter le nombre de voyelles dans une chaines de caractère.
// Entrée / Sortie : Le tableau a une dimension.
// Juste en entrée : la chaine saisie.
////////////////////////////////////////////////////////////////////////////////////////

void MotsTableau(string motsSaisie) {
	int i;
	int j = 0;
	int longueur;
	int nb_voyelles = 0;
	string tab[TAILLEMATRICE];
	longueur = motsSaisie.length();
	Tableau(tab, motsSaisie);


	for (i = 0; i < longueur; i++) {
		nb_voyelles = 0;
		motsSaisie = tab[i];
		longueur = motsSaisie.length();
		for (j = 0; j < longueur; j++) {
			if (motsSaisie[j] == 'a' || motsSaisie[j] == 'A' || motsSaisie[j] == 'e' || motsSaisie[j] == 'E' || motsSaisie[j] == 'i' || motsSaisie[j] == 'I' || motsSaisie[j] == 'o' || motsSaisie[j] == 'O' || motsSaisie[j] == 'u' || motsSaisie[j] == 'U' || motsSaisie[j] == 'y' || motsSaisie[j] == 'Y') {
				nb_voyelles = nb_voyelles + 1;
			}
		}
		cout << "Il y a " << nb_voyelles << " voyelles dans le nom  : " << motsSaisie << endl;
	}
	system("PAUSE");
}
///////////////////////////////////////////////////////////////////////////////////////
// Utilité : Vérifier si la chaine saisie est un palindrome.
// Entrée / Sortie : Le tableau a une dimension.
// Juste en entrée : la chaine saisie.
////////////////////////////////////////////////////////////////////////////////////////

void PalindromeTableau(string motsSaisie) {
	int i = 0;
	int j = 0;
	int k = 0;
	int longueur;
	string tab[TAILLEMATRICE];
	Tableau(tab, motsSaisie);
	longueur = motsSaisie.length();

	for (k = 0; k < longueur; k++) {
		motsSaisie = tab[k];
		for (i = 0; i < longueur; i++)
		{
			if (motsSaisie[i] >= 97 && motsSaisie[i] <= 122)
			{
				motsSaisie[i] = motsSaisie[i] - 32;
			}
		}
		// On met tout en majuscule (voir la procédure majuscule)
		i = 0;
		j = motsSaisie.length() - 1;
		bool isPalindrome = true;

		while (i < j) //Boucle pour décomposer la chaine pour savoir si c'est un palindrome
		{
			if (motsSaisie[i] != motsSaisie[j])
			{
				isPalindrome = false;
			}
			i++;
			j--;
		}
		if (isPalindrome == true) { // Avec le booleen qui a été traité on gère l'affichage.
			cout << motsSaisie << " Le nom est un palindrome" << endl;
		}
		else {
			cout << motsSaisie << " Le nom n est pas un palindrome" << endl;
		}
		system("PAUSE");
	}
}
///////////////////////////////////////////////////////////////////////////////////////
// Utilité : Saisir un nom et tout mettre en majuscule
// Entrée / Sortie : Le tableau a une dimension.
// Juste en entrée : la chaine saisie.
////////////////////////////////////////////////////////////////////////////////////////

void MajusculeTableau(string motsSaisie) {
	int i = 0;
	int j = 0;
	int longueur;
	string tab[TAILLEMATRICE];
	longueur = motsSaisie.length();
	Tableau(tab, motsSaisie);

	for (j = 0; j < longueur; j++) {
		motsSaisie = tab[j];
		longueur = motsSaisie.length();
		for (i = 0; i < longueur; i++)
		{
			if (motsSaisie[i] >= 97 && motsSaisie[i] <= 122)
			{
				motsSaisie[i] = motsSaisie[i] - 32;
			}
		}
		cout << motsSaisie << endl;
	}
}
///////////////////////////////////////////////////////////////////////////////////////
// Utilité : Remplissage d'un tableau en fonction d'une chaine de caractère
// Entrée / Sortie : Le tableau avec les valeurs saisies.
// Juste en entrée : l'entier n.
////////////////////////////////////////////////////////////////////////////////////////

void Tableau(string tab[TAILLEMATRICE], string motsSaisie) {
	int i = 0;
	char continuer;

	do {
		tab[i] = motsSaisie;
		cout << "Saisir un nom " << endl;
		cin >> motsSaisie;
		i++;
		cout << "Un autre nom ? " << endl;
		cin >> continuer;
	} while (continuer == 'o');

	cout << "Sortie du cycle de saisie " << endl;
}
void TableauAuto(int N, int tab[TAILLEMATRICE]) {
	int i = 0;
	int j = 0;

	int Alea();
	for (i = 0; i < N; i++) {
		time(NULL);
		tab[i] = Alea();
	}
	for (j = 0; j < N; j++) {
		cout << "   " << tab[j] << endl;
	}
}
/////////////////////////////////////////////////////////////////////////////////////
// Utilité : Fonction qui sort un nombre aléatoire.
// Entrée : //
// Sortie : Chiffre aléatoire
/////////////////////////////////////////////////////////////////////////////////////
int Alea()
{
	return ((rand() % 100) + 1);
}
/////////////////////////////////////////////////////////////////////////////////////
// Utilité : Procédure permettant de trier un tableau.
// Entrée : Le tableau et N le nombre de cases utilisés.
// Sortie : Le tableau trié.
/////////////////////////////////////////////////////////////////////////////////////
void Tribulles(int tab[TAILLEMATRICE], int N) {
	bool exg;
	int p;
	int tempo;
	int i;
	p = N - 1;
	exg = true;
	while (exg && p>0) {
		exg = false;
		for (i = 0; i < p; i++) {
			if (tab[i] > tab[i + 1]) {
				tempo = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tempo;
				exg = true;
			}
		}
		p--;
	}
}
/////////////////////////////////////////////////////////////////////////////////////
// Utilité : Procédure permettant d'afficher de façon propre le tableau
// Entrée : Le tableau et N le nombre de cases utilisés.
// Sortie : Le tableau.
/////////////////////////////////////////////////////////////////////////////////////
void Afftab(int tab[TAILLEMATRICE], int N) {
	int i = 0;
	for (i = 0; i < N; i++) {
		cout << tab[i] << setw(3);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Procedure permettant d afficher tout les livres contenue dans la bibliotheque
//Entrée : biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//et nblivres le nombre de livre dans la bibliotheque
//Sortie : Rien
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Affichagebibli(t_biblio bib, t_liste_aut liste_aut) {
	int i = 0;
	for (i = 0; i < bib.nblivre; i++) {
		cout << "Le titre est : " << bib.biblio[i].titre << endl;
		AfficherAuteur(bib, liste_aut, i);
		cout << "L'annee de publication  est : " << bib.biblio[i].annee << endl;
		cout << "Il contient  : " << bib.biblio[i].nb_pages << " pages" << endl;
		cout << endl;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//procedure Ajout permet d ajouter un livre dans la bibliotheque 
//Entrer :nblivre pour savoir ou on en es dans la bibliotheque 
//Sorti  :biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Ajout(t_biblio& bib, t_liste_aut& liste_aut) {
	cout << "Vous allez rentrer un nouveau livre " << endl;
	cout << "Saisir nom du livre " << endl;
	cin >> bib.biblio[bib.nblivre].titre;
	Majuscule(bib.biblio[bib.nblivre].titre);
	EntreeAuteur(liste_aut, bib);
	saisirControleEntierBorne("Saisir l annee de parution", liste_aut.li_aut[bib.nblivre].nais, 3000, bib.biblio[bib.nblivre].annee);

	cout << "Saisir le nombre de pages" << endl;
	cin >> bib.biblio[bib.nblivre].nb_pages;

	bib.nblivre = bib.nblivre + 1;

	cout << "Vous avez ajoute un livre " << endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Procedure permettant de rechercher nu livre dans la bibliotheque 
//Entrer: biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void recherche(t_biblio bib, t_liste_aut liste_aut) {
	int pos;
	string livre_rech;

	cout << "Saisir le nom du livre rechercher" << endl;
	cin >> livre_rech;
	Majuscule(livre_rech);
	pos = Cherchelivre(bib, livre_rech);
	if (pos >= 0) {
		cout << "Le titre est :" << bib.biblio[pos].titre << endl;
		AfficherAuteur(bib, liste_aut, pos);
		cout << "L'annee de publication  est :" << bib.biblio[pos].annee << endl;
		cout << "Il contient  :" << bib.biblio[pos].nb_pages << " pages" << endl;
	}
	if (pos == -1) {
		cout << "lL livre n a pas ete trouver" << endl;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Fonction permettant de retrouvrer la position ou se situe le livre dans le tableau
// (ne gere pas le cas de titre identique ou de réedition)
//entree: biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque et livrerechercher une chaine de caractere qui est le titre du livre rechercher
// retourne un entier qui est i qui est la position si i est positif ; si le livre a pas été trouver il sera retourner -1
//Sortie:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Cherchelivre(t_biblio bib, string livrerechercher)
{
	bool livre_trouver = false;
	int i = 0;
	while (i < bib.nblivre && livre_trouver == false) {
		if (bib.biblio[i].titre == livrerechercher) {
			livre_trouver = true;
		}
		else {
			i++;
		}
	}
	if (livre_trouver == false)
	{
		i = -1;
	}
	return i;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Procedure permettant de suprimer un livre de la bibliotheque
//Entree biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque
//Sortie:biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Suppression(t_biblio& bib) {
	string	livre_supp;
	int i = 0;
	int position;
	t_livre tempo;

	cout << "Entrer le titre du livre a supprimer : " << endl;
	cin >> livre_supp;
	Majuscule(livre_supp);
	position = Cherchelivre(bib, livre_supp);
	if (position >= 0) {
		for (i = position; i < bib.nblivre; i++) {
			bib.biblio[i].titre = bib.biblio[i + 1].titre;
			bib.biblio[i].nom_aut = bib.biblio[i + 1].nom_aut;
			bib.biblio[i].annee = bib.biblio[i + 1].annee;
			bib.biblio[i].nb_pages = bib.biblio[i + 1].nb_pages;
			bib.nblivre = bib.nblivre - 1;

		}
	}
	else {
		cout << "Le livre n a pas ete trouve " << endl;
	}

}

////////////////////////////////////////////////////////////
// Procédure permettant de savoir si la bibliothèque est un ensemble (analyser la redondance)
// Entrée: Bibliothèque et l'entier nblivre.
// Sortie: Pas de sortie.
////////////////////////////////////////////////////////////
void Ensemble(t_biblio bib) {
	int i = 0;
	int j = 0;
	bool ensemble = true;
	t_livre livre;

	while (ensemble && i<bib.nblivre)
	{
		livre.titre = bib.biblio[i].titre;
		livre.nom_aut = bib.biblio[i].nom_aut;
		livre.annee = bib.biblio[i].annee;
		while (ensemble && j<bib.nblivre)
		{
			if (livre.titre == bib.biblio[j].titre && livre.nom_aut == bib.biblio[j].nom_aut && livre.annee == bib.biblio[j].annee)
			{
				ensemble = false;
			}
			j++;
		}
		i++;
	}
	if (ensemble == true) {
		cout << " c'est un ensemble" << endl;
	}
	else {
		cout << "c'est pas un ensemble" << endl;
	}
}

//////////////////////////////////////////////////
// Procédure permettant de saisir un auteur et vérifier s'il n'est pas déjà dedans (redondance)
// Entrée : Rien
// Sortie : La structure de la liste et des auteurs ansi que la structure de la bibliothèque
///////////////////////////////////////////////////
void EntreeAuteur(t_liste_aut& liste_aut, t_biblio& bib)
{
	int i = 0;
	string nomaut;
	string preaut;
	bool estdeja = false;
	cout << "Entrer le nom de l auteur :" << endl;
	getline(cin, nomaut);
	getline(cin, nomaut); // On a du dupliquer getline, sinon ça ne fonctionnait pas et ça passait directement à la procédure Majuscule
	Majuscule(nomaut);
	
	cout << "Entrer le prenom  de l auteur :" << endl;
	getline(cin, preaut);
	Majuscule(preaut);

	while (i<liste_aut.nbAut && estdeja == false)
	{
		if (liste_aut.li_aut[i].nom == nomaut && liste_aut.li_aut[i].prenom == preaut)
		{
			estdeja = true;
		}
		else
		{
			i = i + 1;
		}
	}
	if (estdeja == true)
	{
		cout << "L auteur est deja repertorie " << endl;
		bib.biblio[bib.nblivre].nom_aut = i;
	}
	else
	{
		liste_aut.li_aut[liste_aut.nbAut].nom = nomaut;
		liste_aut.li_aut[liste_aut.nbAut].prenom = preaut;
		cout << "Saisir la nationalite : " << endl;
		cin >> liste_aut.li_aut[liste_aut.nbAut].nat;
		cout << "Saisir l annee de naissance : " << endl;
		cin >> liste_aut.li_aut[liste_aut.nbAut].nais;
		cout << "Saisir l annee de mort : " << endl;
		cin >> liste_aut.li_aut[liste_aut.nbAut].mort;
		bib.biblio[bib.nblivre].nom_aut = liste_aut.nbAut;
		liste_aut.nbAut = liste_aut.nbAut + 1;

	}


}
//////////////////////////////////////////////////
// Procédure permettant d'afficher un auteur.
// Entrée : La structure de la bibliothèque et de l'auteur, et l'entier i pour trouver la position du nom de l'auteur.
//
///////////////////////////////////////////////////
void AfficherAuteur(t_biblio bib, t_liste_aut liste_aut, int i) {
	int pos;
	pos = bib.biblio[i].nom_aut;
	cout << "le nom de l auteur est : " << liste_aut.li_aut[pos].nom << endl;
	cout << "le prenom de l auteur est : " << liste_aut.li_aut[pos].prenom << endl;
	cout << "la nationalite de l auteur est : " << liste_aut.li_aut[pos].nat << endl;
	cout << "la date de naissance de l auteur est : " << liste_aut.li_aut[pos].nais << endl;
	cout << "la date de mort de l auteur est : " << liste_aut.li_aut[pos].mort << endl;
}