#include <string>
using namespace std;

#ifndef employeH
#define employeH

class Employe
{
  private:
	string nom;
	string prenom;
	string ville;
	string nas;	
    string numeroEmploye;	
  public:
	 Employe();
	 Employe(const Employe&);
	 ~Employe();
	 string getNom() const;
	 string getPrenom() const;
	 string getVille() const;
	 string getNas() const;
	string getNumero() const;
	void setNom(string);
	void setPrenom(string);
	void setVille(string);
    void setNas(string);
    void setNumero(string);
};
#endif

