//
// Created by Stefanie Muroya lei on 10/31/19.
//

#ifndef AUTOMATA_UNIFICAR_H
#define AUTOMATA_UNIFICAR_H

#include "Accion.h"

class Unificar : public Accion{

    bool isConflict(ProdContext left);
public:
    bool sePuedeAplicar(EstadoCompilador *estado);
    void aplica(EstadoCompilador *estado, queue<EstadoCompilador*> &chart);

};


#endif //AUTOMATA_UNIFICAR_H
