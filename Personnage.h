#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <iostream>
#include <string>
#include "Arme.h"
class Personnage
{
    public:
    Personnage(std::string nom, std::string nomArme, int nbDegats);
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;

    private:
    std::string m_nom;
    int m_vie;
    int m_mana;
    Arme m_arme;
};
#endif
