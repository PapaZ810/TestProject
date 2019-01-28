//
//  Controller.hpp
//  TestProject
//
//  Created by Durham, Zachary on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
using namespace std;

class Controller
{
private:
    vector<int> numList = {1, 2, 3, 4, 5};
    vector<string> wordList = {"Adam", "Bob", "Carson", "Dave", "Ethan"};
    string words [5];
public:
    void start();
};

#endif /* Controller_hpp */
