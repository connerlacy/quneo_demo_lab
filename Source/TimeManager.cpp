//
//  TimeManager.cpp
//  QuNeoDemo
//
//  Created by Conner Lacy on 8/12/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "TimeManager.h"

TimeManager::TimeManager()
{
    barLength = 2200;
    
    masterTime = 0;
    quarterTime = 0;
    eighthTime = 0;
    sixteenthTime = 0;
    thirtySecondTime = 0;
    
    quarterLength = barLength/4;
    eighthLength = barLength/8;
    sixteenthLength = barLength/16;
    thirtySecondLength = barLength/32;
}

TimeManager::~TimeManager()
{
    
}

void TimeManager::timerCallback()
{
    if(masterTime > barLength)
    {
        masterTime = -1;
        sendActionMessage(String("bar"));
    }
    
    if(quarterTime > quarterLength)
    {
        quarterTime = -1;
        sendActionMessage(String("quarter"));
    }
    
    if(eighthTime > eighthLength)
    {
        eighthTime = -1;
        sendActionMessage(String("eighth"));
    }
    
    if(sixteenthTime > sixteenthLength)
    {
        sixteenthTime = -1;
        sendActionMessage(String("sixteenth"));
    }
    
    if(thirtySecondTime > thirtySecondLength)
    {
        thirtySecondTime = -1;
        sendActionMessage(String("thirtysecond"));
    }
    
    masterTime++;
    quarterTime++;
    eighthTime++;
    sixteenthTime++;
    thirtySecondTime++;
}

void TimeManager::startClock()
{
    this->startTimer(1);
}