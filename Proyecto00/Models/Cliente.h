//
// Created by julia on 13/03/2022.
//

#ifndef PROYECTO00_CLIENTE_H
#define PROYECTO00_CLIENTE_H

#include <ostream>
#include "string"
#include "User.h"
#include "EsquemaVacunacion.h"

using namespace std;

class Cliente:public User{
    int cantidadCompras;
    EsquemaVacunas esquema;
public:
    Cliente(){
        cantidadCompras=0;
    }

    Cliente(const string &nombre, const string &contraseña, const string &telefono, const string &direccion,
            const string &correo, int edad, int cantidadCompras, EsquemaVacunas esquema) :
            User(nombre, contraseña, telefono, direccion, correo,edad){
        Cliente::cantidadCompras=cantidadCompras;
        Cliente::esquema=esquema;
    }

    int getCantidadCompras() const {
        return cantidadCompras;
    }

    void setCantidadCompras(int cantidadCompras) {
        Cliente::cantidadCompras = cantidadCompras;
    }
    EsquemaVacunas getEsquema() {
        return esquema;
    }
    void setEsquema(EsquemaVacunas esquema){
        Cliente::esquema=esquema;
    }

    friend ostream &operator<<(ostream &os, const Cliente &cliente) {
        os << static_cast<const User &>(cliente) << endl << " cantidadCompras: " << cliente.cantidadCompras;
        return os;
    }

};

#endif //PROYECTO00_CLIENTE_H
