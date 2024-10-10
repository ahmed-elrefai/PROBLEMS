#include <iostream>

using namespace std;


int main(){

    int n, t;
    cin >> n >> t;
    char* queue = new char[n];
    for (int i =0; i < n; i++){
        cin >> queue[i];
    }
    for (int j =0; j < t; j++){
        for (int i = 0; i<n; i++){
            if (queue[i] == 'B' and i != n -1 and queue[i+1] == 'G'){
                queue[i] = queue[i+1];
                queue[i+1] = 'B'; 
                i++;
            }
        }
    }

    for (int i =0; i < n; i++){

        cout << queue[i];
    }

    delete [] queue;
    return 0;
}