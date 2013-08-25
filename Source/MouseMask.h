/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  24 Aug 2013 7:27:46pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_MOUSEMASK_MOUSEMASK_358E5901__
#define __JUCER_HEADER_MOUSEMASK_MOUSEMASK_358E5901__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "AboutQuNeoDemo.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MouseMask  : public Component,
                   public Timer
{
public:
    //==============================================================================
    MouseMask (AboutQuNeoDemo* dw_);
    ~MouseMask();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    
    Random rd;
    Random gn;
    Random bl;
    
    uint8 rand_rd;
    uint8 rand_gn;
    uint8 rand_bl;
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void mouseMove (const MouseEvent& e);
    void mouseDown (const MouseEvent& e);
    void timerCallback();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AboutQuNeoDemo* dw;
    bool visible;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    MouseMask (const MouseMask&);
    const MouseMask& operator= (const MouseMask&);
};


#endif   // __JUCER_HEADER_MOUSEMASK_MOUSEMASK_358E5901__
