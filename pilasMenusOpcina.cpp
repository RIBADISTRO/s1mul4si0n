#include <iostream>
#include <stdlib.h>
using namespace std;
// CON MENUS

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
struct Nodo{
    int dato;
    Nodo *Siguiente;
};
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

void menu();
void agregarPila(Nodo *&, char n);
void sacarPila(Nodo *&, char &);

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void agregarPila(Nodo *&pila, char n){
    Nodo *nuevo_Nodo = new Nodo();
    nuevo_Nodo -> dato = n;
    nuevo_Nodo -> Siguiente = pila;
    pila =nuevo_Nodo;
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

void sacarPila(Nodo *&pila, char &n){
        Nodo *aux = pila; 
        n = aux -> dato;
        pila = aux -> Siguiente;
        delete aux;
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

void menu(){
    Nodo *pila=NULL;
    int opc;
    char dato;

    do{        
        
        
        cout<<"\n\tMENU:";
        cout<<"\n1.Insertar un caracter  a la pila";
        cout<<"\n2. Mostrar todos los elementos de la pila";
        cout<<"\n3. Salir";
        cout<<"\n\nOpcion: ";cin>>opc;
        
        switch(opc){
            case 1:                
                cout<<"Digite un caracter: ";cin>>dato;
                agregarPila(pila,dato);           
                
            break;            
                cout<<"\nMostranto todo los elementos  de la pila\n\n"<<endl;
                cout<<"Sacando elemento ";
                while (pila != NULL){//Mietras no sea la final de la pila
                    sacarPila(pila, dato);
                    if (pila != NULL){
                        cout<<dato<<", ";
                    }else{
                        cout<<dato<<"  de la PILA"<<".\n\n\n";
                    } 
            }
            
            break;   
            default: cout<<"Recuerda  si lo puedes imaginar lo puedes programar\n";
        }
        
    } while (opc != 3);
    
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
int main(){    
    menu();
    return 0;
}