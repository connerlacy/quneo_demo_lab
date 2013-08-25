/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  24 Aug 2013 4:25:48pm

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

#include "PluginMessage.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
void PluginMessage::setLabelText(String st)
{
    //label->setText(st, 0);
}
//[/MiscUserDefs]

//==============================================================================
PluginMessage::PluginMessage ()
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (726, 549);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PluginMessage::~PluginMessage()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PluginMessage::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xa2000000));

    g.setColour (Colour (0xaf000000));
    g.fillRoundedRectangle (0.0f, 0.0f, 726.0f, 549.0f, 20.5000f);

    g.setGradientFill (ColourGradient (Colour (0xffcac5c5),
                                       368.0f, 296.0f,
                                       Colour (0xff151515),
                                       16.0f, 16.0f,
                                       true));
    g.setFont (Font (31.9000f, Font::plain));
    g.drawText (L"Plug in your QuNeo to explore!",
                0, 245, 726, 30,
                Justification::centred, true);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PluginMessage::resized()
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

<JUCER_COMPONENT documentType="Component" className="PluginMessage" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="1" initialWidth="726" initialHeight="549">
  <BACKGROUND backgroundColour="a2000000">
    <ROUNDRECT pos="0 0 726 549" cornerSize="20.5" fill="solid: af000000" hasStroke="0"/>
    <TEXT pos="0 245 726 30" fill=" radial: 368 296, 16 16, 0=ffcac5c5, 1=ff151515"
          hasStroke="0" text="Plug in your QuNeo to explore!" fontname="Default font"
          fontsize="31.9" bold="0" italic="0" justification="36"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
