/*
Autor: Harry Enrique Bodán Navarro
Fecha: 05 de Mayo del 2024
Versión: 1.0
Lógica y Algoritmos

Problema 6: Implemente una solución para conocer la fecha calendario transcurridos N días a partir de
una fecha dada en formato dd/mm//aa


*/


#include <stdlib.h>
#include <windows.h>
#include "structs.h"  
#include <iostream>
using namespace std;

bool esBisiesto(int year);

int calcularDias(Fecha fechaInicial,  Fecha fechaFinal);

void ejercicioSeis(){
    SetConsoleOutputCP(CP_UTF8);
    system("cls");

    Fecha fechaInicial, fechaFinal;

    cout<<"Digite la fecha de ingreso (Formato: DD/MM/AAAA)"<<endl;
    cin>>fechaInicial.dia>>fechaInicial.mes>>fechaInicial.anio;
    
    cout<<"Digite la fecha de salida (Formato: DD/MM/AAAA)"<<endl;
    cin>>fechaFinal.dia>>fechaFinal.mes>>fechaFinal.anio;

    int diasCalculados =  calcularDias(fechaInicial,  fechaFinal);

    cout<<"DIAS TOTALES: "<<diasCalculados<<endl;
    system("pause");

}

int calcularDias(Fecha fechaInicial, Fecha fechaFinal){
    int dias = 0, diasEnAnios = 0, diasResidualFinal = 0, diasResidualInicial = 0;
    int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((fechaInicial.mes == 2 && fechaInicial.dia== 29) && (fechaFinal.mes == 2 && fechaFinal.dia == 29)){
        dias = (fechaFinal.dia - 1) + ((meses[fechaInicial.mes - 1] - fechaInicial.dia) + 1);
    }else if(fechaInicial.mes == 2 && fechaInicial.dia == 29){
        dias = fechaFinal.dia + ((meses[fechaInicial.mes - 1] - fechaInicial.dia) + 1);
    }else if(fechaFinal.mes == 2 && fechaFinal.dia ==29){
        dias = (fechaFinal.dia - 1) + ((meses[fechaInicial.mes - 1] - fechaInicial.dia) + 1);
    }else{
        dias = fechaFinal.dia + ((meses[fechaInicial.mes - 1] - fechaInicial.dia) + 1);
    }

    diasEnAnios = (fechaFinal.anio - (fechaInicial.anio + 1)) * 365;

    dias+= diasEnAnios;

    for(int i = fechaInicial.mes; i<=11 ; i++){
        diasResidualInicial+= meses[i];
    }

    for(int j = (fechaFinal.mes - 2); j>=0; j--){
        diasResidualFinal+= meses[j];
    }

    dias =  dias + diasResidualFinal + diasResidualInicial;


    for(int k= fechaInicial.anio; k <= fechaFinal.anio; k++){
        if(esBisiesto(k)){
            dias+= 1;
        }
    }

    if(fechaInicial.mes > 2){
        dias-=1;
    }
    
    if(fechaFinal.mes < 2){
        dias-=1;
    }
    
    return dias;
}

bool esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}