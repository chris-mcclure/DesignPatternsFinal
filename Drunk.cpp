//
//  Drunk.cpp
//  ProxyDesignPattern
//
//  Created by Chris McClure on 4/28/18.
//  Copyright © 2018 Chris McClure. All rights reserved.
//

#include "Drunk.h"
Drunk::Drunk(double num)
{
    _numOfDrinks = num;
}
double Drunk::getNumDrinks()
{
    return _numOfDrinks;
}

void Drunk::setNumDrinks(double num)
{
    _numOfDrinks = num;
}
