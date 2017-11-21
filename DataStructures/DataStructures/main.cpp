//
//  main.cpp
//  DataStructures
//
//  Created by Felipe Lefèvre Marino on 11/20/17.
//  Copyright © 2017 Felipe Lefèvre Marino. All rights reserved.
//

#include <iostream>

int cards[6] = {5, 2, 4 , 6, 1, 3};

int main(int numargs, const char * args[]) {
    //argc -> number of elements
    //argv -> cards to be sorted
    
    //0 beign the first index and 5 the size of cards array - 1
    for (int cardIndex = 0; cardIndex < 5; cardIndex++) {
        int card = cards[cardIndex];
        //insert into sorted sequence
        int sortingIndex = cardIndex - 1;
//        while (<#condition#>) {
//            <#statements#>
//        }
    }
    
    return 0;
}
