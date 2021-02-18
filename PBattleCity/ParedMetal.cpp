#include "ParedMetal.h"
#include "AguilaAdapter.h"

ParedMetal::ParedMetal()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_ParedMetal;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarParedMetal);
	setDestruirDespuesMuerte(false);
	//setFisico(true);
}


void ParedMetal::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}

