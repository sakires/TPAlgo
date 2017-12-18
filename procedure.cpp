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
		cout << "vous avez " << bib.nblivre << " livre" << endl;
		saisirControleEntierBorne("1-afficher l'enssemble des livre\n 2-ajouter un nouveau livre\n 3-supprimer un livre\n 4-rechercher un livre\n 5-Ensemble\n 6-quitter\n ", 0, 6, choix);
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
		case 5:
			Ensemble (bib.bibli, bib.nblivre);
			break;
		default:cout << "bye" << endl;
			reco = false;

		}
	} while (reco);
}