#include <iostream>
#include <vector>
#include <windows.h>

using  namespace std;

struct UserAgent
{   
    string nombre;
    string telefono; 
    string correo;
};


vector<UserAgent> Agenda;
int comando = 0;

void addUser();
void ImprimirDatos();
void Menu();


void addUser(){



    string  usuarioNuevo  = "";
    cout<<"Nombre>:";
    cin>>usuarioNuevo;
    
    string telefono =  "";
    cout<<"Telefono>:";
    cin>>telefono;


    string correo = "";
    cout<<"Corr>:";
    cin>>correo;

    
    UserAgent userNew;
    
    userNew.nombre = usuarioNuevo;
    userNew.telefono = telefono;
    userNew.correo  = correo;
    Agenda.push_back(userNew);


    cout<<"Datos Agregados"<<endl;

    
    system("pause");

}


void ImprimirDatos(){


    /*
    for(const UserAgent& i : Agenda){

        cout<<"Nombre:" <<  i.nombre<< endl;
        cout<<"telefono:" <<  i.telefono<< endl;
        cout<<"Correo:" <<  i.correo<< endl;


    }
    */

    for(auto i =  Agenda.begin(); i <  Agenda.end();i++){

        cout<<"Nombre:"<< i->nombre<<endl;
        cout<<"Telefono:"<< i->telefono<<endl;
        cout<<"Correo:"<< i->correo<<endl;

        
        cout<<"---------------------------"<<endl;

    }



    system("pause");
    return;
}


void Menu(){

    system("clear");

    
    cout<<"Menu"<<endl<<endl;

    cout<<" 1 ) Agregar Contacto "<<endl;
    cout<<" 2 ) Consultar Contacto "<<endl;
    cout<<" 3 ) Buscar Contacto "<<endl;
    cout<<" 4 ) Salir "<<endl; 

    

    cout<<"Comando:";
    cin>>comando;


    if(comando == 0){

        cout<<"Comando Invalido"<<endl;

    }else if(comando == 1){

        addUser();
        Menu();

    }else if(comando == 2){
        
        ImprimirDatos();
        
    
        Menu();
       
        
    }else if(comando == 4){

        cout<<" Adios no seas #$% "<<endl;

    }

}


int main(){
    

    while (1)
    {
        
        Menu();

    }
    


    return 0;
}