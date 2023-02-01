#include <iostream>

using namespace std;
int main()
{
   //ESCALAR TRIPLE
   //DECLARAMOS LAS VARIABLES
   //use un switch para que el programa no se viera tan solo y use lo de numeros pares o impares
    double triple, A, B,C,producto;
    float V1[2],V2[2],V3[2];
    int i = 0;
    double vI,vJ, vK;
   // LOS FOR LOS USAMOS PARA LEER LOS VALORES EN I DE LOS VECTORES 1,2 Y 3
    for (i = 0; i < 3; i++)
    {
    	//LEE VALOR DEL VECTOR JUNTO CON SU ALCANCE
        cout << "ingrese el valor del vector1: " << endl;
        cin >> V1[i];
    }

    for (i = 0; i < 3; i++)
    {
        cout << "ingrese el valor del vector2: " << endl;
        cin >> V2[i];
    }

    for (i = 0; i < 3; i++)
    {
        cout << "ingrese el valor del vector3: " << endl;
        cin >> V3[i];
    }
    
    //hacemos las operaciones para imprimir los valores al finalizar
    vI = ((V2[1] * V3[2]) - (V2[2] * V3[1]));
    vJ = ((V2[0] * V3[2]) - (V2[2] * V3[0]));
    vK = ((V2[0] * V3[1]) - (V2[1] * V3[0]));
    producto = vI - vJ + vK;
    
    A = ((V2[1] * V3[2]) - (V2[2] * V3[1])) * V1[0];
    B = ((V2[0] * V3[2]) - (V2[2] * V3[1])) * V1[1];
    C = ((V2[0] * V3[1]) - (V2[1] * V3[0])) * V1[2];

    triple = A - B + C;
    cout << "\n\n";
    //imprimimos los valores de los resultados 
    cout << "El vector I: " << vI << "\n";
    cout << "El vector J: " << vJ << "\n";
    cout << "El vector K: " << vK << "\n";
    
    cout << "El producto  es: " << A << "\n";
    cout << "El producto  es: " << B << "\n";
    cout << "El producto  es: " << C << "\n";
    cout << "El producto  triple es: " << triple << "\n\n";
}
