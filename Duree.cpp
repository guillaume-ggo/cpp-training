#include "Duree.h"
#include <iostream>
using namespace std;
Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
  if (m_minutes > 59)
  {
    m_heures+=minutes/60;
    m_minutes=minutes%60;
  }
  if (secondes > 59)
  {
    m_minutes+=secondes/60;
    m_secondes=secondes%60;
  }
}
bool Duree::estEgal(Duree const& b) const
{
  return (m_heures==b.m_heures && m_minutes==b.m_minutes && m_secondes==b.m_secondes);
}
bool Duree::estPlusPetitQue(Duree const& b) const
{
  if(m_heures<b.m_heures)
    return true;
  else if (m_heures==b.m_heures && m_minutes<<b.m_minutes)
    return true;
  else if (m_heures==b.m_heures && m_minutes==b.m_minutes && m_secondes<b.m_secondes)
    return true;
  else
    return false;
}
void Duree::operator+=(const Duree &a)
{
  m_secondes+=a.m_secondes;
  m_minutes+=m_secondes/60;
  m_secondes%=60;
  m_minutes+=a.m_minutes;
  m_heures+=m_minutes/60;
  m_minutes%=60;
  m_heures+=a.m_heures;
}
void Duree::operator-=(const Duree &a)
{
  m_secondes-=a.m_secondes;
  if(m_secondes<0)
  {
    m_secondes+=60;
    m_minutes--;
  }
  m_minutes-=m_secondes/60;
  m_secondes%=60;
  m_minutes-=a.m_minutes;
  if(m_minutes<0)
  {
    m_minutes+=60;
    m_heures--;
  }
  m_heures-=m_minutes/60;
  m_minutes%=60;
  m_heures-=a.m_heures;
}
bool operator==(Duree const& a, Duree const& b)
{
  return a.estEgal(b);
}
bool operator!=(Duree const& a, Duree const& b)
{
  return !(a==b);
}
bool operator<(Duree const& a, Duree const& b)
{
  return a.estPlusPetitQue(b);
}
bool operator>(Duree const& a, Duree const& b)
{
  return !(a==b && a<b);
}
bool operator<=(Duree const& a, Duree const& b)
{
  return a<b || a==b;
}
bool operator>=(Duree const& a, Duree const& b)
{
  return a>b || a==b;
}
ostream &operator<<(ostream &flux, Duree const& duree)
{
  duree.afficher(flux);
  return flux;
}
void Duree::afficher(ostream &flux) const
{
  flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}
Duree operator+(Duree const& a, Duree const& b)
{
  Duree copie(a);
  copie+=b;
  return copie;
}
Duree operator-(Duree const& a, Duree const& b)
{
  Duree copie(a);
  copie-=b;
  return copie;
}

int main()
{
  Duree d1(0, 28, 10), d2(0, 28, 10), d3(0, 120, 184);
  if (d1!=d2)
  {
    cout << "d1!=d2" << endl;
  }
  else
    cout << "d1==d2" << endl;
  if (d1<d3)
    cout << "d1<d3" << endl;
  if (d3 > d2)
    cout << "d3=" << d3 << ">" << "d2=" << d2 << endl;
  Duree d4(4, 32, 50);
  cout << "d1+d4=" << (d1+d4) << endl;
  Duree d5(3, 33, 51);
  cout << "d4-d5=" << (d4-d5) << endl;
  return 0;
}
