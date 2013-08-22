//
//  TimeManager.h
//  QuNeoDemo
//
//  Created by Conner Lacy on 8/12/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#ifndef __TIMEMANAGER
#define __TIMEMANAGER

#include "../JuceLibraryCode/JuceHeader.h"

class TimeManager : public Component,
                    public ActionBroadcaster,
                    public Timer
{
public:
    TimeManager();
    ~TimeManager();
    
    void timerCallback();
    void startClock();
    
    int barLength;
    int quarterLength;
    int eighthLength;
    int sixteenthLength;
    int thirtySecondLength;
    
    int masterTime;
    int quarterTime;
    int eighthTime;
    int sixteenthTime;
    int thirtySecondTime;
    
};

#endif //__TIMEMANAGER