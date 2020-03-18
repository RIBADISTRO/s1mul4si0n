#include <iostream>
#include <stdlib.h>
using namespace std;
// LIFO PROGRAMACION C++
/*
CONCEPTO DE PILA
Una pila  es un diagrama  de datos  de entrada  ordenadas
tales  que solo se pueden introducir  y eliminar  por un 
extremo, llamado  cima.
*/ 

// Las operaciones  usuales  en la linea son Insertar  y quitar.
// La operacion  Insertar(push) añade  un elemento  en la  cima 
//  de la  pila y la operacion  quitar (pop) elimina  o saca  un
//   elemento de la pila.


/*
INSERTAR UN ELEMENTO  EN LA PILA 
Para insertar elemento  en la pila, solo hay  que seguir 4 pasos.

1. crear  el espacio en memoria para  almacenar  un nodo    pila=NULL;  
                                                            Nodo *nuevo_nodo=new Nodo();
2. Cargar el valor  dentro  del nodo(dato )                 nuevo_nodo -> dato = 10;                 
3. Cargar  el puntero pila  dentro  del nodo(*siguiente)    nuevo_nodo -> siguiente = pila;
4. Asignar  el nuevo  nodo  a pila                          pila=nuevo_nodo;


            struct Nodo{
                dato;
                Nodo *siguieten;
            };
            void agregarPila(Nodo *&pila, int n){
                Nodo *nuevo_nodo=new Nodo();
                nuevo_nodo -> dato = n;
                nuevo_nodo -> siguiente = pila;
            }


QUITAR UN ELEMENTO DE UNA PILA

para quitar un elemento de una pila, igualmente  hay que 
seguir  4 pasos x

1. Crear una varible  *aux  de tipo  Nodo           Nodo *aux=pila;
2. Igualara  el n a aux -> dato;                    n = aux -> dato;
3. Pasar  pila  a sisguiente nodo                   pila =aux -> siguiente;
4. Eliminar  aux                                    delete aux;

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux -> dato;
    pila =aux -> siguiente;
    delete aux;
    
}


*/
// >>>>>>>>>>>>>>>>>>>>>>>>>>AGREGAR ELEMENTO EN LA PILA>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

struct Nodo{
    int dato;
    Nodo *siguiente;
};


void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_Nodo = new Nodo();      //1
    nuevo_Nodo -> dato =n;              //2
    nuevo_Nodo -> siguiente = pila;     //3
    pila = nuevo_Nodo;                  //4

    cout<<"\nElemento "<<n<<" agregado correctamente\n"<<endl;
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>QUITAR ELEMENTO DE LA PILA>>>>>>>>>>>>>>>>>>>>>>>>>>>>

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux= pila;
    n =aux -> dato;
    pila = aux->siguiente;
    delete aux;
}

int main(){
    Nodo *pila = NULL;                    //1
    int dato,opc;

    cout<<"\t\nOPCIONES\n"<<endl;
    cout<<"1. Agregar elemento"<<endl;
    cout<<"\tElegir opcion: ";cin>>opc;

    switch(opc){
        // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        case 1: 
            cout<<"\nAGREGAR ELEMENTO EN LA PILA\n\n"<<endl;
            cout<<" Digite un dato: ";cin>>dato;
            agregarPila(pila, dato);
            cout<<" Digite un dato: ";cin>>dato;
            agregarPila(pila, dato);
        // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>        
            cout<<"\nSACAR ELEMENTOTO DE LA PILA\n\n"<<endl;
            while (pila !=NULL){//Mietras no sea la final de la pila
                sacarPila(pila, dato);
                if (pila != NULL){
                    cout<<"Sacanto elemento "<<dato<<", ";
                }else{
                cout<<dato<<"  de la PILA"<<".\n";
                } 
            }
        
        // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    }
    getchar();
    return 0;
}