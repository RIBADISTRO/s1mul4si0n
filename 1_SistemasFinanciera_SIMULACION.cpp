#include <iostream>
#include <stdlib.h>
using namespace std;
/*********************************
*Sistema economico                                  VARIBLES
*-1. Sistemas financiero                            // TIEMPO
*    o y 90 no hay intereses                        // plazo
*    91 y 180 dias 5% intereses                     // interes
*    181 y 250 10% intereses
*    250 infinito 15% intereses
*
**********************************
*-> Datos dinamicos
*-> datos estatico
*/
int main(){
    float prestamoInicial=0, dias, interes, plazo, totalPagar;
    

    cout<<endl<<"Sistema Financiero\n"<<endl;
    
do{
    
    cout<<endl<<"Mondo de credito:";
    cin>>prestamoInicial;
    cout<<"Plazos en dias: ";
    cin>>dias;

     if(prestamoInicial >=0 && prestamoInicial <= 90){
         interes= ((prestamoInicial*0)+prestamoInicial);       
        cout<<"Tu credito es: "<<interes<<endl;
    }

    else if(prestamoInicial >= 91 &&  prestamoInicial <= 180){
        interes = ((prestamoInicial*0.05)+prestamoInicial);
        cout<<"Su credito es: "<<interes<<endl;
    }

    else if (prestamoInicial >= 181 && prestamoInicial <= 250){
        interes= ((prestamoInicial*0.1)+prestamoInicial);
        cout<<"Su credito es: "<<interes<<endl;
    }

    else if (prestamoInicial>=250){
        interes=((prestamoInicial*.15)+prestamoInicial);
        cout<<"Tu credito actual es: "<<interes;
    }
    else
    {
        cout<<"Error al calcular tu credito... Verifica!"<<endl;
    }
} while (dias>=0);

    return 0;
}