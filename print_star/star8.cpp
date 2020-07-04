#include <iostream>

using namespace std;

int main(void){
    int N;

    cin >> N;

    for (int line=1; line<=N; line++){
        
        for(int star=1; star<=line; star++){
            cout << '*';
        }
        for(int blank=2*(N-line); blank>0; blank--){
            cout << ' ';
        }
        for(int star=1; star<=line; star++){
            cout << '*';
        }
        cout<<endl;        
    }
    
    for (int line=1; line<=N-1; line++){
        
        for(int star=1; star<=(N-line); star++){
            cout << '*';
        }
        for(int blank=0; blank<2*line; blank++){
            cout << ' ';
        }
        for(int star=1; star<=(N-line); star++){
            cout << '*';
        }
        cout<<endl;        
    }
    

    return 0;
}