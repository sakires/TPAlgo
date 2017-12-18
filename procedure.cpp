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

	reco = true;
	bib.nblivre = 0;
	do {
		cout << "Vous avez " << bib.nblivre << " livre(s)" << endl;
		saisirControleEntierBorne("1-Afficher l'ensemble des livres\n 2-Ajouter un nouveau livre\n 3-Supprimer un livre\n 4-Rechercher un livre\n 5-Ensemble\n 6-Quitter\n ", 0, 6, choix);
		switch (choix) {
		case 1:
			Affichagebibli(bib);
			break;
		case 2: 
			Ajout(bib);
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
		default:cout << "bye" << endl;
			reco = false;

		}
	} while (reco);
}