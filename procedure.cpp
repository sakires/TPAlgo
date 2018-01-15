#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "outils.h"
#include <iomanip>
using namespace std;

void bibliotheque2() {
	int choix;
	bool reco;
	t_biblio bib;
	t_liste_aut liste_aut;
	reco = true;
	bib.nblivre = 0;
	liste_aut.nbAut = 0;
	do {
		cout << "Vous avez " << bib.nblivre << " livre(s)" << endl;
		saisirControleEntierBorne("1-Afficher l'ensemble des livres\n2-Ajouter un nouveau livre\n3-Supprimer un livre\n4-Rechercher un livre\n5-Ensemble\n6-Quitter\n ", 0, 6, choix);

		switch (choix) {
		case 1:
			Affichagebibli(bib, liste_aut);
			break;
		case 2:
			Ajout(bib, liste_aut);
			break;
		case 3:
			Suppression(bib);
			break;
		case 4:
			recherche(bib, liste_aut);
			break;
		case 5:
			Ensemble(bib);
			break;
		default:cout << "Bonne continuation !" << endl;
			reco = false;
		}
	} while (reco);
}
void gestionListe() {
	int choix;
	bool reco;
	int var = 0;
	t_liste_int li;
	reco = true;
	int mavar;

	do {
		saisirControleEntierBorne("1-Initialiser une nouvelle liste\n2-Ajouter un nouvel element en position donnee\n3-Supprimer un element en position donnee\n4-Rechercher la position d un element\n5-Afficher le contenu de la liste\n6-Vider completement la liste \n7-Trie a bulle \n8-Connaitre le nombre d element de la liste\n9-Quitter", 0, 9, choix);

		switch (choix) {
		case 1:
			initialisation(li);
			break;
		case 2:
			Ajoutliste(li);
			break;
		case 3:
			Suppressionliste(li);
			break;
		case 4:
			ProChercheListe(li);
			break;
		case 5:
			Affliste(li);
			break;
		case 6:
			Reset(li);
			break;
		case 7:
			Tribullesliste(li);
			break;
		case 8:
			mavar = Nbelementliste(li);
			cout << "Il y a " << mavar << " element(s)" << endl;
			break;
		default:
			cout << "Bonne continuation !" << endl;
			reco = false;
		}
	} while (reco);
}