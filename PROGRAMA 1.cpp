#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo* head = NULL;
    Nodo* actual = NULL;
    int valor;
    char opcion = 's';

    while(opcion == 's'){
        cout << endl;
        cout << "Ingrese un numero: ";
        cin >> valor;

        Nodo* nuevo = new Nodo;
        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        if(head == NULL) {
            head = nuevo;
            actual = nuevo;
        } else {
            actual->siguiente = nuevo;
            actual = nuevo;
        }
        
        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> opcion;
    }
    cout << endl;

    Nodo* temp = head;
    while(temp != NULL) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }
    cout << "NULL"<<endl;
    cout<< "-------------------------------------" << endl;
    cout << "NOMBRE: JONATHAN JUAN DAVID OSORIO PASCUAL" << endl;
    cout<< "-------------------------------------";

    system("pause");  // Esto evitará que la ventana se cierre
    return 0;
}