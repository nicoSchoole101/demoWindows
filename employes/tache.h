#include <string>
#include <iostream>
using namespace std;

#ifndef tacheH
#define tacheH

class Tache
{
  private:
   string identifiant;
	string titre;
	int dureePrevu;
	string uniteMesure;
	string etatAvancement;
  public:
	 Tache();
	 Tache(const Tache&);
	 ~Tache();
	 string getIdentifiant() const;
	 string getTitre() const;
	 int getDuree() const;
	 string getUniteMesure() const;
	 string getEtatAvancement() const;
	 void setIdentifiant(string);
	void setTitre(string);
	void initialiserDuree(int, string);
	void setEtat(string);
};
#endif

