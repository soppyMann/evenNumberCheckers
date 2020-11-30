#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Scrie un număr: ";
    cin >> n;
    
    if (n % 2 == 0)
        cout << n << " este par.\n";
    else
        cout << n << " este impar.\n";
    
    return 0;
}
