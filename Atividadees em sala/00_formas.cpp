// Lucas Paiva da Silva - 20100417
// INE5201 - Atividade em sala

#include <iostream>
using namespace std;
# define M_PI 3.14159265358979323846 

int main()
{
    float lado1;
    float lado2;
    float raio;
    unsigned int selection;

    while (1)
    {
        cout<<"Digite 1 para quadrado, 2 para retângulo, 3 para circulo e 4 para sair: ";
        cin>> selection;
        if (selection==1)
        {
            cout<<"Entre o lado do quadrado: ";
            cin >> lado1;
            cout<< "O perimetro é de " << (lado1*4) << " u.c." << endl;
            cout<< "A área é de " << (lado1*lado1) << " u.a." << endl;
        }
        else if (selection == 2)
        {
            cout<<"Entre o lado 1 do retângulo: ";
            cin >> lado1;
            cout<<"Entre o lado 2 do retângulo: ";
            cin >> lado2;
            cout<< "O perimetro é de " << (lado1*2)+(lado2*2) << " u.c." << endl;
            cout<< "A área é de " << (lado1*lado2) << " u.a." << endl;
        }
        else if (selection == 3)
        {
            cout<<"Entre o raio do circulo: ";
            cin >> raio;
            cout<< "A área é de " << (M_PI*(raio*raio)) << " u.a." << endl;
            cout<< "A circunferência é de " << (M_PI*raio*2) << " u.c." << endl;
        }
        else if (selection == 4)
        {
            break;
        }
        else
        {
            cout<<"Digite 1 OU 2 OU 3" <<endl;
        }

    }
    
}