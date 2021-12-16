// banque3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Dollar.h"
#include"Devise.h"
#include "MAD.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"
#include "ComptePayant.h"
using namespace Banque;
int main()
{
    //    Compte Courant
   MAD D(1000);
   MAD Decov(100);
   Dollar Cr1(610);
   Euro Er1(10);
   Client *Client1= new Client("user1","user1","adress1");
   CompteCourant C(Client1, &D, &Decov);
   C.debiter(&Cr1);
  // C.consulter();
   C.crediter(&Er1);
   C.consulter();
   Client1->addCompte(&C);

   //    Compte Epargne

   MAD A(1000);
   Euro Er2(10);
   CompteEpargne E(Client1,&A,50);
   E.calculInteret();
  // E.consulter();
   E.debiter(&Er2);
   E.consulter();
   Client1->addCompte(&E);

   // Compte Payant
   MAD B(3000);
   Dollar AA1(100);
   Euro AA2(10);
   ComptePayant Payant1(Client1, &B);
   Client1->addCompte(&Payant1);
   Payant1.debiter(&AA1);
   Payant1.crediter(&AA2);
   Payant1.consulter();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
