//
//  Stackt.hpp
//  Assignment1
//
//  Created by Khaled  Nana  on 12/09/2023.
//

#ifndef Stackt_hpp
#define Stackt_hpp
#include <stack>
#include <iostream>
using namespace std;
template <typename T>
class Stackt {
private:
    stack<T> items;

public:
    bool isEmpty() const {
        return items.empty();
    }

    void push(const T& item) {
        items.push(item);
    }

    T pop() {
        if (!isEmpty()) {
            T top = items.top();
            items.pop();
            return top;
        } else {
            throw runtime_error("Pop from empty stack");
        }
    }

    T peek() const {
        if (!isEmpty()) {
            return items.top();
        } else {
            throw runtime_error("Push from empty stack");
        }
    }
    size_t size() const {
        return items.size();
    }
};

void towersOfHanoi(int N, Stackt<int>& source, Stackt<int>& target, Stackt<int>& aux) {
    if (N == 1) {
        int disk = source.pop();
        target.push(disk);
        cout << "Move disk " << disk << " from source to target" << endl;
    } else {
        towersOfHanoi(N - 1, source, aux, target);
        int disk = source.pop();
        target.push(disk);
        cout << "Move disk "<< disk <<" from source to target" << endl;
        towersOfHanoi(N - 1, aux, target, source);
    }
}

#include <stdio.h>

#endif /* Stackt_hpp */
