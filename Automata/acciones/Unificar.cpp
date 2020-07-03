//
// Created by Stefanie Muroya lei on 10/31/19.
//

#include "Unificar.h"
#include "Aceptar.h"


bool Unificar::isConflict(ProdContext left) {

    map<string, string> tempDictionary = this->gramatica->dictionary;

    if(gramatica.updateVars(left.args, gramatica->dictionary,true) &&
                                gramatica->updateVars(left.variables, gramatica->dictionary,false)){
        return false;
    }

    gramatica.dictionary = tempDictionary;
    return true;

}
bool Unificar::sePuedeAplicar(EstadoCompilador *estado) {
    Aceptar aceptar;
    if(aceptar.sePuedeAplicar(estado) && !isConflict(estado->produccionRef->left)){
        if(estado->produccionRef->right[0][estado->posAsterisco].name == gramatica->targetString[estado->posPalabra]){
            return true;
        }
        return false;
    }

    return false;
}

void Unificar::aplica(EstadoCompilador *estado, queue<EstadoCompilador *> &chart) {
    Aceptar aceptar;
    aceptar.aplica(estado, chart);
}