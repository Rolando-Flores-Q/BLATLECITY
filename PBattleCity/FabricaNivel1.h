#pragma once
#include "FabricaNiveles.h"

class GameManager;

class FabricaNivel1 :
	public FabricaNiveles
{
public:
	FabricaNivel1(GameManager* _gameManager);
	void crearInstanciasMapaNivel();
	Actor* crearInstanciaArbusto(float _x, float _y);
	Actor* crearInstanciaParedMetal(float _x, float _y);
	Actor* crearInstanciaParedLadrillo(float _x, float _y);
	Actor* crearInstanciaPantano(float _x, float _y);
	Actor* crearInstanciaTronco(float _x, float _y);
	Actor* crearInstanciaCharco(float _x, float _y);
	Actor* crearInstanciaRoca(float _x, float _y);
	Actor* crearInstanciaBase(float _x, float _y);
	Actor* crearInstanciaAguila(float _x, float _y);
	Actor* crearInstanciaTanqueJugador(float _x, float _y);
	Actor* crearInstanciaTanqueEnemigo(float _x, float _y);
	Actor* crearInstanciaObstaculo(float _x, float _y);
};

