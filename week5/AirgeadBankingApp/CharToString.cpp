//
// Created by peter tumulty on 7/12/22.
//
#include <iostream>
using namespace std;

string charToString(size_t n, char c) {
    int i = 1;
    string result = "";
    while(i <= n) {
        result += c;
        i++;
    };
    return result;
}
