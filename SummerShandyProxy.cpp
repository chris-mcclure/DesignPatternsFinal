////
////  main.cpp
////  ProxyDesignPattern
////
////  Created by Chris McClure on 4/27/18.
////  Copyright © 2018 Chris McClure. All rights reserved.
////
#include "SummerShandyProxy.hpp"
using std::string;

SummerShandyProxy::SummerShandyProxy(int numOfDrinks, double abv, const string & name)
: beerPtr(nullptr), _numOfDrinks(numOfDrinks), _abv(abv), _name(name)
{
    beerPtr = new ActualBeer(_numOfDrinks, _abv, _name);
}

SummerShandyProxy::~SummerShandyProxy()
{
    delete beerPtr;
}

void SummerShandyProxy::getDrunk() 
{
    beerPtr->getDrunk();
}

