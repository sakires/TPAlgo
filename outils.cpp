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

void Majuscule(string motsSaisie) {
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
	cout << motsSaisie << endl;
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

///////////////////////////////////////////////////////////
//Procedure autonome permettant de gérer une bibliotheque
//
//
///////////////////////////////////////////////////////////
#define MAXLIVRE 50
void bibliotheque() {
	int choix;
	bool reco;
	t_livre biblio[MAXLIVRE];
	int nblivre;
	string titrerech;

	reco = true;
	nblivre = 0;
	do {
		cout << "vous avez " << nblivre << " livre" << endl;
		saisirControleEntierBorne("1-afficher l'enssemble des livre\n 2-ajouter un nouveau livre\n 3-supprimer un livre\n 4-rechercher un livre\n 5-quitter ", 0, 5, choix);
		switch (choix) {
		case 1:Affichagebibli(biblio, nblivre);
			break;
		case 2: Ajout(biblio, nblivre);
			break;
		case 3:Suppression(biblio, nblivre);
			break;
		case 4:
			recherche(biblio, nblivre);
			break;
		default:cout << "bye" << endl;
			reco = false;

		}
	} while (reco);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Procedure permettant d afficher tout les livres contenue dans la bibliotheque
//	entrer biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque
//Sorti:
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Affichagebibli(t_livre biblio[MAXLIVRE], int nblivre) {
	int i = 0;
	for (i = 0; i < nblivre ; i++) {
		cout << "le titre est :" << biblio[i].titre << endl;
		cout << "l'auteur est :" << biblio[i].nom_aut << endl;
		cout << "l'annee de publication  est :" << biblio[i].annee << endl;
		cout << "il contient  :" << biblio[i].nb_pages << " pages" << endl;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//procedure Ajout permet d ajouter un livre dans la bibliotheque 
//Entrer :nblivre pour savoir ou on en es dans la bibliotheque 
//Sorti  :biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Ajout(t_livre biblio[MAXLIVRE], int& nblivre) {
	cout << "vous allez rentrer un nouveau livre" << endl;
	cout << "Saisir nom du livre" << endl;
	cin >> biblio[nblivre].titre;

	cout << "saisir nom de l auteur" << endl;
	cin >> biblio[nblivre].nom_aut;

	cout << "saisir annee de parution" << endl;
	cin >> biblio[nblivre].annee;

	cout << "Saisir le nombre de page" << endl;
	cin >> biblio[nblivre].nb_pages;

	nblivre = nblivre + 1;

	cout << "voous avez ajoute un livre" << endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Procedure permettant de rechercher nu livre dans la bibliotheque 
//Entrer: biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void recherche (t_livre biblio[MAXLIVRE],int nblivre){
	int pos;
	int i=0;
	string livre_rech;

	cout << "Saisir le nom du livre rechercher" << endl;
	cin >> livre_rech;
	pos = Cherchelivre(biblio, nblivre, livre_rech);
	if (i >= 0) {
		cout << "le titre est :" << biblio[pos].titre << endl;
		cout << "l'auteur est :" << biblio[pos].nom_aut << endl;
		cout << "l'annee de publication  est :" << biblio[pos].annee << endl;
		cout << "il contient  :" << biblio[pos].nb_pages << " pages" << endl;
	}
	else {
		cout << "le livre na pas été trouver" << endl;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Fonction permettant de retrouvrer la position ou se situe le livre dans le tableau
// (ne gere pas le cas de titre identique ou de réédition)
//entrer biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque et livrerechercher une chaine de caractere qui est le titre du livre rechercher
// retourne un entier qui est i qui est la position si i est positif ; si le livre a pas été trouver il sera retourner -1
//Sorti:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Cherchelivre(t_livre biblio[MAXLIVRE], int nblivre,string livrerechercher)
{
	bool livre_trouver=false;
	int i=0;
	while (i < nblivre && !livre_trouver) {
		if (biblio[i].titre==livrerechercher){
			livre_trouver = true;
		}
		else {
			i++;
		}
	}
	if (!livre_trouver)
	{
		i = -1;
	}
	return i;
	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Procedure permettant de suprimer un livre de la bibliotheque
//Entrer biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque
//Sorti:biblio[MAXLIVRE] de type t_livre une structure (titre ,nom d'auteur, annee de publication et nbre de pages) 
//	et nblivres le nombre de livre dans la bibliotheque
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Suppression(t_livre biblio[MAXLIVRE], int& nblivre) {
	string	livre_supp;
	int i = 0;
	int position;
	t_livre tempo;

	cout << "entrer le titre du livre a supp" << endl;
	cin >> livre_supp;
	position = Cherchelivre(biblio, nblivre, livre_supp);
	if (i>=0){
		for (i = position; i < nblivre - 1; i++) {
			biblio[i].titre = biblio[i + 1].titre;
			biblio[i].nom_aut = biblio[i + 1].nom_aut;
			biblio[i].annee = biblio[i + 1].annee;
			biblio[i].nb_pages = biblio[i + 1].nb_pages;
			nblivre = nblivre - 1;
		}
		}
	else {
		cout << "le livre n'a pas été trouver " << endl;
	}
	
}
