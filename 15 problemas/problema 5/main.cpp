#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    //definimos la cadena y la dejamos sin contendio
    string str="";
 
    //preguntamos a .empty() si est� vac�a
    if(str.empty()==true)
    {
        cout<<"\nLa cadena str se encuentra vacia.."<<endl<<endl;
    }
    else
    {
        cout<<"La cadena str contiene informacion.."<<endl;
    }
 
    return 0;
}
