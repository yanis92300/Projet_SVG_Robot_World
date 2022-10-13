#ifndef MATRICE_H_INCLUDED
#define MATRICE_H_INCLUDED

#include "coords.h"
#include <array>

class Matrice
{
    public :
        /// Constructeur par d�faut, matrice identit�
        Matrice();

        /// Constructeur avec tous les coefficients
        Matrice(std::array<Coords, 2> mat);

        /// Fabrique de matrice transpos�e
        Matrice transpose() const;

        /// Fabrique de matrice de rotation, angle radians, sens trigo
        static Matrice rotation(double angle);

        /// Fabrique de matrice d'homoth�tie
        static Matrice homothetie(double rapport);

        /// Fabrique de matrice de symetrie
        static Matrice symetrie(double angle);

        /// Produit matrice vecteur (appliquer la matrice)
        friend Coords operator*(const Matrice& mat, const Coords& v);

        /// Produit matrice matrice : composition (au sens maths)
        friend Matrice operator*(const Matrice& a, const Matrice& b);

    private :
        /// Les coefficients de la matrice !
        std::array<Coords, 2> m_mat;
};

#endif // MATRICE_H_INCLUDED
