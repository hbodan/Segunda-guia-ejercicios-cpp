#include <windows.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void escogerEjercicio(int opcion);
void ejercicioUno();
void ejercicioDos();
void ejercicioTres();
void ejercicioCuatro();
void ejercicioCinco();
void ejercicioSeis();

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int opcionPrincipal = 0;

    do{
        system("cls");
        cout<<"Bienvenido a nuestro programa"<<endl;
        cout<<"Que ejercicio desea revisar?"<<endl;
        for(int i = 1; i <= 6; i++){
            cout<<i<<". "<<"Ejemplo "<<i<<endl;
        }
        cout<<0<<". "<<"Salir"<<endl;
        cin>>opcionPrincipal;

        escogerEjercicio(opcionPrincipal);

    }while(opcionPrincipal != 0);


    return 0;
}

void escogerEjercicio(int opcion){
    switch (opcion)
    {
    case 1:
        ejercicioUno();
        break;
    
    case 2:
        ejercicioDos();
        break;

    case 3:
        ejercicioTres();
        break;

    case 4:
        ejercicioCuatro();
        break;

    case 5:
        ejercicioCinco();
        break;
    
    case 6:
        ejercicioSeis();
        break;

    case 0:
        cout<<"Ciao Ciao"<<endl;
        break;
    default:
        cout<<"No está en el rango elegible"<<endl;
        break;
    }
}

