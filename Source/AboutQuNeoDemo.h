/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  24 Aug 2013 8:58:35pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_ABOUTQUNEODEMO_ABOUTQUNEODEMO_9D253283__
#define __JUCER_HEADER_ABOUTQUNEODEMO_ABOUTQUNEODEMO_9D253283__

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
class AboutQuNeoDemo  : public Component
{
public:
    //==============================================================================
    AboutQuNeoDemo ();
    ~AboutQuNeoDemo();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    bool animateOn;
    int32 color;
    uint8 rd;
    uint8 gn;
    uint8 bl;
    void animate();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    //[/UserVariables]

    //==============================================================================
    Label* label;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    AboutQuNeoDemo (const AboutQuNeoDemo&);
    const AboutQuNeoDemo& operator= (const AboutQuNeoDemo&);
};


#endif   // __JUCER_HEADER_ABOUTQUNEODEMO_ABOUTQUNEODEMO_9D253283__
