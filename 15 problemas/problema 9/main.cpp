#include <iostream>
#include <string>

using namespace std;
// escoje que helado quieres//

int main(int argc, char** argv)
 {
    char seleccion;
    string opcion1, opcion2, opcion3, opcion4;
    opcion1= "1.HELADO DE PIÑA";
    opcion2= "2.HELADO DE CHOCOLATE";
    opcion3= "3.HELADO CON CHISPAS Y CHOCOLATE";
    opcion4= "4.HELADO DE VAINILLA";
    
    cout << opcion1 << endl << opcion2 << endl << opcion3 << endl <<opcion4 << endl;
    cout <<"Elije el de tu agrado: ";
    cin >> seleccion;
    cout << endl << endl << "Elijiste: " << seleccion << endl;
 
 
 
 	return 0;
}
