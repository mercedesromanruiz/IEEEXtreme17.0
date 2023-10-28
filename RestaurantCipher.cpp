#include <iostream>
#include <string>

using namespace std;

char recipes_i[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

void buscar(const char letra, bool &found, int &pos){
    found = false;
    pos = 0;
    for (int i = 0; i < 7; i++){
        if (recipes_i[i] == letra) {found = true; pos = i;}
    }
}

int main() {
    int n, j, posicion, espacio;
    char puntuacion;
    string text;
    bool encontrado = false;
    char recipes_o[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    
    cin >> n;
    
    for (int i=0; i<n; i++){
        cin >> ws;
        getline(cin, text);
        
        puntuacion = text[text.length() - 1]; // cual es el signo de puntuacion char
        espacio = text.find(' '); // primer espacio que hay en la frase int
        //cout << espacio << ' ' << endl;
        
 
        if (puntuacion == '!') {
            j = 0;
            encontrado = false;
            while(!encontrado){
                buscar(text[j], encontrado, posicion);
                j++;
            }
            cout << recipes_o[posicion] << endl;
        }
        
        else{
            j = espacio + 1;
            encontrado = false;
            while(!encontrado){
                buscar(text[j], encontrado, posicion);
                j++;
            }
            cout << recipes_o[posicion] << endl;
        }
        
    }
}
