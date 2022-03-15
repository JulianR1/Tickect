//
// Created by julia on 12/03/2022.
//

#ifndef PROYECTO00_VENDEDOR_H
#define PROYECTO00_VENDEDOR_H

#include <ostream>
#include "string"
#include "User.h"

using namespace std;
class Vendedor:public User{
    string nCedula, producto;
public:
    Vendedor(){
        nCedula=producto="";
    }
    Vendedor(const string &nombre, const string &contraseña, const string &telefono,
             const string &direccion,const string &correo, int edad,
             const string &nCedula, const string &producto) : User(nombre, contraseña,telefono, direccion,correo, edad){
        Vendedor::nCedula=nCedula;
        Vendedor::producto=producto;
    }

    const string &getNCedula() const {
        return nCedula;
    }

    void setNCedula(const string &nCedula) {
        Vendedor::nCedula = nCedula;
    }

    const string &getProducto() const {
        return producto;
    }

    void setProducto(const string &producto) {
        Vendedor::producto = producto;
    }

    friend ostream &operator<<(ostream &os, const Vendedor &vendedor) {
        os << static_cast<const User &>(vendedor) <<endl<< " nCedula: " << vendedor.nCedula <<endl<< " producto: "
           << vendedor.producto;
        return os;
    }
};

#endif //PROYECTO00_VENDEDOR_H
