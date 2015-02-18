//
//  main.cpp
//  YELP!
//
//  Created by Raymond Borkowski on 2/18/15.
//  Copyright (c) 2015 Raymond Borkowski. All rights reserved.
//
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//n strings from input
//naive solution using sort Which is O(nlogn)
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string wordOne, wordTwo;
    cin >> wordOne;
    cin>> wordTwo;
    
    transform(wordOne.begin(), wordOne.end(), wordOne.begin(), ::tolower);
    transform(wordTwo.begin(), wordTwo.end(), wordTwo.begin(), ::tolower);
    
    sort(wordOne.begin(),wordOne.end());
    sort(wordTwo.begin(),wordTwo.end());
    if(wordOne == wordTwo)
        cout<<"true\n";
    else
        cout<<"false\n";
    return 0;
}