#include "MAD.h"
#include "Euro.h"
#include "Dollar.h"
#include  <iostream>
using namespace std;
using namespace Banque;
Banque::MAD::MAD(double v) :Devise(v)
{
}

Devise* Banque::MAD::convert(char type)
{
	Devise* Conv = this;
	if (type == 'D')
	{
		Dollar* Dol = new Dollar(0.11);
		Conv = this->operator*(*Dol);
	}
	if (type == 'E')
	{
		Euro* Eur = new Euro(0.096);
		Conv = this->operator*(*Eur);
	}
	return Conv;


}

void Banque::MAD::afficher() const
{
	this->Devise::afficher();
	std::cout << " MAD" << endl;
}

const char Banque::MAD::type_devise()
{
	return 'M';
}
