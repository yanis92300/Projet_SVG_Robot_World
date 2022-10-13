#include "Base.h"

Base::Base()
{
    //ctor
}

Base::Base(std::string name, std::string fillColor, std::string borderColor, Coords tl, Coords br, int refpos, int basepos, Base *papa)
{
    m_name = name;
    m_fillColor = fillColor;
    m_borderColor = borderColor;
    m_tl = tl;
    m_br = br;
    m_refpos = refpos;
    m_basepos = basepos;
    p_parent = papa;
}

Base::~Base()
{
    // ménage
    for (size_t i=0; i<v_enfants.size(); ++i)
        delete v_enfants[i];
}
