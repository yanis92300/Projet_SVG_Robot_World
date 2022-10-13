#ifndef BASE_H
#define BASE_H
#include "../geometrie/coords.h"
#include <string>
#include <vector>

const int pos_tl = 1;
const int pos_tc = 2;
const int pos_tr = 3;
const int pos_ml = 4;
const int pos_mc = 5;
const int pos_mr = 6;
const int pos_bl = 7;
const int pos_bc = 8;
const int pos_br = 9;

class Base
{
    public:
        Coords m_tl; // top left
        Coords m_br; // back right

        std::string m_fillColor; // couleur du remplissage
        std::string m_borderColor; // couleur de la bordure

        int m_refpos;   //point accroche père
        int m_basepos;  // point d'accroche fiston
        int m_refposx;  // pos initiale axe en x
        int m_refposy;  // pos initiale axe en y

        //Caractéristique des axes de translation

        int m_axeType; // 0 -> axe des x, 1 -> axe des y descendant, 2 -> rotation trigo
        int m_axeMin; // pos min de déplacement sur axe
        int m_axeMax; // pos max de déplacement sur axe
        int m_axePos; // pos actuelle

        std::string m_name; // id objet

        std::vector <Base*> v_enfants; // liste des enfants
        Base *p_parent; // pointe vers son papa

        Base();
        Base (std::string name, std::string fillColor, std::string borderColor, Coords tl, Coords br, int refpos, int basepos, Base *papa = nullptr);
        virtual ~Base();

    protected:

    private:
};

#endif // BASE_H
