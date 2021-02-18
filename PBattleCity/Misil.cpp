#include "Misil.h"

Misil::Misil() {
	setTipoActor(TipoActor_Bala);
	setEnergia(energiaEnemigo);
	velocidad = velocidadBala;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarBala);
	setFisico(true);
}

void Misil::actualizar(float _dt) {
	//Municion::actualizar(_dt);
	Actor::actualizar(_dt);
}

void Misil::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	//Municion::renderizar(_sistemaRenderizacion);
	Actor::renderizar(_sistemaRenderizacion);
}

void Misil::intersectar(Actor* _actor) {
	Municion::intersectar(_actor);
}