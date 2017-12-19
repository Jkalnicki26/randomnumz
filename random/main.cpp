//
//  main.cpp
//  random
//
//  Created by Jack Kalnicki on 12/19/17.
//  Copyright © 2017 Jack Kalnicki. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string random(string x, string y)
{
    int xnum = rand();
    int ynum = rand();
    string winner;
    if(xnum > ynum)
    {
        winner = x;
    }
    if(ynum > xnum)
    {
        winner = y;
    }
    if(xnum == ynum)
    {
        winner = "Tie";
    }
    return winner;
    
}


int main() {
    
    cout << random("p1", "p2") << " has won!\n";
    cout << random("p1", "p2") << " has won!\n";
    cout << random("p1", "p2") << " has won!\n";
    cout << random("p1", "p2") << " has won!\n";
    cout << random("p1", "p2") << " has won!\n";

    
    return 0;
}
