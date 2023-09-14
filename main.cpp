//
//  main.cpp
//  Assignment1
//
//  Created by Khaled  Nana  on 12/09/2023.
//

#include <iostream>
#include <stack>
#include "Stackt.hpp"

int main() {
    
    cout<<"Input Number of disks: ";
    int x;
    cin>>x;
    int N = x;
    
    Stackt<int> pegA, pegB, pegC;
    for (int i = N; i >= 1; i--) {
        pegA.push(i);
    }

    towersOfHanoi(N, pegA, pegC, pegB);

    return 0;
}
