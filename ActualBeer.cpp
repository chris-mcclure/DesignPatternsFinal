//
//  ActualBeer.cpp
//  ProxyDesignPattern
//
//  Created by Chris McClure on 4/28/18.
//  Copyright © 2018 Chris McClure. All rights reserved.
//

#include "ActualBeer.h"

#include <utility>
using std::string;
using std::cout;
using std::endl;

ActualBeer::ActualBeer (double numOfDrinks, double abv, string  name)
: Drunk(numOfDrinks), _abv(abv), _name(std::move(name))
{}

ActualBeer::~ActualBeer()
{
    cout << "beer dtor! " << endl;
}

void ActualBeer::getDrunk()
{
    cout << "The abv of " << _name << " is " << _abv << "%" << endl;
    if(_name == "Summer Shandy")
    {
        cout << "but, " << _name << " isn't a real beer, you're drinking lemonade..." << endl;
        cout << endl;
    }
    else
    {
        cout << "you're probably getting drunk, current number of drinks is " << getNumDrinks() << endl;
        cout << endl;
    }
}
