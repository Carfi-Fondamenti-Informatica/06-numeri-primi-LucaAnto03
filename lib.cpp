#include "lib.h"
#include <iostream>

using namespace std;
void primo (int n) {
    int i = 1, resto=0;
    do {
    i++;
    resto=n%i;
    } while(resto);
    if (n==i) {
        cout << "numero primo" << endl;
        return;
    } else {
        cout << "numero non primo" << endl;
        return;
    }
}
