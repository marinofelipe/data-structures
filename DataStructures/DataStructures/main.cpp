//
//  main.cpp
//  DataStructures
//
//  Created by Felipe Lefèvre Marino on 11/20/17.
//  Copyright © 2017 Felipe Lefèvre Marino. All rights reserved.
//

#include <iostream>

/*
/// INSERTION SORT - NONDECREASING ORDER ///
*/

int cards[6] = {31, 41, 59 , 26, 41, 58};

int main(int numargs, const char * args[]) {
    //argc -> number of elements
    //argv -> elements itself
    
    //0 is the first index and 5 the size of cards array - 1
    for (int cardIndex = 1; cardIndex < 6; cardIndex++) {
        int card = cards[cardIndex];
        
        //printing current card
        std::string text = "current card to be sorted: ";
        text += std::to_string(card);
        std::cout << text << std::endl;
        
        //insert into sorted sequence
        int sortingIndex = cardIndex - 1;
        while (sortingIndex >= 0 && cards[sortingIndex] > card) {
            cards[sortingIndex + 1] = cards[sortingIndex];
            sortingIndex--;
        }
        cards[sortingIndex + 1] = card;
    }
    
    //prints each element
    std::cout << "Sorted hand of cards: " << std::endl;
    for (const auto& e : cards) {
        std::cout << e << std::endl;
    }
    
    return 0;
}
