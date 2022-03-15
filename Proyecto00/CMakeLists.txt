cmake_minimum_required(VERSION 3.21)
project(Proyecto00)

set(CMAKE_CXX_STANDARD 23)

add_executable(Proyecto00 main.cpp Models/User.h Models/Vendedor.h Models/VendedorNormal.h Models/VendedorPremium.h Models/Cliente.h Models/ClienteNormal.h Models/EsquemaVacunacion.h)
