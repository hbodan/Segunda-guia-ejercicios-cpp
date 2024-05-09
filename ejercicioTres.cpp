/*
Autor: Harry Enrique Bodán Navarro
Fecha: 05 de Mayo del 2024
Versión: 1.0
Lógica y Algoritmos

Problema 3: Simule un cajero automático (ATM). El ATM conoce en todo momento la cantidad de
dinero disponible distribuido en las denominaciones de billetes: C$1000, C$500, C$200 y
C$100. Cree un algoritmo que acepte retiros de efectivo y, según la disponibilidad de
billetes, entregue el dinero o indique mensaje de no disponibilidad.

*/

#include <windows.h>
#include <stdlib.h>
#include "structs.h"
#include <algorithm>
#include <iostream>
using namespace std;


void ejercicioTres(){
    int cantidadDebitar, cantidadDisponible;
    
    Billete mil = {1000, 10}, quinientos = {500, 10}, doscientos = {200, 10}, cien = {100, 10};

    Billete billetes[4] = {mil, quinientos, doscientos, cien};

    for(int i = 0 ; i <=4; i++){
        cantidadDisponible += (billetes[i].cantidad * billetes[i].valor);
    }



    cout<<"Bienvenido al ejercicio 3"<<endl;
    cout<<"Digite la cantidad a debitar"<<endl;
    cin>>cantidadDebitar;


    if (cantidadDebitar > cantidadDisponible) {
        cout << "No hay suficiente dinero en el cajero automático" << endl;
        system("pause");
    } else {
        int cantidadRestante = cantidadDebitar;
        int billetesMil = min(cantidadRestante / mil.valor, mil.cantidad);
        cantidadRestante -= (billetesMil * mil.valor);
        int billetesQuinientos = min(cantidadRestante / quinientos.valor, quinientos.cantidad);
        cantidadRestante -= (billetesQuinientos * quinientos.valor);
        int billetesDoscientos = min(cantidadRestante / doscientos.valor, doscientos.cantidad);
        cantidadRestante -= (billetesDoscientos * doscientos.valor);
        int billetesCien = min(cantidadRestante / cien.valor, cien.cantidad);
        cantidadRestante -= (billetesCien * cien.valor);

        
        if (cantidadRestante == 0) {
            cout << "Retiro exitoso:" << endl;
            cout << "Billetes de C$1000: " << billetesMil << endl;
            cout << "Billetes de C$500: " << billetesQuinientos << endl;
            cout << "Billetes de C$200: " << billetesDoscientos << endl;
            cout << "Billetes de C$100: " << billetesCien << endl;
            

            mil.cantidad -= billetesMil;
            quinientos.cantidad -= billetesQuinientos;
            doscientos.cantidad -= billetesDoscientos;
            cien.cantidad -= billetesCien;
            system("pause");
        } else {
            cout << "No hay suficientes billetes para completar el retiro" << endl;
            system("pause");
        }
    }
}

