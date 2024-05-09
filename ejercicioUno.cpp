/*
Autor: Harry Enrique Bodán Navarro
Fecha: 05 de Mayo del 2024
Versión: 1.0
Lógica y Algoritmos

Problema 1: Se requiere calcular la indemnización que recibiría un empleado del sector público por
renuncia o por despido, teniendo en cuenta fecha de inicio del contrato (mes, día, año), el
salario mensual, días de vacaciones acumulados, y fecha de fin de contrato (mes, día,
año). El Código del Trabajo manda a pagar 1 mes de salario por cada año laborado
durante los primeros 3 años y, a partir del cuarto año, se pagan 20 días hasta un límite de
5 salarios. Para lograr los 5 salarios el empleado tendría que haber trabajado 6 años de
forma ininterrumpida.


*/

#include <windows.h>
#include <stdlib.h>
#include <cmath>
#include "structs.h"
#include <iostream>
using namespace std;

int calcularDias(Fecha fechaInicial,  Fecha fechaFinal);
void diasAAniosMesesDias(int diasTotales);
void calculoIndemnizacion(Fecha duracion, int vacaciones, double salarioMensual);

void ejercicioUno(){
    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    double salarioMensual = 0;
    int vacaciones = 0;
    const double promedioDiasMes = 30.4375;
    Fecha fechaInicio, fechaFin, duracion;
    
    cout<<"Bienvenidos al ejercicio 1: Indemnización"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Digite la fecha de ingreso (Formato: DD/MM/AAAA)"<<endl;
    cin>>fechaInicio.dia>>fechaInicio.mes>>fechaInicio.anio;
    
    cout<<"Digite la fecha de salida (Formato: DD/MM/AAAA)"<<endl;
    cin>>fechaFin.dia>>fechaFin.mes>>fechaFin.anio;
   
    cout<<"Digite el número de vacaciones disponibles"<<endl;
    cin>>vacaciones;
    
    cout<<"Digite su salario mensual"<<endl;
    cin>>salarioMensual;

    int diasTotales = calcularDias(fechaInicio, fechaFin);

    duracion.anio = diasTotales / 365;
    int diasRestantes = diasTotales % 365;
    duracion.mes = int(diasRestantes / promedioDiasMes);
    duracion.dia = diasRestantes % int(promedioDiasMes);

    calculoIndemnizacion(duracion, vacaciones, salarioMensual);

}

void calculoIndemnizacion(Fecha duracion, int vacaciones, double salarioMensual){
    const double promedioDiasMes = 30.4375;

    int pagofragmento = 0;
    double pagoAnios, pagoMeses, pagoDias, pagoVacaciones;


    if(duracion.anio >= 0 && duracion.anio < 4){
        pagoAnios = duracion.anio * salarioMensual;
        pagoMeses = duracion.mes * (salarioMensual/promedioDiasMes) * 2.50;
        pagoDias = duracion.dia * (salarioMensual/promedioDiasMes) * 0.0833;
    }else if(duracion.anio >= 4){
        pagoAnios = 3 * salarioMensual;

        if(duracion.anio == 4){
            pagofragmento =  20; 
        }else if (duracion.anio== 5){
            pagofragmento =  40; 
        }else if(duracion.anio >= 6){
            pagofragmento =  60; 
        }

        pagoAnios+= (pagofragmento* (salarioMensual/promedioDiasMes));

        pagoMeses = duracion.mes * (salarioMensual/promedioDiasMes) * 1.5667;
        pagoDias = duracion.dia * (salarioMensual/promedioDiasMes) * 0.0556;
    }

    pagoVacaciones = vacaciones * (salarioMensual/promedioDiasMes);

    double pagoTotal = pagoVacaciones+ pagoAnios + pagoDias + pagoMeses;

    cout<<"Su indemnización es de: "<<pagoTotal<<endl;
    system("pause");
}

