/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  12 Aug 2013 2:43:47pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PlayButton.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PlayButton::PlayButton (AudioEngine* audioEngine_)
    : audioEngine(audioEngine_)
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    pressure = 0;
    state = false;
    //[/Constructor]
}

PlayButton::~PlayButton()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PlayButton::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    if(!state)
    {
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2b2b2b));

    g.setGradientFill (ColourGradient (Colours::white,
                                       40.0f, 32.0f,
                                       Colour (0xffe4e4e4),
                                       56.0f, 24.0f,
                                       true));
    g.fillPath (internalPath1);
    g.setColour (Colour (0xff777777));
    g.strokePath (internalPath1, PathStrokeType (3.0000f, PathStrokeType::curved, PathStrokeType::rounded));

    //[UserPaint] Add your own custom painting code here..
}
else
{
    g.setGradientFill (ColourGradient (Colours::white,
                                       40.0f, 32.0f,
                                       Colour (0xffe4e4e4),
                                       56.0f, 24.0f,
                                       true));
    g.fillPath (internalPath1);

    g.setGradientFill (ColourGradient (Colour (0xe0ffffff),
                                       50.0f, 50.0f,
                                       //x, y,
                                       Colour(0xD000ff00),
                                       75.0f, 75.0f,
                                       true));

    //Draw pad border
    g.strokePath (internalPath1, PathStrokeType (4.0000f, PathStrokeType::curved, PathStrokeType::rounded));

    g.setGradientFill (ColourGradient (Colour (0x309d9d9d),
                                       50.0f, 50.0f,
                                       //x, y,
                                       Colours::red,
                                       150.0f, 50.0f,
                                       true));

    //Pressure
    g.fillEllipse(17.0f - pressure/2.0f, 24.0f - pressure/2.0f, pressure, pressure);

    //g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)100));

    g.setGradientFill (ColourGradient (Colour (0x309d9d9d),
                                       50.0f, 50.0f,
                                       //x, y,
                                       Colours::red,
                                       150.0f, 50.0f,
                                       true));

    //Pressure border
    g.drawEllipse(17.0f - pressure/2.0f, 24.0f - pressure/2.0f, pressure, pressure,pressure/7.0f);

    g.setColour(Colour (0xff101010));
    g.strokePath (internalPath1, PathStrokeType (1.0000f, PathStrokeType::curved, PathStrokeType::rounded));
}
    //[/UserPaint]
}

void PlayButton::resized()
{
    internalPath1.clear();
    internalPath1.startNewSubPath (8.0f, 8.0f);
    internalPath1.lineTo (32.0f, 24.0f);
    internalPath1.lineTo (8.0f, 40.0f);
    internalPath1.closeSubPath();

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void PlayButton::setState(bool st)
{
    state = st;
    if(state)
    {
        audioEngine->synth.noteOn(1,1,100.00/127.00);
    }
    this->repaint();
}

void PlayButton::setPressure(float p)
{
    pressure = p/127.0f*38.0f;
    this->repaint();
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PlayButton" componentName=""
                 parentClasses="public Component" constructorParams="AudioEngine* audioEngine_"
                 variableInitialisers="audioEngine(audioEngine_)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff2b2b2b">
    <PATH pos="0 0 100 100" fill=" radial: 40 32, 56 24, 0=ffffffff, 1=ffe4e4e4"
          hasStroke="1" stroke="3, curved, rounded" strokeColour="solid: ff777777"
          nonZeroWinding="1">s 8 8 l 32 24 l 8 40 x</PATH>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
