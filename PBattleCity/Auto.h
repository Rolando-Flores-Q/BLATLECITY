#pragma once
#include "Actor.h"

//Aplicamos herencia donde la clase padre es actor
class Auto :public Actor {
public:

	//Constructor de la clase
	Auto(float _x, float _y, float _xVelocidad, float _yVelocidad, int _ancho, int _alto, int _energia);

	//Sobrecarga obligatorio de metodo de la clase padre 
	int dano() { return 0; }
};