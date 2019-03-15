#include "employe.h"

Employe::Employe()
{
	nom = "";
	prenom = "";
	ville = "";
	nas = "";
	numeroEmploye = "";
}
Employe::Employe(const Employe& inEmploye)
{
	nom = inEmploye.nom;
	prenom = inEmploye.prenom;
	ville = inEmploye.ville;
	nas = inEmploye.nas;
	numeroEmploye = inEmploye.numeroEmploye;
}
Employe::~Employe()
{
}
string Employe::getNom() const
{
	return nom;
}
string Employe::getPrenom() const
{
	return prenom;
}
string Employe::getVille() const
{
	return ville;
}
string Employe::getNas() const
{
	return nas;
}
string Employe::getNumero() const
{
	return numeroEmploye;
}
void Employe::setNom(string inNom)
{
	nom = inNom;
}
void Employe::setPrenom(string inPrenom)
{
	prenom = inPrenom;
}
void Employe::setVille(string inVille)
{
	ville = inVille;
}
void Employe::setNas(string inNas)
{
  nas = inNas;
}

void Employe::setNumero(string inNumero)
{
  numeroEmploye = inNumero;
}
