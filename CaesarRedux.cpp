#include <iostream>

using namespace std;

int main() {
    string abecedario = "abcdefghijklmnopqrstuvwxyz";
    int index, n;
    cin >> n;
    
    string text;
    int shift;
    
    bool plaintext = false;
    
    for(int i = 0; i < n; i++){
        cin >> ws;
        cin >> shift;
        cin >> ws;
        getline(cin, text); 

        text.find(" the ") != string::npos
            ? plaintext = true
            : plaintext = false;
        
        if(plaintext == true){
                for(int j=0; j < int(text.length()); j++){
                    if(text[j] == ' ') cout << ' ';
                    
                    else{
                        index = abecedario.find(text[j]);
                        index = index - shift;
                        if(index < 0) index = index + 26;
                        cout << abecedario[index];
                        
                    }
                }
                cout << endl;
        }
        else{
                for(int j=0; j < int(text.length()); j++){
                    if(text[j] == ' ') cout << ' ';
                    
                    else{
                        index = abecedario.find(text[j]);
                        index = index + shift;
                        if(index > 25) index = index - 26;
                        cout << abecedario[index];
                        
                    }
                } 
                cout << endl;
        }
    }
}
