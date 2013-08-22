/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  7 Aug 2013 7:03:18pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_PAD_PAD_F780C96__
#define __JUCER_HEADER_PAD_PAD_F780C96__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Pad  : public Component
{
public:
    //==============================================================================
    Pad ();
    ~Pad();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setState(bool state);
    void setX(float xLoc);
    void setY(float yLoc);
    void setPressure(float p);
    void setRepeat(bool);
    
    float getPressure();
    bool getState();
    float getX();
    float getY();
    bool getRepeat();
    
    
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    bool on;
    float     x;
    float     y;
    float     pressure;
    bool      repeat;
    
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    Pad (const Pad&);
    const Pad& operator= (const Pad&);
};


#endif   // __JUCER_HEADER_PAD_PAD_F780C96__
