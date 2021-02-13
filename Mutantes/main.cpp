#include <iostream>

using namespace std;

// bool isMutant(string *);
// void mostrarMatriz(string matriz[][5], int orden);

int main() {
    int orden, contador, contador_diagonal, contador_vertical, contador_secuencias = 0;
    bool mutante = false;

    cout<<"Introduzca el orden de la matriz: ";
    cin>>orden;
    string matriz[orden][orden], elemento = "", auxiliar = "", auxiliar_diagonal = "";

    for (int i = 0; i < orden; i++) {
        for (int j = 0; j < orden; j++) {
            cout<<"Introduzca un elemento a la matriz: ";
            cin>>elemento;
            matriz[i][j] = elemento;
            // Esto debe ir en un método
            if(elemento == auxiliar) {
                contador++;
                if(contador == 4) {
                    contador = 1;
                    contador_secuencias++;
                }
            } else {
                auxiliar = elemento;
                contador = 1;
            }
            if(i == j) {
                if(elemento != auxiliar_diagonal) {
                    auxiliar_diagonal = elemento;
                    contador_diagonal = 1;
                } else {
                    contador_diagonal++;
                    if(contador_diagonal == 4) {
                        contador_diagonal = 1;
                        contador_secuencias++;
                    }
                }
            }
        }
    }

    auxiliar = "";

    for (int i = 0; i < orden; i++) {
        for (int j = 0; j < orden; j++) {
            elemento = matriz[j][i];
            if(elemento != auxiliar) {
                auxiliar = elemento;
                contador_vertical = 1;
            } else {
                contador_vertical++;
                if(contador_vertical == 4) {
                    contador_vertical = 1;
                    contador_secuencias++;
                }
            }
        }
        
    }
    

    for (int i = 0; i < orden; i++) {
        for (int j = 0; j < orden; j++) {
            cout<<"["<<matriz[i][j]<<"]";
        }
        cout<<"\n";
    }
    
    if(contador_secuencias > 1) {
        cout<<"Es mutante\n";
    }

    return 0;
}

// void mostrarMatriz(string matriz[][5], int orden) {
//     for (int i = 0; i < orden; i++) {
//         for (int j = 0; j < orden; j++) {
//             cout<<"["<<matriz[i][j]<<"]";
//         }
//         cout<<"\n";
//     }
// }


// bool isMutant(string *matriz) {

// }