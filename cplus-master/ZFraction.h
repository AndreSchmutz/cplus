#ifndef DEF_FRACTION
#define DEF_FRACTION

##include <iostream>

class ZFraction
{
public:
ZFraction();
ZFraction(int num, den);
void afficheFraction() const;



~ZFraction();




private:

int m_numerateur, m_denominateur;


};



#endif
