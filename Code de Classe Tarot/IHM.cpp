#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "Ihm.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#using <System.dll>

using namespace std;


IHM::IHM()
{

}

IHM::~IHM()
{
}

void IHM::SaisirJoueurs()
{
	string joueur1;
	string joueur2;
	string joueur3;
	string joueur4;

	cout << "Joueur 1" << endl << endl;
	cin >> joueur1;
	cout << endl;

	cout << "Joueur 2" << endl << endl;
	cin >> joueur2;
	cout << endl;

	cout << "Joueur 3" << endl << endl;
	cin >> joueur3;
	cout << endl;

	cout << "Joueur 4" << endl << endl;
	cin >> joueur4;
	cout << endl;
	cout << endl;

	lesJoueurs[0] = new CJoueur(joueur1, 0);
	lesJoueurs[1] = new CJoueur(joueur2, 0);
	lesJoueurs[2] = new CJoueur(joueur3, 0);
	lesJoueurs[3] = new CJoueur(joueur4, 0);
}

