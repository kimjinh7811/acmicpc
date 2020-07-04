#include <iostream>
#include <vector>

using namespace std;

void trash_center(vector< vector<char> > &star, int unit, pair<int, int> start){
    for(int tmp_y = (unit/3); tmp_y < (2*unit)/3 ; tmp_y++)             // fill the pattern's center for 'blank'
        for(int tmp_x = (unit/3); tmp_x < (2*unit)/3 ; tmp_x++)
            star[start.first + tmp_y][start.second + tmp_x] = ' ';
}

void print_vector(vector< vector<char> > a){
    int N = a.size();
    for (int y=0; y<N; y++){
        for (int x=0; x<N; x++){
            cout << a[y][x];
        }
        cout << endl; 
    }
}

int main(void){
    int N;

    cin >> N;
    
    vector< vector<char> > star(N, vector<char>(N, '*'));

    int unit = 3;                       // the smallest pattern size is 3 x 3
    
    vector< vector<char> > &star_ref = star;

    for(int size=1; size<N; size*=3){
        
        for(int a=0; a<N; a+=unit){
            for (int b=0; b<N; b+=unit){   
                trash_center(star_ref, unit, make_pair(a, b));
            }
        }
        unit *= 3;
    }

    print_vector(star);

    return 0;
}