#include "RectangleS.h"

RectangleS::RectangleS(int myX, int myY, int myLongueur, int myHauteur, string myCouleur, int myTransparence, int myplanZ, int myFacteurEchelle){
    X = myX;
    Y = myY;
    couleur = myCouleur;
    transparence = myTransparence;
    longueur = myLongueur;
    hauteur = myHauteur;
    planZ = myplanZ;
    FacteurEchelle = myFacteurEchelle;    
}

RectangleS::RectangleS(){
    X = 0;
    Y = 0;
    couleur = "blanc";
    transparence = 0;
    longueur = 1;
    hauteur = 1;
    planZ = 1;
    FacteurEchelle = 1;
}

RectangleS::~RectangleS(){
    
}

void RectangleS::Draw(CImage *img){
    for(int i=0; i<hauteur; i++){
        Ligne L(X,Y+i,X+longueur-1,Y+i,couleur,transparence,planZ,FacteurEchelle);
        L.Draw(img);
    }
}

int RectangleS::getXmax(){
    return (X + longueur);
}

int RectangleS::getYmax(){
    return (Y + hauteur);
}
