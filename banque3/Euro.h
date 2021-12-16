#pragma once
#include "Devise.h"
namespace Banque
{
    class Euro :
        public Devise
    {
    public:
        Euro(double v);
        Devise* convert(char type) override;
        void afficher() const override;
       const char type_devise() override;
    };
}
