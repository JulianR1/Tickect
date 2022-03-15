//
// Created by julia on 13/03/2022.
//

#ifndef PROYECTO00_VENDEDORPREMIUM_H
#define PROYECTO00_VENDEDORPREMIUM_H

#include <ostream>
#include "string"
#include "Vendedor.h"
using namespace std;

class VendedorPremium:public Vendedor{
    int cantidadDestacados;
public:
    VendedorPremium(){
        cantidadDestacados=0;
    }

    VendedorPremium(const string &nombre, const string &contraseña, const string &telefono,
                    const string &direccion, const string &correo, int edad, const string &nCedula,
                    const string &producto,int cantidadDestacados) :
                    Vendedor(nombre, contraseña, telefono, direccion, correo, edad, nCedula,producto){
        VendedorPremium::cantidadDestacados=cantidadDestacados;
    }

    int getCantidadDestacados() const {
        return cantidadDestacados;
    }

    void setCantidadDestacados(int cantidadDestacados) {
        VendedorPremium::cantidadDestacados = cantidadDestacados;
    }

    friend ostream &operator<<(ostream &os, const VendedorPremium &premium) {
        os << static_cast<const Vendedor &>(premium) << " cantidadDestacados: " << premium.cantidadDestacados;
        return os;
    }
    void verificarEdad(){
        if(getEdad()>=18){

        }else{
        }
    }
    string getTipo(){
        return "Vendedor Premium";
    }
};

#endif //PROYECTO00_VENDEDORPREMIUM_H
