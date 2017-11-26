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

int main(int numargs, const char * args[]) {
    //value v
    stringstream strValue;
    strValue << args[1];
    
    unsigned int v;
    strValue >> v;
    cout << "value = " + to_string(v) << endl;
    
    //array of elements
    int A[numargs - 2];
    cout << "Array A:";
    string txt = "";
    for (int index = 2; index < numargs; index ++) {
        stringstream strValue;
        strValue << args[index];
        
        unsigned int v;
        strValue >> v;
        
        txt += " " + to_string(v);
        A[index - 2] = v;
    }
    cout << txt << endl;
    
    //0 is the first index and 5 the size of cards array - 1
    for (int index = 0; index < 6; index++) {
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
