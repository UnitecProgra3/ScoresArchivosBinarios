#include <iostream>
#include <fstream>
#include <string.h>
#include <list>
using namespace std;

class Puntaje
{
public:
    string nombre;
    int puntaje;
    Puntaje(string nombre, int puntaje)
    {
        this->nombre = nombre;
        this->puntaje = puntaje;
    }
};

list<Puntaje*> puntajes;

int main()
{
    int opcion;
    do
    {
        cout<<"Menu de puntajes"<<endl;
        cout<<"1 Ingresar"<<endl;
        cout<<"2 Imprimir"<<endl;
        cout<<"3 Guardar"<<endl;
        cout<<"4 Cargar"<<endl;
        cout<<"5 Salir"<<endl;
        cout<<"Opcion: "<<endl;
        cin>>opcion;

        switch(opcion)
        {
            case 1:
            {
                string nombre;
                int puntaje;
                cout<<"Nombre: ";
                cin>>nombre;
                cout<<"Puntaje: ";
                cin>>puntaje;
                puntajes.push_back(new Puntaje(nombre,puntaje));
                break;
            }
            case 2:
            {
                for(list<Puntaje*>::iterator i = puntajes.begin();
                        i!=puntajes.end();
                        i++)
                    cout<<(*i)->nombre<<": "<<(*i)->puntaje<<endl;
                break;
            }
            case 3:
            {
                ofstream out("puntajes.dat");
                for(list<Puntaje*>::iterator i = puntajes.begin();
                        i!=puntajes.end();
                        i++)
                {
                    string nombre = (*i)->nombre;
                    int puntaje = (*i)->puntaje;
                    out.write(nombre.c_str(),15);
                    out.write((char*)&puntaje,4);
                }
                out.close();
                break;
            }
            case 4:
            {
                ifstream in("puntajes.dat");
                in.seekg(0,ios::end);
                int tamano = in.tellg();
                in.seekg(0);
                while(in.tellg()<tamano)
                {
                    char* nombre = new char[15];
                    int puntaje;
                    in.read(nombre,15);
                    if(nombre)
                    in.read((char*)&puntaje,4);
                    puntajes.push_back(new Puntaje(nombre,puntaje));
                }
                break;
            }
        }

    }while(opcion!=5);

    return 0;
}
