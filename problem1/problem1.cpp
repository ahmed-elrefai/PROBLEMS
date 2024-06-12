#include <iostream>
#include <stack>
using namespace std;


stack<int>* decToBin(int decimal){
    stack<int>* bin = new stack<int>;
    while (decimal != 0){
        int remain = decimal % 2;
        bin->push(remain);
        decimal /= 2;
    }
    return bin;
}

int main(){
    stack<int>* binary;
    int decimal;

    cout << "Enter your decimal number: ";
    cin >> decimal;
    binary = decToBin(decimal);

    while (!binary->empty()){
        cout << binary->top() << " ";
        binary->pop();
    }
    return 0;
}