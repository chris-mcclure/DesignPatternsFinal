//
//  ActualBeer.h
//  ProxyDesignPattern
//
//  Created by Chris McClure on 4/28/18.
//  Copyright © 2018 Chris McClure. All rights reserved.
//
#include "Drunk.hpp"

#ifndef ActualBeer_h
#define ActualBeer_h

class ActualBeer : public Drunk{
    double _abv;
    std::string _name;
public:
    ActualBeer(double numOfDrinks, double abv, std::string  name);
    ActualBeer(const ActualBeer & copy) = default;
    ActualBeer & operator=(const ActualBeer & copy) = default;
    ActualBeer(ActualBeer && other) = default;
    ActualBeer & operator=(ActualBeer && other) = default;
    ~ActualBeer();
    void getDrunk();
};
#endif /* ActualBeer_h */
