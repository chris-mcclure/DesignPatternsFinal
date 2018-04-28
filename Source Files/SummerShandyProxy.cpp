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
    double _numOfDrinks;
public:
    Drunk() = default;
    Drunk(double num)
    {
        _numOfDrinks = num;
    }
    
    virtual void getDrunk() = 0;
    double getNumDrinks()
    {
        return _numOfDrinks;
    }
    
    void setNumDrinks(double num){
        _numOfDrinks = num;
    }
};

class ActualBeer : public Drunk{
    double _abv;
    string _name;
public:
    ActualBeer(double numOfDrinks, double abv, const string & name)
    : Drunk(numOfDrinks), _abv(abv), _name(name)
    {}

    ~ActualBeer()
    {
        cout << "beer dtor! " << endl;
    }

    void getDrunk() override
    {
        cout << "The abv of " << _name << " is " << _abv << endl;
        if(_name == "Summer Shandy")
        {
            cout << "but, " << _name << " isn't a real beer, you're drinking lemonade..." << endl;
        }
        else
            cout << "you're probably getting drunk, current number of drinks is " << getNumDrinks() << endl;
    }
};

class SummerShandyProxy : public Drunk{
    ActualBeer *beerPtr;
    int _numOfDrinks;
    double _abv;
    string _name;
public:
    SummerShandyProxy(int numOfDrinks, double abv, const string & name)
    : _numOfDrinks(numOfDrinks), _abv(abv), _name(name), beerPtr(nullptr)
    {
        beerPtr = new ActualBeer(_numOfDrinks, _abv, _name);
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


