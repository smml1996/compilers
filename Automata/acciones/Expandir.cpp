//
// Created by Stefanie Muroya lei on 10/24/19.
//

#include "Expandir.h"
#include "../EstadoCompilador.h"

void Expandir::aplica(EstadoCompilador *estado, queue<EstadoCompilador *> &chart){

    for(Produccion prod : gramatica->producciones){
        if(prod.left.name == estado->produccionRef->right[0][estado->posAsterisco].name){
            chart.push(new EstadoCompilador(&prod, 0,estado->posPalabra,estado));
        }
    }

    estado->posAsterisco++;
}

bool Expandir::sePuedeAplicar(EstadoCompilador *estado) {

    return !estado->produccionRef->right[0][estado->posAsterisco].isTerminal;
}