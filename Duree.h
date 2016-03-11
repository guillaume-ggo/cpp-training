#ifndef DEF_DUREE
#define DEF_DUREE
#include <iostream>
class Duree
{
  public:
  Duree(int heures = 0, int minutes = 0, int secondes = 0);
  bool estEgal(Duree const& b) const;
  bool estPlusPetitQue(Duree const& b) const;
  void afficher(std::ostream &flux) const;
  private:
  int m_heures;
  int m_minutes;
  int m_secondes;
};
#endif
