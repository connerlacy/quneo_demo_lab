/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  22 Aug 2013 1:05:33pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_QUNEOGRAPH_QUNEOGRAPH_E41F6DA5__
#define __JUCER_HEADER_QUNEOGRAPH_QUNEOGRAPH_E41F6DA5__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioEngine.h"
#include "Pad.h"

//[/Headers]

#include "ButtonGrid.h"
#include "Rotary.h"
#include "LongSlider.h"
#include "UpButton.h"
#include "DownButton.h"
#include "VerticalSlider.h"
#include "HorizontalSlider.h"
#include "LeftButton.h"
#include "RightButton.h"
#include "ModeButton.h"
#include "RecordButton.h"
#include "StopButton.h"
#include "PlayButton.h"
#include "RhombusButton.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class QuNeoGraph  : public Component,
                    public ActionListener
{
public:
    //==============================================================================
    QuNeoGraph (AudioEngine* audioEngine_);
    ~QuNeoGraph();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void actionListenerCallback(const String& message);
    Pad* getPad(int padNum);
    void setLongSliderSampler(Sampler*);

    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AudioEngine* audioEngine;
    //[/UserVariables]

    //==============================================================================
    ButtonGrid* buttonGrid;
    Rotary* rotary0;
    LongSlider* longSlider;
    UpButton* upButton0;
    UpButton* upButton1;
    DownButton* downButton0;
    DownButton* downButton1;
    VerticalSlider* vSlider3;
    VerticalSlider* vSlider2;
    VerticalSlider* vSlider0;
    VerticalSlider* vSlider1;
    HorizontalSlider* hSlider2;
    HorizontalSlider* hSlider3;
    HorizontalSlider* hSlider1;
    HorizontalSlider* hSlider0;
    LeftButton* leftButton0;
    RightButton* rightButton0;
    LeftButton* leftButton1;
    RightButton* rightButton1;
    LeftButton* leftButton2;
    RightButton* rightButton2;
    LeftButton* leftButton3;
    RightButton* rightButton3;
    ModeButton* modeButton;
    RecordButton* recordButton;
    StopButton* stopButton;
    PlayButton* playButton;
    Rotary* rotary1;
    RhombusButton* rhombusButton;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    QuNeoGraph (const QuNeoGraph&);
    const QuNeoGraph& operator= (const QuNeoGraph&);
};


#endif   // __JUCER_HEADER_QUNEOGRAPH_QUNEOGRAPH_E41F6DA5__
