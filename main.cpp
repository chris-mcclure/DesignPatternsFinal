//
//  main.cpp
//  ProxyDesignPattern
//
//  Created by Chris McClure on 4/28/18.
//  Copyright © 2018 Chris McClure. All rights reserved.
//
#include "SummerShandyProxy.hpp"
int main()
{
    SummerShandyProxy beers[3] = {SummerShandyProxy(4, 4.30, "PBR"),
        SummerShandyProxy(12, 1.1, "Summer Shandy"), SummerShandyProxy(3, 6.00, "Milk Stout") };
    for(int i = sizeof(beers)/sizeof(*beers); i >= 0; i--){
        if(i == 0)
            break;
        beers[i-1].getDrunk();
        
    }
}
