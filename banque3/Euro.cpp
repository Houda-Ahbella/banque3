#include "Euro.h"
#include "MAD.h"
#include "Dollar.h"
#include  <iostream>
using namespace std;
using namespace Banque;

Banque::Euro::Euro(double v) :Devise(v)
{
}

Devise* Banque::Euro::convert(char type)
{
	Devise* Conv =  this;
	if (type == 'M')
	{
		MAD* Dol = new MAD(10.47);
		Conv = this->operator*(*Dol);
	}
	if (type == 'D')
	{
		Dollar* Dol = new Dollar(1.13);
		Conv = this->operator*(*Dol);
	}
	return Conv;
}

void Banque::Euro::afficher() const
{
	this->Devise::afficher();
	std::cout << "Euro" << endl;
}

const char Banque::Euro::type_devise()
{
	return 'E';
}
