#ifndef donneesH
#define donneesH

#include "employe.h"
#include "tache.h"

const int maxEmployes = 50;
const int maxTaches = 100;

class Donnees
{
private:
	Employe* lesEmployes[maxEmployes];
	Tache* lesTaches[maxTaches];
	void DetruireEmployes();
	void DetruireTaches();
public:
	Donnees();
	~Donnees();
	bool AjouterEmploye(Employe); 
	bool AjouterTache(Tache);
	Employe ChercherEmployeSelonNumero(string);
	Tache ChercherTacheParIdentifiant(string);
};

#endif

