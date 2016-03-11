#include "Personnage.h"
using namespace std;
Personnage::Personnage(string nom, string nomArme, int nbDegats) : m_nom(""), m_vie(100), m_mana(100), m_arme(nomArme, nbDegats)
{
}
void Personnage::recevoirDegats(int nbDegats)
{
  m_vie -= nbDegats;
  if (m_vie < 0)
  {
    m_vie = 0;
  }
}
void Personnage::attaquer(Personnage &cible)
{
  cible.recevoirDegats(m_arme.getDegats());
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
  m_vie += quantitePotion;
  if (m_vie > 100)
  {
    m_vie = 100;
  }
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
  m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}
bool Personnage::estVivant() const
{
  return (m_vie > 0);
}
void Personnage::afficherEtat() const
{
    cout << m_nom << " dispose de " << m_vie << " points de vie et son arme est 1 " << m_arme.getNom() << " avec " << m_arme.getDegats() << endl;
}
