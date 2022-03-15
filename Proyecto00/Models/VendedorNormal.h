//
// Created by julia on 13/03/2022.
//

#ifndef PROYECTO00_VENDEDORNORMAL_H
#define PROYECTO00_VENDEDORNORMAL_H

#include "string"
#include "Vendedor.h"

using namespace std;

class VendedorNormal:public Vendedor{
    int cantidadProductos;

public:
    VendedorNormal(){
        cantidadProductos=0;
    }

    VendedorNormal(const string &nombre, const string &contraseña, const string &telefono, const string &direccion,
                   const string &correo, int edad, const string &nCedula, const string &producto, int cantidadProductos)
            : Vendedor(nombre, contraseña, telefono, direccion, correo, edad, nCedula, producto) {

        VendedorNormal::cantidadProductos=cantidadProductos;
    }

    int getCantidadProductos() const {
        return cantidadProductos;
    }

    void setCantidadProductos(int cantidadProductos) {
        VendedorNormal::cantidadProductos = cantidadProductos;
    }
    void verificarEdad(){
        if(getEdad()>=18){

        }else{
        }
    }
    string getTipo(){
        return "Vendedor";
    }


};
#endif //PROYECTO00_VENDEDORNORMAL_H
