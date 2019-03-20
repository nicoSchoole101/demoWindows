#include "donnees.h"

Donnees::Donnees()
{
	for (int cpt = 0; cpt < maxEmployes; cpt++)
	{
		lesEmployes[cpt] = NULL;
	}
	for (int cpt = 0; cpt < maxTaches; cpt++)
	{
		lesTaches[cpt] = NULL;
	}
}
Donnees::~Donnees()
{
	DetruireEmployes();
	DetruireTaches();
}
void Donnees::DetruireEmployes()
{
	for (int cpt = 0; cpt < maxEmployes; cpt++)
	{
		if (lesEmployes[cpt] != NULL)
		{
			delete lesEmployes[cpt];
			lesEmployes[cpt] = NULL;
		}
	}
}
void Donnees::DetruireTaches()
{
	for (int cpt = 0; cpt < maxTaches; cpt++)
	{
		if (lesTaches[cpt] != NULL)
		{
			delete lesTaches[cpt];
			lesTaches[cpt] = NULL;
		}
	}
}
bool Donnees::AjouterEmploye(Employe inEmploye) 
{
	bool ajoutReussi = false;

	return ajoutReussi;
}
bool Donnees::AjouterTache(Tache inTache) 
{
	int cpt = 0;
	bool ajoutReussi = false;
	while (cpt < maxTaches && ajoutReussi == false) {
		if (lesTaches[cpt] == NULL) {
			lesTaches[cpt] = new Tache(inTache);
			ajoutReussi = true;
		}
		cpt++;
	}
return ajoutReussi;
}
Employe Donnees::ChercherEmployeSelonNumero(string inNumero)
{
	Employe employeTrouve;

	return employeTrouve;
}
Tache Donnees::ChercherTacheParIdentifiant(string inId)
{
	int cpt = 0;
	bool trouvee = false;
	Tache tacheTrouve;
	while (cpt < maxTaches && trouvee == false) {
		
		if (lesTaches[cpt]!=NULL && lesTaches[cpt]->getIdentifiant() == inId) {
			tacheTrouve.setEtat(lesTaches[cpt]->getEtatAvancement());
			tacheTrouve.setTitre(lesTaches[cpt]->getTitre());
			tacheTrouve.setIdentifiant(inId);
			tacheTrouve.initialiserDuree(lesTaches[cpt]->getDuree(), lesTaches[cpt]->getUniteMesure());
			trouvee = true;
		}
		cpt++;
	}
	return tacheTrouve;
}
