#include "Arbusto.h"

Arbusto::Arbusto()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_Arbusto;
	setDireccion(Direccion_Ninguna);
}


void Arbusto::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}
