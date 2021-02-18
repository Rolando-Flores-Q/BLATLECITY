#include "Roca.h"


Roca::Roca()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_Roca;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarRocaN2);
}

void Roca::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}
