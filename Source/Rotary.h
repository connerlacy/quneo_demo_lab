/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  12 Aug 2013 2:43:46pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_ROTARY_ROTARY_F39B44BB__
#define __JUCER_HEADER_ROTARY_ROTARY_F39B44BB__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioEngine.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Rotary  : public Component
{
public:
    //==============================================================================
    Rotary (AudioEngine* audioEngine_, int instace_);
    ~Rotary();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    AudioEngine* audioEngine;
    void setState(bool st);
    void setPressure(float p);
    void setLocation(float loc);
    void setDirection(float dir);
    
    void directionChanged();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    bool state;
    float pressure;
    float location;
    float direction;
    int instance;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    Rotary (const Rotary&);
    const Rotary& operator= (const Rotary&);
};


#endif   // __JUCER_HEADER_ROTARY_ROTARY_F39B44BB__
