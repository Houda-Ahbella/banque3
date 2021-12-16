#include "Dollar.h"
#include "MAD.h"
#include "Euro.h"
#include  <iostream>
using namespace std;
using namespace Banque;
Devise::Devise(double val)
{
	this->valeur = val;
}

Banque::Devise::Devise(Devise& D)
{
	this->valeur = D.valeur;
}

void Banque::Devise::operator+(const Devise& M)
{
	/*Devise* add_devise = NULL;
	if(this->type_devise()=='M') add_devise = new MAD(this->valeur + M.valeur);
	if (this->type_devise() == 'D') add_devise = new Dollar(this->valeur + M.valeur);
	if (this->type_devise() == 'E') add_devise = new Euro(this->valeur + M.valeur);
	return add_devise;*/
	this->valeur=this->valeur + M.valeur;
}

void Banque::Devise::operator-(const Devise& M)
{
	//Devise* add_devise = NULL;
	//if (this->type_devise() == 'M') add_devise = new MAD(this->valeur - M.valeur);
	//if (this->type_devise() == 'D') add_devise = new Dollar(this->valeur - M.valeur);
	//if (this->type_devise() == 'E') add_devise = new Euro(this->valeur - M.valeur);
	//return add_devise;
	this->valeur = this->valeur - M.valeur;
}

Devise* Banque::Devise::operator*( Devise& M)
{

	Devise* add_devise = NULL;
	char type = M.type_devise();
	if(type == 'M') add_devise = new MAD(this->valeur * M.valeur);
	if (type == 'D') add_devise = new Dollar(this->valeur * M.valeur);
	if (type== 'E') add_devise = new Euro(this->valeur * M.valeur);
	return add_devise;
}




bool Devise::operator<=(const Devise& M) const
{
	return this->valeur <= M.valeur;
}

bool Devise::operator>=(const Devise& M) const
{
	return this->valeur >= M.valeur;
}



void Devise::afficher() const
{
	cout << "le solde est : " << this->valeur;
}

