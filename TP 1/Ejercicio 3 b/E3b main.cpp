#include <iostream>

using namespace std;

int main()
{
    int m1,m2,b1,b2,X,Y;
    cout << "Ingrese pendiente de recta 1" << endl;
    cin >> m1;
    cout << "Ingrese ordenada al origen de recta 1" << endl;
    cin >> b1;
    cout << "Ingrese pendiente ede recta 2" << endl;
    cin >> m2;
    cout << "Ingrese ordenada al origen de recta 2" << endl;
    cin >> b2;
    if (m1==m2 && b1==b2)
    {
        cout << "Las rectas son coincidentes, tiene intersecciones infintas." << endl;
        return 0;
    }
    if (m1==m2 && b1!=b2)
    {
        cout << "Las rectas son paralelas, no tienen ninguna interseccion." << endl;
        return 0;
    }
    if (m1/-1/m2)
    {
        cout << "Las rectas son perpendiculares, se intersectan formando un angulo de 90 grados" << endl;
        return 0;
    }
    else
    {
        X = (b2-b1)/(m1-m2);
        cout << "Igualamos funciones" << endl;
        cout << "Las rectas se cortan en el eje de abscisas en " << X << endl;
        cout << "Reemplazamos " << X << " en cualquier funcion para obtener Y." << endl;
        Y=m1*X+b1;
        cout << "Las rectas se cortan en el eje de ordenadas en " << Y << endl;
    }
    return 0;
}
