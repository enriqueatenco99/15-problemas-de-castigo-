#include <iostream>
#include <string>

using namespace std;
// escoje que cafe quieres//

int main(int argc, char** argv)
 {
    char seleccion;
    string opcion1, opcion2, opcion3, opcion4;
    opcion1= "1.Cafe sin azucar";
    opcion2= "2.Cafe con azucar";
    opcion3= "3.Cafe con leche";
    opcion4= "4.Cafe sin leche";
    
    cout << opcion1 << endl << opcion2 << endl << opcion3 << endl <<opcion4 << endl;
    cout <<"Elije el de tu agrado: ";
    cin >> seleccion;
    cout << endl << endl << "Elijiste: " << seleccion << endl;
 
 
 
 	return 0;
}
