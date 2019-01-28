//
//  Controller.cpp
//  TestProject
//
//  Created by Durham, Zachary on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    for (int n = 0; n < numList.size(); n++)
    {
        cout << numList[n] << endl;
    }
    for (int n = 0; n < wordList.size(); n++)
    {
        words[n] = wordList[n];
        cout << wordList[n] << endl;
    }
}
