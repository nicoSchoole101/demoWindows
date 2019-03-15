#include "tache.h"

Tache::Tache()
{
	titre = "";
	dureePrevu = 0;
	uniteMesure = "";
	etatAvancement = "";
}
Tache::Tache(const Tache& inTache)
{
	identifiant = inTache.identifiant;
	titre = inTache.titre;
	dureePrevu = inTache.dureePrevu;
	uniteMesure = inTache.uniteMesure;
	etatAvancement = inTache.etatAvancement;
}
Tache::~Tache()
{
}
string Tache::getIdentifiant() const
{
	return identifiant;
}

string Tache::getTitre() const
{
	return titre;
}
int Tache::getDuree() const
{
	return dureePrevu;
}
string Tache::getUniteMesure() const
{
	return uniteMesure;
}
string Tache::getEtatAvancement() const
{
	return etatAvancement;
}
void Tache::setIdentifiant(string inId)
{
	identifiant = inId;
}
void Tache::setTitre(string inTitre)
{
	titre = inTitre;
}
void Tache::initialiserDuree(int inDuree, string inMesure)
{
	dureePrevu = inDuree;
	uniteMesure = inMesure;
}
void Tache::setEtat(string inEtat)
{
	//idealement il faudrait convertir inEtat en minuscule pour comparer
	if (inEtat =="non debute" || inEtat =="en cours" || inEtat =="termine")
	{
		etatAvancement = inEtat;
	}
}
