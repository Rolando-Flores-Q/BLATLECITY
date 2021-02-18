#include "AguilaAdapter.h"
#include "Tanque.h"

AguilaAdapter::AguilaAdapter():Actor(), Aguila("NombreAguila", "W", x, x+ ancho, y, y + alto) {
	x = 10;
	y = 15;
	ancho = 1;
	alto = 1;
	setXVelocidad(5);
	setDireccion(Direccion_Izquierda);
	setAvatar(avatarAguila);
	setFisico(false);
	//direccion = Direccion_Izquierda;
	//setEnergia(energiaJugador);
}


void AguilaAdapter::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Actor::renderizar(_sistemaRenderizacion);
}

void AguilaAdapter::mover(Direccion _direccion)
{
	setDireccion(_direccion);
	setXVelocidad(0);
	/*setYVelocidad(0);*/

	switch (Direccion_Izquierda)
	{
	case Direccion_Izquierda: setXVelocidad(velocidad); break;
		/*case Direccion_Derecha: setXVelocidad(velocidad); break;
		case Direccion_Arriba: setYVelocidad(-velocidad); break;
		case Direccion_Abajo: setYVelocidad(velocidad); break;*/
	}
}

void AguilaAdapter::moverDireccionRandom()
{
	Direccion direccionAnterior = getDireccion();
	Direccion direccionNueva;

	do {
		direccionNueva = (Direccion)(rand() % ((int)Direccion_MAX));

	} while (direccionAnterior == direccionNueva);

	mover(direccionNueva);
}
void AguilaAdapter::calcularPosicionCeldaFrontal(float* _x, float* _y)
{
	switch (Direccion_Izquierda)
	{
	case Direccion_Izquierda:
		(*_x) = int(getX()) - 0.01;
		(*_y) = int(getY()) + (getAlto() / 2.0);

	/*	break;
	case Direccion_Derecha:
		(*_x) = int(getX()) + getAncho() + 0.01;
		(*_y) = int(getY()) + (getAlto() / 2.0);
		break;
	case Direccion_Arriba:
		(*_y) = int(getY()) - 0.01;
		(*_x) = int(getX()) + (getAncho() / 2.0);
		break;
	case Direccion_Abajo:
		(*_y) = int(getY()) + getAlto() + 0.01;
		(*_x) = int(getX()) + (getAncho() / 2.0);
		break;*/
	}
}


void AguilaAdapter::VisualizarEnPantalla()
{
	
	
}
