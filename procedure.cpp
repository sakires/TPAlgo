#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "outils.h"
#include <iomanip>
using namespace std;

/*void find()
{

	int a = 0;
	int n;
	int score;
	int s;
	score = 0;
	saisirControleEntierBorne("Choisis le maximum du jeu : ", 0, MAXINT, n);
	a = Alea();
	do {
		saisirControleEntierBorne("Choisis une valeur : ", MININT, n, s);
		if (s<0) {
			cout << "jeu triste" << endl;
		}
		if (a>s && s>0) {
			cout << "C'est plus" << endl;
			score = score + 1;
		}
		if (a<s) {
			cout << "C'est moins" << endl;
			score = score + 1;
		}
		if (s == a) {
			cout << "Tu as gagne,en : " << score << " essais" << endl;
			cout << "aller on recommence " << endl;
			saisirControleEntierBorne("Choisis le maximum du jeu : ", 0, MAXINT, n);
			a = Alea();
		}

	} while (s>0);
	// Fin du programme
}

#define parfait 10000
void Parfait()
{

	int n, somme_diviseur, diviseur;
	for (n = 1; n <= parfait; n++)
	{
		somme_diviseur = 0;
		for (diviseur = 1; diviseur <= n / 2; diviseur++)
			if (n%diviseur == 0)
				somme_diviseur += diviseur;
		if (somme_diviseur == n)
			cout << "Nombre parfait : " << n << endl;
	}
	system("pause");
}
void postDate() {
	int j;
	int m;
	int a;
	int j2 = 1;
	int m2 = 1;
	int a2 = 2000;
	int i = 6;
	bool ok = true;

	do {
		cout << "Saisir date" << endl;
		saisirControleEntierBorne("Entrer le jour\n", 0, 31, j);
		saisirControleEntierBorne("Entrer le mois\n", 0, 12, m);
		saisirControleEntierBorne("Entrer une date postrieur a 2000\n", 2000, 2400, a);

	} while (!date(j, m, a));
	while (j != j2 && m != m2 && a != a2)
	{
		//	lendemain(j2, m2, a2);
		i = i + 1;
		if (i == 7) {
			i = 0;
		}
	}
	switch (i)
	{
	case 0:cout << "le jour est lundi" << endl;
		break;
	case 1:cout << "le jour est mardi" << endl;
		break;
	case 2:cout << "le jour est mercredi" << endl;
		break;
	case 3:cout << "le jour est jeudi" << endl;
		break;
	case 4:cout << "le jour est vendredi" << endl;
		break;
	case 5:cout << "le jour est samedi" << endl;
		break;
	case 6:cout << "le jour est dimanche" << endl;
		break;
	default:cout << "Erreur date :/" << endl;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Programme ayant pour but de transposer les lignes et les colonnes de la matrice.
//Entrée : Demande la procédure de remplissage du tableau et du ControleEntierBornes.
//Sortie : Retour des valeurs.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void matriceTransposition() {
	int boucle_i;
	int boucle_j;
	int tab[TAILLEMATRICE][TAILLEMATRICE], n; // Nous avons eu un soucis avec les entrées sorties, nous avons mis le tableau ici mais ça n'a aucune incidence.
	int tabTemp[TAILLEMATRICE][TAILLEMATRICE];
	saisirControleEntierBorne("Entrer la taille du tableau, lignes et collonnes\n", 0, TAILLEMATRICE, n);

	TableauCarre(tab, n);
	cout << "Voila la matrice A" << endl;
	for (boucle_i = 0; boucle_i < n; boucle_i++) {
		for (boucle_j = 0; boucle_j < n; boucle_j++) {
			cout << setw(6) << tab[boucle_i][boucle_j];
			//Le setw est déclaré par iomanip, il permet d'avoir des espaces égaux entre les nombres, peut importe leur tailles.
		}
		cout << endl; // Saut de ligne
	}
	for (boucle_i = 0; boucle_i < n; boucle_i++) {
		for (boucle_j = 0; boucle_j < n; boucle_j++) {
			tabTemp[boucle_j][boucle_i] = tab[boucle_i][boucle_j];
		}
		cout << endl; // Saut de ligne
	}
	cout << "Voila la matrice B= A^t" << endl;
	for (boucle_i = 0; boucle_i < n; boucle_i++) {
		for (boucle_j = 0; boucle_j < n; boucle_j++) {
			cout << setw(6) << tabTemp[boucle_i][boucle_j];
		}
		cout << endl; // Saut de ligne
	}

	system("PAUSE");
}
void ASCII() {
	int motsSaisie;
	int choix;

	do {
		saisirControleEntierBorne("\n1 -Afficher les voyelles \n2 -Verifier si palindrome \n3 -Tout mettre en majuscules\n4 -Quitter", 0, 4, choix);
		string motsSaisie;

		cout << "Choix du mot : " << endl;
		cin >> motsSaisie;

		switch (choix)
		{
		case 1:
			Mots(motsSaisie);
			break;
		case 2:
			Palindrome(motsSaisie);
			break;
		case 3:
			Majuscule(motsSaisie);
			break;
		default:
			cout << "Quitter" << endl;
			choix = 5;
			break;
		}
	} while (choix != 4);
	system("pause");
}
void ASCIITableau() {
	int motsSaisie;
	int choix;
	do {
		saisirControleEntierBorne("\n1 -Afficher les voyelles par nom \n2 -Afficher uniquement les noms qui sont des palindromes \n3 -Mettre tous les noms en  majuscules\n4 -Quitter", 0, 4, choix);
		string motsSaisie;
		cout << "Saisir un nom : " << endl;
		cin >> motsSaisie;

		switch (choix)
		{
		case 1:
			MotsTableau(motsSaisie);
			break;
		case 2:
			PalindromeTableau(motsSaisie);
			break;
		case 3:
			MajusculeTableau(motsSaisie);
			break;
		default:
			cout << "Quitter" << endl;
			choix = 5;
			break;
		}
	} while (choix != 4);
	system("pause");
}
void tabAlea() {
	int N = 0;
	int choix;
	int tab[TAILLEMATRICE];
	do {
		saisirControleEntierBorne("\n1 -Mettre en place le tableau \n2 -Afficher le tableau \n3 -Trier le tableau (a re-afficher ensuite) \n4 -Quitter ", 0, 4, choix);
		switch (choix)
		{
		case 1:
			saisirControleEntierBorne("Choisir le nombre de cases : ", 0, 100, N);
			TableauAuto(N, tab);
			break;
		case 2:
			Afftab(tab, N);
			break;
		case 3:
			Tribulles(tab, N);
			break;
		default:
			cout << "Quitter" << endl;
			break;
		}
	} while (choix != 4);
	system("pause");
}

//////////////////////////////////////////////////////exercice 2 /////////////////////////////////////////////////////////
*/
void bibliotheque2() {
	int choix;
	bool reco;
	t_biblio bib;
	int nblivre;
	string titrerech;

	reco = true;
	nblivre = 0;
	do {
		cout << "vous avez " << nblivre << " livre" << endl;
		saisirControleEntierBorne("1-afficher l'enssemble des livre\n 2-ajouter un nouveau livre\n 3-supprimer un livre\n 4-rechercher un livre\n 5-quitter ", 0, 5, choix);
		switch (choix) {
		case 1:Affichagebibli(bib.bibli, bib.nblivre);
			break;
		case 2: Ajout(bib.bibli, bib.nblivre);
			break;
		case 3:Suppression(bib.bibli, bib.nblivre);
			break;
		case 4:
			recherche(bib.bibli, bib.nblivre);
			break;
		default:cout << "bye" << endl;
			reco = false;

		}
	} while (reco);
}