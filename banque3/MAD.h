#pragma once
#include "Devise.h"
namespace Banque {

	class MAD : public Devise
	{

	public:
		MAD(double v);
		 Devise* convert(char type) override;
		virtual void afficher() const;
		const char type_devise() override;

	};

}