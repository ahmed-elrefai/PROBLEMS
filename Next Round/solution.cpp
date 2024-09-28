#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int* scores = new int[n];
    int kthscore;
    int nextRound =0;

    for (int i=0 ; i < n; i++){
        cin >> scores[i];
        if (i == k - 1){
            kthscore = scores[i];
        }
    }

    for (int i =0; i < n; i++){
        if (scores[i] >= kthscore && scores[i] > 0)
            nextRound++;
    }

    cout << nextRound;

    return 0;
}