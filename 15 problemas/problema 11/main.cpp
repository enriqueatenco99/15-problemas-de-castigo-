#include <iostream>
#include <string>

using namespace std;
// escoje que carrera te gustaria estudiar//

int main(int argc, char** argv)
 {
    char seleccion;
    string opcion1, opcion2, opcion3, opcion4;
    opcion1= "1.Comercio Internacional";
    opcion2= "2.Sistemas Computacionales";
    opcion3= "3.Dise�o Grafico";
    opcion4= "4.Contaduria";
    
    cout << opcion1 << endl << opcion2 << endl << opcion3 << endl <<opcion4 << endl;
    cout <<"Elije el de tu agrado: ";
    cin >> seleccion;
    cout << endl << endl << "Elijiste: " << seleccion << endl;
 
 
 
 	return 0;
}
