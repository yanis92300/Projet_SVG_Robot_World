#include <iostream>
#include <fstream>
#include "elements/Base.h"

using namespace std;

void lireFichier(Base *objet,std::string ficName)
{
    Base *tmpObj;

    // essaye d'ouvrir le fichier
    std::ifstream file(ficName);
    if( !file )
    {
        cerr << "Erreur d'ouverture du fichier : " << ficName << std::endl;
        return;
    }
    std::string line;

    // lit une ligne de fichier
    while( getline(file, line ))
    {
        // est-ce un indicateur de niveau [/] ou un nouvel objet ?
        if( line.compare("[")==0 )
        {
            // on créé un enfant
        }
        else if ( line.compare("]")==0 )
        {
            // on retourne au parent
        }
        else
        {
            // c'est un nouvel objet

        }
    }
}

void ecrireSVG(Base *objet,std::string ficName)
{

}

int main()
{
    Base *objets;

    cout << "Les robots fous..." << endl;

    // Lecture du fichier des objets
    lireFichier(objets,"simplebot.rom");

    // générer le svg
    ecrireSVG(objets,"output.svg");

    return 0;
}

