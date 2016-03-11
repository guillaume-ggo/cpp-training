#include "Arme.h"
using namespace std;
Arme::Arme(string nom, int nbDegats) : m_nom(nom), m_degats(nbDegats)
{
}
Arme::~Arme()
{
}
Arme::Arme()
{
}
string Arme::getNom() const
{
  return m_nom;
}
void Arme::changer(string nom, int nbDegats)
{
    m_nom = nom;
    m_degats = nbDegats;
}
int Arme::getDegats() const
{
    return m_degats;
}

