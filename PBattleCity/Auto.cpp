#include "Auto.h"
#include "GameManager.h"

//Implemetacion del contructor de la clase
Auto::Auto(float _x, float _y, float _xVelocidad, float _yVelocidad, int _ancho, int _alto, int _energia)
	:Actor(_x, _y, _xVelocidad, _yVelocidad, _ancho, _alto, _energia) {
	// Asignamos objeto de ActorMovimientoNormal a movimientoActor que es un atributo de actor, los parametros lo pasamos por referencia
	
}
