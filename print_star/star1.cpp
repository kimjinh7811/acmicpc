#include <iostream>

using namespace std;

int main(void){
    int N;

    cin >> N;

    for (int line=1; line<=N; line++){
        for(int star=1; star<=line; star++){
            cout << '*';
        }
        cout <<endl;
    }


    return 0;
}