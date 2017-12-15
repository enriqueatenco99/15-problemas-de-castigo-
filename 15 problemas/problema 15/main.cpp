#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) 
{
 
 float calificacion=0;
 double sumatoria=0;
 double promedio=0;
 
 for(int i=0; i<6; i++ )
 {
 
 
 cout<<"ingresa la calificacion"<< endl;
 cin>>calificacion;
 
 sumatoria=sumatoria+ calificacion ;
 
 cout<<"el promedio de los alumnos es"<< endl;
 promedio=sumatoria/6;
 
 
 
}

cout<<"la suma de las calificaciones es" << sumatoria<<endl;
	return 0;
}
