#pragma once
#include "Devise.h"

namespace Banque
{
    class Dollar :
        public Devise
    {
    public:
        Dollar(double v);
        Devise* convert(char type) override;
        void afficher() const override;
        const char type_devise() override;
        //virtual Devise* operator=(Devise* M) ;
    private:

    };

}