/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  12 Aug 2013 2:43:40pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_VERTICALSLIDER_VERTICALSLIDER_8A0EBC5A__
#define __JUCER_HEADER_VERTICALSLIDER_VERTICALSLIDER_8A0EBC5A__

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
class VerticalSlider  : public Component
{
public:
    //==============================================================================
    VerticalSlider (AudioEngine* audioEngine_);
    ~VerticalSlider();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setState(bool st);
    void setLoc(float loc);
    void setPressure(float p);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AudioEngine* audioEngine;
    bool state;
    float location;
    float pressure;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    VerticalSlider (const VerticalSlider&);
    const VerticalSlider& operator= (const VerticalSlider&);
};


#endif   // __JUCER_HEADER_VERTICALSLIDER_VERTICALSLIDER_8A0EBC5A__
