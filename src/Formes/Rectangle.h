#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include "Ligne.h"

using namespace std;

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle : public Forme{
protected:
    int longueur;
    int hauteur;

public:
    Rectangle(int myX, int myY, int myLongueur, int myHauteur, string myCouleur, int myTransparence, int planZ, int myFacteurEchelle);
    Rectangle();
    ~Rectangle();

    void Draw(CImage *img);
    int getXmax();
    int getYmax();
};

#endif /*RECTANGLE_H_*/
