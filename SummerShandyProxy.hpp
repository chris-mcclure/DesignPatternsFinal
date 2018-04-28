//
//  SummerShandyProxy.h
//  ProxyDesignPattern
//
//  Created by Chris McClure on 4/28/18.
//  Copyright © 2018 Chris McClure. All rights reserved.
//
#include "ActualBeer.hpp"
#include "Drunk.hpp"
#ifndef SummerShandyProxy_h
#define SummerShandyProxy_h

class SummerShandyProxy : public Drunk{
    ActualBeer *beerPtr;
    int _numOfDrinks;
    double _abv;
    std::string _name;
public:
    SummerShandyProxy(int numOfDrinks, double abv, const std::string & name);
    SummerShandyProxy(const SummerShandyProxy & copy) = default;
    SummerShandyProxy & operator=(const SummerShandyProxy & copy) = default;
    SummerShandyProxy(SummerShandyProxy && other) = default;
    SummerShandyProxy & operator=(SummerShandyProxy && other) = default;
    ~SummerShandyProxy();
    void getDrunk();
};
#endif /* SummerShandyProxy_h */
