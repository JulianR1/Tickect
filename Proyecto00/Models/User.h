//
// Created by julia on 12/03/2022.
//

#ifndef PROYECTO00_USER_H
#define PROYECTO00_USER_H

#include <ostream>
#include "string"
#include "EsquemaVacunacion.h"

using namespace std;

class User{
    string nombre, contraseña, telefono, direccion, correo;
    int edad;

public:
    User(){
        nombre=contraseña=telefono=direccion=correo="";
        edad=0;
    }
    User(string nombre, string contraseña, string telefono, string direccion, string correo, int edad ):
    nombre(nombre), contraseña(contraseña), telefono(telefono), direccion(direccion), correo(correo), edad(edad) {}


    const string getNombre() const{
        return nombre;
    }
    void setNombre(const string &nombre){
        User::nombre=nombre;
    }
    const string &getContraseña() const {
        return contraseña;
    }

    void setContraseña(const string &contraseña) {
        User::contraseña = contraseña;
    }

    const string &getTelefono() const {
        return telefono;
    }

    void setTelefono(const string &telefono) {
        User::telefono = telefono;
    }

    const string &getDireccion() const {
        return direccion;
    }

    void setDireccion(const string &direccion) {
        User::direccion = direccion;
    }

    const string &getCorreo() const {
        return correo;
    }

    void setCorreo(const string &correo) {
        User::correo = correo;
    }

    int getEdad() const {
        return edad;
    }

    void setEdad(int edad) {
        User::edad = edad;
    }


    virtual void verificarEdad()=0;
    virtual string getTipo()=0;

    friend ostream &operator<<(ostream &os, const User &user) {
        os << "nombre: " << user.nombre <<endl<< " contraseña: " << user.contraseña <<endl<< " telefono: " << user.telefono
        <<endl<< " direccion: " << user.direccion <<endl<< " correo: " << user.correo <<endl<< " edad: " << user.edad;
        return os;
    }

};


#endif //PROYECTO00_USER_H
