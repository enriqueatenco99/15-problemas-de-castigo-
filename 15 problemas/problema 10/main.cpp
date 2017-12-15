#include <iostream>
#include <string>

using namespace std;
// escoje que musica te gusta mas//

int main(int argc, char** argv)
 {
    char seleccion;
    string opcion1, opcion2, opcion3, opcion4;
    opcion1= "1.Rock";
    opcion2= "2.Pop";
    opcion3= "3.Reggeaton";
    opcion4= "4.Hip Hop";
    
    cout << opcion1 << endl << opcion2 << endl << opcion3 << endl <<opcion4 << endl;
    cout <<"Elije el de tu agrado: ";
    cin >> seleccion;
    cout << endl << endl << "Elijiste: " << seleccion << endl;
 
 
 
 	return 0;
}
