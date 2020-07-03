//
// Created by Stefanie Muroya lei on 10/31/19.
//

#include "Aceptar.h"



bool Aceptar::sePuedeAplicar(EstadoCompilador *estado) {
    return gramatica->terminales.count(estado->produccionRef->right[0][estado->posAsterisco].name) > 0;
}

void Aceptar::aplica(EstadoCompilador *estado, queue<EstadoCompilador *> &chart) {
    estado->estadoChart++;
    estado->posPalabra++;
    estado->posAsterisco++;
    chart.pop();
}