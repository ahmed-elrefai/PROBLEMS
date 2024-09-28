#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    string* cmds = new string[n];

    for (int i = 0; i < n; i++){
        cin >> cmds[i];
    }

    for (int i =0; i < n; i++){
        string cmd = cmds[i];
        if (cmd.find("++") != cmd.npos){
            x++;
        }
        else if(cmd.find("--") != cmd.npos){
            x--;
        }
    }

    cout << x;

    delete [] cmds;
    return 0;
}