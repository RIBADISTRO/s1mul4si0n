#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Hacer un programa  para  agregar  numeros  enteros  a una pila, hasta  que
el usuario  lo decida , despues  mostrar  todos  los  numeros  introducidos 
en la pila. EJERCICIO
*/ 
/*
INSERTAR UN ELEMENTO  EN LA PILA 
Para insertar elemento  en la pila, solo hay  que seguir 4 pasos.

1. crear  el espacio en memoria para  almacenar  un nodo    pila=NULL;  
                                                            Nodo *nuevo_nodo=new Nodo();
2. Cargar el valor  dentro  del nodo(dato )                 nuevo_nodo -> dato = 10;                 
3. Cargar  el puntero pila  dentro  del nodo(*siguiente)    nuevo_nodo -> siguiente = pila;
4. Asignar  el nuevo  nodo  a pila                          pila=nuevo_nodo;

QUITAR UN ELEMENTO DE UNA PILA

para quitar un elemento de una pila, igualmente  hay que 
seguir  4 pasos 

1. Crear una varible  *aux  de tipo  Nodo           Nodo *aux=pila;
2. Igualar  el n a aux -> dato;                    n = aux -> dato;
3. Pasar  pila  a sisguiente nodo                   pila =aux -> siguiente;
4. Eliminar  aux                                    delete aux;
*/
// <<<<<<<<<<PROTOTIPO DE MI FUNCION<<<<<<<<<<<<<
// void agregarPila(Nodo *&pila, int n);
// void sacarPila(Nodo *&pila, int &n);

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_Nodo = new Nodo();
    nuevo_Nodo -> dato = n;
    nuevo_Nodo -> siguiente = pila;
    pila = nuevo_Nodo;

    cout<<"\tElemento"<<n<<" se agrego correctamente"<<endl;
}
// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux=pila;
    n = aux -> dato;
    pila = aux->siguiente;
    delete aux;

    // cout<<"\tElemento "<<n<<" "
}


int main(){
    Nodo *pila = NULL; //Crear la pila
    // VARIBLES
    int dato;
    char rpt;

    do{
        cout<<"\nDigite un elemento: ";cin>>dato;
        agregarPila(pila, dato);
        cout<<"\nDesear agregar otro elemento (s/n): ";cin>>rpt;        
    } while ((rpt=='S' ||  rpt=='s'));

    cout<<"\nSACAR ELEMENTOTO DE LA PILA\n\n"<<endl;
    cout<<"Sacando elemento ";
            while (pila !=NULL){//Mietras no sea la final de la pila
                sacarPila(pila, dato);                
                if (pila != NULL){
                    cout<<dato<<", ";
                }else{
                cout<<dato<<"  de la PILA"<<".\n";
                } 
            }

    getchar();
    return 0;
}