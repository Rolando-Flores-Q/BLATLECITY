#pragma once
#include "Actor.h"
#include "Auto.h"

class AutoAdapter : public Actor , public Auto
{
public:

	AutoAdapter();
	void VisualizarEnPantalla();
	void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
};

