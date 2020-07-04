#include <iostream>

using namespace std;

int main(void){
    int N;

    cin >> N;

    for (int line=1; line<=N; line++){
        
        for(int blank=0; blank<line-1; blank++){
            cout << ' ';
        }
        for(int star=0; star<=(N - line); star++){
            cout << '*';
        }
        cout<<endl;        
    }


    return 0;
}