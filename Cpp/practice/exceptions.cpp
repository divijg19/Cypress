#include <iostream>
using namespace std;

int main(void){
    int x=-1;
    try {
        cout << "Inside try \n";
        if(x<0){
            throw x;
            cout << "After throw \n";
        }
    }
    catch (int value){
        cout << "Caught: " << value << '\n';
    }
    return 0;
}
