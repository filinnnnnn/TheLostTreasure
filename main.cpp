//
//  main.cpp
//  TheLostTresure
//
//  Created by user on 18.09.2020.
//  Copyright © 2020 user. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    std::string leader;
    
    std::cout << "Welcome to The Lost Treasure!\n\n" << std::endl;
    std::cout << "Please, enter the folowing for your personalized adventure:\n";
    std::cout << "Enter a number: ";
    std::cin >> adventurers;
    std::cout << "Enter a number, smaller then the first: ";
    std::cin >> killed;
    survivors = adventurers - killed;
    std::cout << "Enter your last name: ";
    std::cin >> leader;
    
    std::cout << "\nA brave grup of " << adventurers << " set out on a quest ";
    std::cout << "-- in search of the lost treasure of Ancient Devil.";
    std::cout << "The group was leaded by thet legendary rogue, " << leader << "\n";
    std::cout << "\nAlong the way, a band of marauding ogres ambused the patry. ";
    std::cout << "All fought bravely under the command of " << leader;
    std::cout << ", and the ogres were defeted, but at a cost. ";
    std::cout << "Of the adventurers, " << killed << " were vanquished, ";
    std::cout << "leaving just " << survivors << " in the group.\n";
    std::cout << "\nThe party was about to give up all hope. ";
    std::cout << "But while laying the decasedto rest, ";
    std::cout << "they stumled upon the buried fortune. ";
    std::cout << "So the adveturers split " << GOLD_PIECES << " gold pieces.";
    std::cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    std::cout << " pieces to keep things fair of course.\n";
    
    int first, second, third;
    std::cout << "\n\nCan you write three different numbers?\n";
    std::cout << "First one: : ";
    std::cin >> first;
    std::cout << "Second... : ";
    std::cin >> second;
    std::cout << "...and the last one:";
    std::cin >> third;
    std::cout << "Few second, youre answer: " << ((first + second + third) / 3) << std::endl;
    
    return 0;
    
}
