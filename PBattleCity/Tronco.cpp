#include "Tronco.h"

Tronco::Tronco()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_Tronco;
	setDireccion(Direccion_Ninguna);
}


void Tronco::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}

