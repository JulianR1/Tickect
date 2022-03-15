//
// Created by julia on 13/03/2022.
//

#ifndef PROYECTO00_ESQUEMAVACUNACION_H
#define PROYECTO00_ESQUEMAVACUNACION_H
#include "string"
using namespace std;

class EsquemaVacunas{
    string cantidadVacunas, nombreVacuna;
    bool refuerzo;
public:
    EsquemaVacunas(){
        cantidadVacunas=nombreVacuna="";

    }

    EsquemaVacunas(const string &cantidadVacunas, const string &nombreVacuna, bool refuerzo) : cantidadVacunas(
            cantidadVacunas), nombreVacuna(nombreVacuna), refuerzo(refuerzo) {}

    const string &getCantidadVacunas() const {
        return cantidadVacunas;
    }

    void setCantidadVacunas(const string &cantidadVacunas) {
        EsquemaVacunas::cantidadVacunas = cantidadVacunas;
    }

    const string &getNombreVacuna() const {
        return nombreVacuna;
    }

    void setNombreVacuna(const string &nombreVacuna) {
        EsquemaVacunas::nombreVacuna = nombreVacuna;
    }

    bool isRefuerzo() const {
        return refuerzo;
    }

    void setRefuerzo(bool refuerzo) {
        EsquemaVacunas::refuerzo = refuerzo;
    }
};

#endif //PROYECTO00_ESQUEMAVACUNACION_H
