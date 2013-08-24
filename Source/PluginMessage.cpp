/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  23 Aug 2013 8:47:26pm

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
    label->setText(st, 0);
}
//[/MiscUserDefs]

//==============================================================================
PluginMessage::PluginMessage ()
    : label (0)
{
    addAndMakeVisible (label = new Label (L"new label",
                                          L"Plug in your QuNeo and explore"));
    label->setFont (Font (L"Opal", 27.3000f, Font::plain));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colour (0x0));
    label->setColour (Label::textColourId, Colour (0x680d0d0d));
    label->setColour (Label::outlineColourId, Colour (0x808080));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x0));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (726, 500);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PluginMessage::~PluginMessage()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (label);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PluginMessage::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.setGradientFill (ColourGradient (Colours::white,
                                       363.0f, 250.0f,
                                       Colour (0xffffff),
                                       136.0f, 232.0f,
                                       true));
    g.fillRect (-1, 3, 726, 493);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PluginMessage::resized()
{
    label->setBounds (0, 216, 726, 40);
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
                 fixedSize="1" initialWidth="726" initialHeight="500">
  <BACKGROUND backgroundColour="ffffff">
    <RECT pos="-1 3 726 493" fill=" radial: 363 250, 136 232, 0=ffffffff, 1=ffffff"
          hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="ff5a898eea21848" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="0 216 726 40" bkgCol="0" textCol="680d0d0d"
         outlineCol="808080" edTextCol="ff000000" edBkgCol="0" labelText="Plug in your QuNeo to explore"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Opal" fontsize="27.3" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
