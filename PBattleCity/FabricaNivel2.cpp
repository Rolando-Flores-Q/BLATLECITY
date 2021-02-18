#include "Nivel.h"
#include "FabricaNivel2.h"
#include "FabricaNiveles.h"
#include "Arbusto.h"
#include "Tronco.h"
#include "Charco.h"
#include "Roca.h"
#include "Base.h"
#include "ParedMetal.h"
#include "ParedLadrillo.h"
#include "Pantano.h"
#include "TanqueEnemigo2.h"
#include "GameManager.h"
#include "GeneradorEnemigo.h"
#include "AguilaAdapter.h"


FabricaNivel2::FabricaNivel2(GameManager* _gameManager):FabricaNiveles(_gameManager)
{
	setMapaNivel(mapaNivel2);
}

Actor* FabricaNivel2::crearInstanciaTanqueEnemigo(float _x, float _y)
{
	// Encuentra puntero libre y crea objeto
	Actor* actor = new TanqueEnemigo2();
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return NULL;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

Actor* FabricaNivel2::crearInstanciaTronco(float _x, float _y)
{
	Actor* actor = new Tronco();
	actor->setAvatar(avatarTroncoN3);
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

Actor* FabricaNivel2::crearInstanciaCharco(float _x, float _y)
{
	Actor* actor = new Charco();
	actor->setAvatar(avatarCharcoN3);
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

Actor* FabricaNivel2::crearInstanciaAguila(float _x, float _y)
{
	Actor* actor = new AguilaAdapter();
	actor->setAvatar(avatarAguila);
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

Actor* FabricaNivel2::crearInstanciaRoca(float _x, float _y)
{
//	Actor* actor = new Roca();
//	actor->setAvatar(avatarPantanoN1);
//	actor->setX(_x);
//	actor->setY(_y);
//	actor->setGameManager(getGameManager());
//	if (getGameManager()->moverActorA(actor, _x, _y) == false)
//	{
//		delete actor;
//		return nullptr;
//	}
//
//	getGameManager()->lActores.push_back(actor);
//
//	return actor;
	return nullptr;
}

Actor* FabricaNivel2::crearInstanciaBase(float _x, float _y)
{
	Actor* actor = new Base();
	actor->setAvatar(avatarPantanoN1);
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}


Actor* FabricaNivel2::crearInstanciaObstaculo(float _x, float _y) {
	Actor* actor = new Pantano();
	actor->setAvatar(avatarPantanoN2);
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

void FabricaNivel2::crearInstanciasMapaNivel()
{

	for (int f = 0; f < getMapaNivel().size(); f++) {
		for (int c = 0; c < getMapaNivel()[f].size(); c++) {
			//cout << f << "--" << c << " + " << fabricaNiveles->getMapaNivel()[f][c] << endl;
			unsigned char celdaSimbolo = getMapaNivel()[f][c];
			switch (celdaSimbolo) {
			case celdaSimbolo_Arbusto: {
				Arbusto* arbusto = (Arbusto*)crearInstanciaArbusto(c, f);
							
				break;
			}
			case celdaSimbolo_ParedMetal: {
				ParedMetal* paredMetal = (ParedMetal*)crearInstanciaParedMetal(c, f);
				break;
			}
			case celdaSimbolo_ParedLadrillo: {
				ParedLadrillo* paredLadrillo = (ParedLadrillo*)crearInstanciaParedLadrillo(c, f);
				break;
			}
			case celdaSimbolo_Jugador1: {
				TanqueJugador* jugador1 = (TanqueJugador*)crearInstanciaTanqueJugador(c + 0.5, f + 0.5);
				jugador1->setTeclas(VK_LEFT, VK_RIGHT, VK_UP, VK_DOWN, VK_SPACE, VK_TAB);
				getGameManager()->setJugador1(jugador1);
				break;
			}
			case celdaSimbolo_GeneradorEnemigo: {
				//Aqui se crea un actor generador de enemigos.
				GeneradorEnemigo* enemigo = (GeneradorEnemigo*)crearInstanciaTanqueEnemigo(c, f);
				break;
			}
			case celdaSimbolo_Base: {
				Base* base = (Base*)crearInstanciaBase(c, f);
				break;
			}
			case celdaSimbolo_Tronco: {
				Tronco* tronco = (Tronco*)crearInstanciaTronco(c, f);
				//tronco->setFisico(true);
				//tronco->setInvulnerable(true);
				break;
			}
			case celdaSimbolo_Charco: {
				Charco* charco = (Charco*)crearInstanciaCharco(c, f);
				charco->setFisico(false);
				//charco->setInvulnerable();
				break;
			}
			case celdaSimbolo_Aguila: {
				AguilaAdapter* aguila = (AguilaAdapter*)crearInstanciaAguila(c, f);
				break;
			}
			}
		}
	}

}



Actor* FabricaNivel2::crearInstanciaArbusto(float _x, float _y) {
	Actor* actor = new Arbusto();
	actor->setAvatar(avatarArbustoN1);
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}


Actor* FabricaNivel2::crearInstanciaParedMetal(float _x, float _y) {
	Actor* actor = new ParedMetal();
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;

}

Actor* FabricaNivel2::crearInstanciaParedLadrillo(float _x, float _y) {
	Actor* actor = new ParedLadrillo();
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;

}

Actor* FabricaNivel2::crearInstanciaPantano(float _x, float _y)
  {
	Actor* actor = new Pantano();
	actor->setAvatar(avatarPantanoN2);
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

Actor* FabricaNivel2::crearInstanciaTanqueJugador(float _x, float _y)
{
	Actor* actor = new TanqueJugador();
	actor->setAvatar(avatarTanqueJugador1N2);
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}
