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
			Affichagebibli(bib);
			break;
		case 2:
			Ajout(bib, liste_aut);
			break;
		case 3:
			Suppression(bib);
			break;
		case 4:
			recherche(bib);
			break;
		case 5:
			Ensemble(bib);
			break;
		default:cout << "Bonne continuation !" << endl;
			reco = false;

		}
	} while (reco);
}