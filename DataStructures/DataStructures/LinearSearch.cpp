//
//  LinearSearch.cpp
//  Linear search
//
//  Created by Felipe Lefèvre Marino on 11/25/17.
//  Copyright © 2017 Felipe Lefèvre Marino. All rights reserved.
//

#include <iostream>
#include <sstream>

using namespace std;

/*
/// LINEAR SEARCH ///
*/

////This program receives as arguments:
///  index 1            - value to be searched in the array
///  indexes 2..last    - numbers that will be part of the sequence to be searched
////

void setValue(unsigned int * value, const char * arg) {
    stringstream strValue;
    strValue << arg;
    
    strValue >> *value;
    cout << "value = " + to_string(*value) << endl;
}

void setArrayOfNumbers(int numargs, const char * args[], int * array) {
    cout << "Array A:";
    string txt = "";
    for (int index = 2; index < numargs; index ++) {
        stringstream strValue;
        strValue << args[index];
        
        unsigned int v;
        strValue >> v;
        
        txt += " " + to_string(v);
        array[index - 2] = v;
    }
    cout << txt << endl;
}

int main(int numargs, const char * args[]) {
    //value v
    unsigned int v;
    setValue(&v, args[1]);
    
    //array of elements
    const int size = numargs - 2;
    int A[size];
    setArrayOfNumbers(numargs, args, A);
    
    //iterates array to see if it contains value
    for (int index = 0; index < size; index++) {
        //printing current sequence number
        string text = "current number: ";
        text += to_string(A[index]);
        cout << text << endl;
        
        //verify if number is equal value
        if (A[index] == v) {
            string txt = "Index ";
            txt += to_string(index);
            txt += " has value ";
            txt += to_string(v);
            txt += " which is equal current number ";
            txt += to_string(A[index]);
            cout << txt << endl;
            
            return 0;
        }
    }
    cout << "NIL" << endl;
    return 0;
}
