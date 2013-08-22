/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  14 Aug 2013 12:51:34pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_LONGSLIDER_LONGSLIDER_8A8F3112__
#define __JUCER_HEADER_LONGSLIDER_LONGSLIDER_8A8F3112__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioEngine.h"
#include "Sampler.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class LongSlider  : public Component,
                    public MultiTimer
{
public:
    //==============================================================================
    LongSlider (AudioEngine* audioEngine_);
    ~LongSlider();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setState(bool st);
    void setLoc(float loc);
    void setPressure(float p);
    void setWidth(float wid);
    
    void timerCallback(int timerID);
    void setSampler(Sampler* smplr);
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
    float width;
    bool togState;

    bool isPlaying;
    
    Sampler* sampler;
    
    Reverb::Parameters params;
    
    
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    LongSlider (const LongSlider&);
    const LongSlider& operator= (const LongSlider&);
};


#endif   // __JUCER_HEADER_LONGSLIDER_LONGSLIDER_8A8F3112__
