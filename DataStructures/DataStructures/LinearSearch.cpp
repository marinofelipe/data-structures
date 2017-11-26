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

int A[6] = {31, 41, 59 , 26, 41, 58};

int main(int numargs, const char * args[]) {
    //argc -> number of elements
    //argv -> elements itself
    ///argv contains a value to be compared with the array. The value is defined in the scheme arguments
    
    //prints each array element
    cout << "Array A:";
    string txt = "";
    for (const auto& e : A) {
        txt += " " + to_string(e);
    }
    cout << txt << endl;
    
    //value v
    stringstream strValue;
    strValue << args[1];
    
    unsigned int v;
    strValue >> v;
    cout << "value = " + to_string(v) << endl;
    
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
