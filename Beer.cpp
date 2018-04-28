////
////  main.cpp
////  ProxyDesignPattern
////
////  Created by Chris McClure on 4/27/18.
////  Copyright © 2018 Chris McClure. All rights reserved.
////
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Drunk{
public:
    virtual void getDrunk() = 0;
};

class ActualBeer : public Drunk{
    double _numOfDrinks;
public:
    explicit ActualBeer(double b)
    {
        _numOfDrinks = b;
        cout << "beer ctor: num of drinks is " << _numOfDrinks << endl;
    }

    ~ActualBeer()
    {
        cout << "beer dtor! " << endl;
    }

    void getDrunk() override
    {
        cout << "getting drunk, current number of drinks is " << _numOfDrinks << endl;
    }
};

class SummerShandyProxy : public Drunk{
    ActualBeer *beerPtr;
    int _numOfDrinks;
    double fakeToRealRatio = 4;
public:
    explicit SummerShandyProxy(int numOfDrinks)
    {
        _numOfDrinks = numOfDrinks;
        beerPtr = 0;
        beerPtr = new ActualBeer(_numOfDrinks/fakeToRealRatio);
    }
    
    ~SummerShandyProxy()
    {
        delete beerPtr;
    }
    
    void getDrunk() override
    {
        beerPtr->getDrunk();
    }
};


