#include <iostream>

using namespace std;

int main(void){
    int N;

    cin >> N;

    for (int line=1; line<=N; line++){
        
        for(int blank=1; blank<line; blank++){
            cout << ' ';
        }
        for(int star=1; star<=2*(N-line)+1; star++){
            cout << '*';
        }
        
        cout<<endl;        
    }
    
    for (int line=1; line<=N-1; line++){

        for(int blank=N-1; blank>line; blank--){
            cout << ' ';
        }
        for(int star=1; star<=2*(line)+1; star++){
            cout << '*';
        }
        cout<<endl;        
    }
    

    return 0;
}