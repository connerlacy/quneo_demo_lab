/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  14 Aug 2013 12:50:31pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_BUTTONGRID_BUTTONGRID_86D717E5__
#define __JUCER_HEADER_BUTTONGRID_BUTTONGRID_86D717E5__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioEngine.h"
//[/Headers]

#include "Pad.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ButtonGrid  : public Component,
                    public ActionListener,
                    public MultiTimer
{
public:
    //==============================================================================
    ButtonGrid (AudioEngine* audioEngine_);
    ~ButtonGrid();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void actionListenerCallback(const String& message);
    void setPadState(int padNum, bool state);
    void setX(int padNum,float xLoc);
    void setY(int padNum,float yLoc);
    void setPressure(int padNum,float pressure);

    void timerCallback(int timerID);
    
    Pad* getPad(int padNum);

    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AudioEngine* audioEngine;
    Pad* pads[16];
    int padTime[16];
    int repeatTime[16];
    bool repeat[16];
    //[/UserVariables]

    //==============================================================================
    Pad* pad12;
    Pad* pad13;
    Pad* pad14;
    Pad* pad15;
    Pad* pad8;
    Pad* pad9;
    Pad* pad10;
    Pad* pad11;
    Pad* pad4;
    Pad* pad5;
    Pad* pad6;
    Pad* pad7;
    Pad* pad0;
    Pad* pad1;
    Pad* pad2;
    Pad* pad3;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    ButtonGrid (const ButtonGrid&);
    const ButtonGrid& operator= (const ButtonGrid&);
};


#endif   // __JUCER_HEADER_BUTTONGRID_BUTTONGRID_86D717E5__
