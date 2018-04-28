//
//  Drunk.h
//  ProxyDesignPattern
//
//  Created by Chris McClure on 4/28/18.
//  Copyright © 2018 Chris McClure. All rights reserved.
//
#include <iostream>
#include <memory>
#include <string>

#ifndef Drunk_h
#define Drunk_h
class Drunk{
    double _numOfDrinks;
public:
    Drunk() = default;
    explicit Drunk(double num);
    double getNumDrinks();
    void setNumDrinks(double num);
};


#endif /* Drunk_h */
