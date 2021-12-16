#include "Dollar.h"
#include "Euro.h"
#include "MAD.h"
#include  <iostream>

using namespace std;
using namespace Banque;

Banque::Dollar::Dollar(double v) :Devise(v)
{
}

Devise* Banque::Dollar::convert(char type)
{
	Devise* Conv =  this;
	if (type == 'M')
	{
		MAD* Dol = new MAD(9.26);
		Conv = this->operator*(*Dol);
	}
	if (type == 'E')
	{
		Euro* Dol = new Euro(0.88);
		Conv = this->operator*(*Dol);
	}
	return Conv;
}

void Banque::Dollar::afficher() const
{
	this->Devise::afficher();
	std::cout << " Dollars" << endl;
}

const char Banque::Dollar::type_devise()
{
	return 'D';
}


