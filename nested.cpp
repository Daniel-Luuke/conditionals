#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a>b && b>c) cout << "Path 1";
    else if (a>b && a>c) cout << "Path 2";
    else if (a>b) cout << "Path 3";
    else if (a>c) cout << "Path 4";
    else if (b>c) cout << "Path 5";
    else cout << "Path 6";
    return 0;
}