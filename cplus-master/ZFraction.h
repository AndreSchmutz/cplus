#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <iostream>

class ZFraction
{
public:
ZFraction();
ZFraction(int num);
ZFraction(int num, int den);
void afficheFraction(std::ostream& flux) const;

~ZFraction();




private:

bool estEgal(ZFraction const& b) const;

int m_numerateur, m_denominateur;


};

ZFraction copieFraction(ZFraction const& a);
ZFraction reduitFraction(ZFraction const& a);
ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator* (ZFraction const& a, ZFraction const& b);
bool operator== (ZFraction const& a, ZFraction const& b);
bool operator<(ZFraction const& a, ZFraction const& b);
bool operator> (ZFraction const& a, ZFraction const& b);

//Opérateur d'injection dans un flux
std::ostream& operator<<(std::ostream& flux, ZFraction const& fraction);

#endif
