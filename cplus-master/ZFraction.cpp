#include "ZFraction.h"
using namespace std;

ZFraction::ZFraction() :m_numerateur(0),
m_denominateur(1)
{
}
ZFraction::ZFraction(int num) :m_numerateur(num),
m_denominateur(1)
{
}
ZFraction::ZFraction(int num, int den) : m_numerateur(num),
m_denominateur(den)
{
}
ZFraction::~ZFraction()
{
}

void ZFraction::afficheFraction(/* arguments */) const {
  /* code */
cout << m_numerateur << "/" << m_denominateur;
}

bool ZFraction::estEgal(const& b) const {
  return (m_numerateur==b.m_numerateur && m_denominateur==b.m_denominateur);
}

ZFraction ZFraction::copieFraction(ZFraction const& a) {
  ZFraction copie(a.m_numerateur, a.m_denominateur);
  return copie;
}


ZFraction ZFraction::reduitFraction(ZFraction const& a) {


}

ZFraction operator+ (ZFraction const& a, ZFraction const& b) {
  ZFraction somme;
  somme.m_numerateur = a.m_numerateur+b.m_numerateur;
  somme.m_denominateur=a.m_denominateur+b.m_numerateur;

  return somme;
}


ZFraction ZFraction::operator* (ZFraction const& a, ZFraction const& b) {
  ZFraction produit;
  produit.m_numerateur = a.m_numerateur*b.m_numerateur;
  produit.m_denominateur=a.m_denominateur*b.m_numerateur;

  return produit;
}
bool operator< (ZFraction const& a, ZFraction const& b)
{


}
bool operator> (ZFraction const& a, ZFraction const& b)
{

  
}

//Opérateur d'injection dans un flux
std::ostream& operator<<(std::ostream& flux, ZFraction const& fraction)
{


}

bool ZFraction::operator== (ZFraction const& a, ZFraction const& b) {


}
