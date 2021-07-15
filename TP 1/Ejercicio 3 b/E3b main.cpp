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
        cout << "Las rectas son iguales: la solucione es toda la recta" << endl;
        return 0;
    }
    if (m1==m2 && b1!=b2)
    {
        cout << "Las rectas son paralelas y distintas: no existe solucion" << endl;
        return 0;
    }
    else
    {
        X = (b2-b1)/(m1-m2);
        Y=m1*X+b1;
        cout << "Las rectas no son paralelas y su punto de interseccion es " << "(" << X << ";" << Y << ")" << endl;
    }
    return 0;
}
