#ifndef DEF_ARME
#define DEF_ARME
#include <string>
class Arme {
    public:
    std::string getNom() const;
    int getDegats() const;
    void changer(std::string nom, int nbDegats);
    Arme();
    ~Arme();
    Arme(std::string nom, int nbDegats);
    private:
    int m_degats;
    std::string m_nom;
};
#endif
