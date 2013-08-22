/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  12 Aug 2013 2:43:45pm

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

#include "ModeButton.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ModeButton::ModeButton (AudioEngine* audioEngine_)
    : audioEngine(audioEngine_)
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

ModeButton::~ModeButton()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ModeButton::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2b2b2b));

    g.setGradientFill (ColourGradient (Colours::white,
                                       16.0f, 16.0f,
                                       Colour (0xffe4e4e4),
                                       32.0f, 24.0f,
                                       true));
    g.fillEllipse (5.0f, 5.0f, 25.0f, 25.0f);

    g.setColour (Colour (0xff777777));
    g.drawEllipse (5.0f, 5.0f, 25.0f, 25.0f, 3.0000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ModeButton::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ModeButton" componentName=""
                 parentClasses="public Component" constructorParams="AudioEngine* audioEngine_"
                 variableInitialisers="audioEngine(audioEngine_)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff2b2b2b">
    <ELLIPSE pos="5 5 25 25" fill=" radial: 16 16, 32 24, 0=ffffffff, 1=ffe4e4e4"
             hasStroke="1" stroke="3, mitered, butt" strokeColour="solid: ff777777"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
