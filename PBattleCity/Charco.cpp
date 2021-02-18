#include "Charco.h"

Charco::Charco()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_Charco;
	setDireccion(Direccion_Ninguna);
	setInvulnerable(true);
	
}

void Charco::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}
