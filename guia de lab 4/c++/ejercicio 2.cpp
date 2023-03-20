#include <iostream>
using namespace std;

int main(){

    int calidad, producto, precio;

    cout << "ingrese el numero del producto del 1 al 3" <<endl;
    cin >> producto;

    cout << "ingrese el numero de la calidad del 1 al 3" <<endl;
    cin >> calidad;
    
    switch (producto)
    {
        case 1: 
            switch(calidad) {
                case 1:
                   precio=5000;
                   break;  
                case 2:
                   precio=4500;
                   break;     
                case 3:
                   precio=4000; 
                   break;   
            }
            break;  
        case 2:   
            switch(calidad) {
                 case 1:
                    precio = 4500;
                    break;  
                case 2:
                    precio = 4000;  
                    break;  
                case 3:
                    precio = 3500;
                    break;  
                  
            }
            break;  

        case 3:
            switch(calidad) {
                case 1:
                    precio = 4000;
                    break;  
                case 2:
                    precio = 3500;  
                    break;  
                case 3:
                    precio = 3000;
                    break;    
            }
            break;
    }
    cout << "el precio del producto es de: " <<precio<<endl;
    return 0;
}