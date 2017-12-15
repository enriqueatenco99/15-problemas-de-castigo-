#include <iostream>
#include <string>

using namespace std;
// Cual es tu cantante favorito//

int main(int argc, char** argv)
 {
    char seleccion;
    string opcion1, opcion2, opcion3, opcion4;
    opcion1= "1.MICHAEL JACKSON";
    opcion2= "2.BRUNO MARS";
    opcion3= "3.JUSTIN BIEBER";
    opcion4= "4.TOM HOLIGAN";
    
    cout << opcion1 << endl << opcion2 << endl << opcion3 << endl <<opcion4 << endl;
    cout <<"Elije el de tu agrado: ";
    cin >> seleccion;
    cout << endl << endl << "Elijiste: " << seleccion << endl;
 
 
 
 	return 0;
}
