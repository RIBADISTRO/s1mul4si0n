#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
¿QUE ES UNA COLA?
Una cola es una estructura de datos, caracterizada por ser
 una secuencia por ser una secuencia de elemento en la qie las operaciones 
 de insercion se realiza por un extremo y la extraccion por el otro

 Las operaciones usuales en las colas son Insertar y quita. La operacion Insertar
 añade  un elemento por el extrae un elemento por el extremo opuesto
*/ 
/*ISERTAR ELEMENTO EN UNA COLA:
Para isertar elemento en una cola solo, solo hay que seguir
3 pasos:

1. Crear espacio en memoria para almacenar un nodo.         frente->NULL   fin->NULL
2. Asignar ese nuevo nodo al dato que queremos insertar.
3. Asignar los punteros frente y fina hacia el nuevo nodo.
*/ 

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
struct Nodo{
    int dato;
    Nodo *siguiente;
};

// PROTOTIPO
void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void menu();

// 2. Asignar ese nuevo nodo al dato que queremos insertar.
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo -> siguiente = NULL;
    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }else{
        fin->siguiente= nuevo_nodo;        
    }    
    fin = nuevo_nodo;
    cout<<"Elemento [ "<<n<<" ] Insertado a cola correctamente\n\n";
}

// Funcionpara determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true : false;// esta es la forma mas corta para la condicion
    // if (frente==NULL){
    //     return true;
    // }else{
    //     return false;
    // }
}

// ><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// funcion para eliminar elemtoa de la cola

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente->dato;
    Nodo *aux = frente;

    if(frente==fin){
        frente=NULL;
    }else{
        frente = frente -> siguiente;
    }
    
    delete aux;

}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

void menu(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int opc, dato;
    char rpt;
    
    do
    {
        cout<<"::::::   COLA O FIFO ::::::\n\n";
        cout<<"1. Inserta elemento en una cola.\n";
        cout<<"2. Mostrar elemento de la cola.\n";
        cout<<"3. Salir.\n\n";
        cout<<"\tOpcion:";cin>>opc;
        switch(opc){
            
            case 1: 
            // -----------------------------------------------------------------
                do
                {
                    cout<<"Digite un numero: "; cin>>dato;                    
                    insertarCola(frente,fin,dato);
                    cout<<"Deseas insertar otro dato['S|s'/n ]: ";cin>>rpt;

                } while (rpt=='S' || rpt=='s');

            // -----------------------------------------------------------------
            break;
            case 2:
            // -----------------------------------------------------------------
                cout<<"Mostranto elemento de la cola:";
                while(frente != NULL){
                    suprimirCola(frente,fin,dato);
                    if (frente != NULL){
                        cout<<dato<<", ";
                    }else{
                        cout<<dato<<".";
                    }
                }
                cout<<endl<<endl;
            // system("pause");
            // -----------------------------------------------------------------
            break;
            default: 
                cout<<"Finalizando programa  ::ADIOS::\n\n";
            break;
        }
    // system("clear");
    } while (opc != 3);
    
}
// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int main(){
    menu();
    getchar();
    return 0;
}
