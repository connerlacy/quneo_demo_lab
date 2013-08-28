/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  28 Aug 2013 4:07:13pm

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

#include "AboutQuNeoDemo.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
AboutQuNeoDemo::AboutQuNeoDemo ()
    : label (0)
{
    addAndMakeVisible (label = new Label (L"new label",
                                          L"\nKeith McMillen Instruments\' QuNeo Demo\n\nWritten By:\nConner Lacy | conner@keithmcmillen.com\n[source available @ github.com/connerlacy]\n\nThanks to:\n\nDustin Schultz | dustin@keithmcmillen.com\nMatt Hettich | matt@keithmcmillen.com\n\nfor their audio contributions."));
    label->setFont (Font (12.5000f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colour (0x95ffffff));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x0));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (256, 169);


    //[Constructor] You can add your own custom stuff here..
    animateOn = false;
    color = 0xa6000000;
    rd = 0x00000000;
    gn = 0x00000000;
    bl = 0x00000000;

    //[/Constructor]
}

AboutQuNeoDemo::~AboutQuNeoDemo()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (label);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void AboutQuNeoDemo::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    if (0)
    {

    //[/UserPrePaint]

    g.setGradientFill (ColourGradient (Colour (0xa6000000),
                                       0.0f, 0.0f,
                                       Colour (0xd26c6c6c),
                                       256.0f, 136.0f,
                                       false));
    g.fillRoundedRectangle (2.0f, 2.0f, 252.0f, 165.0f, 5.5000f);

    g.setColour (Colour (0xb3000000));
    g.drawRoundedRectangle (2.0f, 2.0f, 252.0f, 165.0f, 5.5000f, 1.0000f);

    //[UserPaint] Add your own custom painting code here..
    }
    else
    {
        //rd <<= 4;
        //color =  0xff000000 | rd | gn | bl;

        g.setGradientFill (ColourGradient (Colour (rd, gn, bl),
                                           0.0f, 0.0f,
                                           Colour (0xd26c6c6c),
                                           256.0f, 136.0f,
                                           false));
        g.fillRoundedRectangle (2.0f, 2.0f, 252.0f, 165.0f, 5.5000f);

        g.setColour (Colour (0xb3000000));
            g.drawRoundedRectangle (2.0f, 2.0f, 252.0f, 165.0f, 5.5000f, 1.0000f);
    }
    //[/UserPaint]
}

void AboutQuNeoDemo::resized()
{
    label->setBounds (10, 9, 286, 151);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void AboutQuNeoDemo::animate()
{
    this->repaint();
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AboutQuNeoDemo" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="1" initialWidth="256" initialHeight="169">
  <BACKGROUND backgroundColour="ffffff">
    <ROUNDRECT pos="2 2 252 165" cornerSize="5.5" fill="linear: 0 0, 256 136, 0=a6000000, 1=d26c6c6c"
               hasStroke="1" stroke="1, mitered, butt" strokeColour="solid: b3000000"/>
  </BACKGROUND>
  <LABEL name="new label" id="77bd41297d7ab657" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="10 9 286 151" textCol="95ffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="&#10;Keith McMillen Instruments' QuNeo Demo&#10;&#10;Written By:&#10;Conner Lacy | conner@keithmcmillen.com&#10;[source available @ github.com/connerlacy]&#10;&#10;Thanks to:&#10;&#10;Dustin Schultz | dustin@keithmcmillen.com&#10;Matt Hettich | matt@keithmcmillen.com&#10;&#10;for their audio contributions."
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="12.5" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
