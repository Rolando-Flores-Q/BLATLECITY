#pragma once
#include<vector>
#include<iostream>
#include<string>
using namespace std;

class Actor;
class GameManager;

class FabricaNivelesMethod
{
private:
		GameManager* gameManager;
		vector<string> mapaNivel;
public:
	FabricaNivelesMethod(GameManager* _gameManager);

	GameManager* getGameManager() { return gameManager; }
	vector<string> getMapaNivel() { return mapaNivel; }

	void setGameManager(GameManager* _gameManager) { gameManager = _gameManager; }
	void setMapaNivel(vector<string> _mapaNivel) { mapaNivel = _mapaNivel; }

	virtual void crearInstanciasMapaNivel() {};
	virtual void crearInstanciaArbusto(float _x, float _y) {};
	virtual void crearInstanciaParedMetal(float _x, float _y) {};
	virtual void crearInstanciaParedLadrillo(float _x, float _y) {};
	virtual void crearInstanciaPantano(float _x, float _y) {};
	virtual void crearInstanciaTanqueEnemigo(float _x, float _y) {};
	virtual void crearInstanciaAguila(float _x, float _y) {};
	virtual void crearInstanciaTanqueJugador(float _x, float _y) {};
	virtual void crearInstanciaObstaculo(float _x, float _y) {};
	
};

