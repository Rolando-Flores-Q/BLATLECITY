#pragma once
#include "Municion.h"
class Misil :
    public Municion
{
public:
    Misil();
    virtual void actualizar(float _dt);
    virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
    virtual void intersectar(Actor* _actor);
};

