/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  14 Aug 2013 12:50:31pm

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

#include "ButtonGrid.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ButtonGrid::ButtonGrid (AudioEngine* audioEngine_)
    : audioEngine(audioEngine_),
      pad12 (0),
      pad13 (0),
      pad14 (0),
      pad15 (0),
      pad8 (0),
      pad9 (0),
      pad10 (0),
      pad11 (0),
      pad4 (0),
      pad5 (0),
      pad6 (0),
      pad7 (0),
      pad0 (0),
      pad1 (0),
      pad2 (0),
      pad3 (0)
{
    addAndMakeVisible (pad12 = new Pad());
    addAndMakeVisible (pad13 = new Pad());
    addAndMakeVisible (pad14 = new Pad());
    addAndMakeVisible (pad15 = new Pad());
    addAndMakeVisible (pad8 = new Pad());
    addAndMakeVisible (pad9 = new Pad());
    addAndMakeVisible (pad10 = new Pad());
    addAndMakeVisible (pad11 = new Pad());
    addAndMakeVisible (pad4 = new Pad());
    addAndMakeVisible (pad5 = new Pad());
    addAndMakeVisible (pad6 = new Pad());
    addAndMakeVisible (pad7 = new Pad());
    addAndMakeVisible (pad0 = new Pad());
    addAndMakeVisible (pad1 = new Pad());
    addAndMakeVisible (pad2 = new Pad());
    addAndMakeVisible (pad3 = new Pad());

    //[UserPreSize]
    //[/UserPreSize]

    setSize (400, 400);


    //[Constructor] You can add your own custom stuff here..
    pads[0] = pad0;
    pads[1] = pad1;
    pads[2] = pad2;
    pads[3] = pad3;
    pads[4] = pad4;
    pads[5] = pad5;
    pads[6] = pad6;
    pads[7] = pad7;
    pads[8] = pad8;
    pads[9] = pad9;
    pads[10] = pad10;
    pads[11] = pad11;
    pads[12] = pad12;
    pads[13] = pad13;
    pads[14] = pad14;
    pads[15] = pad15;

    for(int i =0; i < 16; i ++)
    {
        padTime[i] = -1;
        repeatTime[i] = -1;
        repeat[i] = false;
    }
    //[/Constructor]
}

ButtonGrid::~ButtonGrid()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (pad12);
    deleteAndZero (pad13);
    deleteAndZero (pad14);
    deleteAndZero (pad15);
    deleteAndZero (pad8);
    deleteAndZero (pad9);
    deleteAndZero (pad10);
    deleteAndZero (pad11);
    deleteAndZero (pad4);
    deleteAndZero (pad5);
    deleteAndZero (pad6);
    deleteAndZero (pad7);
    deleteAndZero (pad0);
    deleteAndZero (pad1);
    deleteAndZero (pad2);
    deleteAndZero (pad3);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ButtonGrid::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2b2b2b));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ButtonGrid::resized()
{
    pad12->setBounds (5, 5, 100, 100);
    pad13->setBounds (113, 5, 100, 100);
    pad14->setBounds (221, 5, 100, 100);
    pad15->setBounds (329, 5, 100, 100);
    pad8->setBounds (5, 113, 100, 100);
    pad9->setBounds (113, 113, 100, 100);
    pad10->setBounds (221, 113, 100, 100);
    pad11->setBounds (329, 113, 100, 100);
    pad4->setBounds (5, 221, 100, 100);
    pad5->setBounds (113, 221, 100, 100);
    pad6->setBounds (221, 221, 100, 100);
    pad7->setBounds (329, 221, 100, 100);
    pad0->setBounds (5, 329, 100, 100);
    pad1->setBounds (113, 329, 100, 100);
    pad2->setBounds (221, 329, 100, 100);
    pad3->setBounds (329, 329, 100, 100);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void ButtonGrid::actionListenerCallback(const String& message)
{
    //Only needed because this is a subclass of ActionListener
}

void ButtonGrid::setPadState(int padNum, bool state)
{
    pads[padNum]->setState(state);

    if(state)
    {
        pads[padNum]->setRepeat(false);
        audioEngine->synth.noteOn(1,padNum + 36,100.00/127.00);
        padTime[padNum] = -1;
        this->startTimer(padNum,1);
    }
    else
    {
        pads[padNum]->setRepeat(false);
        audioEngine->synth.noteOff(1,padNum + 36,1);
        this->stopTimer(padNum);
    }

}

void ButtonGrid::setX(int padNum, float xLoc)
{
    pads[padNum]->setX(xLoc);
}

void ButtonGrid::setY(int padNum, float yLoc)
{
    pads[padNum]->setY(yLoc);
}

void ButtonGrid::setPressure(int padNum, float pressure)
{
    pads[padNum]->setPressure(pressure);
}

void ButtonGrid::timerCallback(int timerID)
{
    if(padTime[timerID] > 700)
    {
        pads[timerID]->setRepeat(true);
        //audioEngine->synth.noteOn(1,timerID + 36,100.00/127.00);
        //padTime[timerID] = -1;

        /*if(repeatTime[timerID] > (1.0f - pads[timerID]->getPressure()/127.0f)*700 + 40)
        {
            audioEngine->synth.noteOn(1,timerID + 36,100.00/127.00);
            repeatTime[timerID] = 0;
        }
        else
        {
            repeatTime[timerID]++;
        }*/
    }
    else
    {
       padTime[timerID]++;
    }
}

Pad* ButtonGrid::getPad(int padNum)
{
    return pads[padNum];
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ButtonGrid" componentName=""
                 parentClasses="public Component, public ActionListener, public MultiTimer"
                 constructorParams="AudioEngine* audioEngine_" variableInitialisers="audioEngine(audioEngine_)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="400" initialHeight="400">
  <BACKGROUND backgroundColour="ff2b2b2b"/>
  <JUCERCOMP name="" id="d1c7c81270ef70a" memberName="pad12" virtualName=""
             explicitFocusOrder="0" pos="5 5 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="5e5055132b8027d0" memberName="pad13" virtualName=""
             explicitFocusOrder="0" pos="113 5 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="b0a2b457384ab900" memberName="pad14" virtualName=""
             explicitFocusOrder="0" pos="221 5 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="9e534c4313b677d3" memberName="pad15" virtualName=""
             explicitFocusOrder="0" pos="329 5 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="ee7b18fa36c49412" memberName="pad8" virtualName=""
             explicitFocusOrder="0" pos="5 113 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="efaab648d5e363ed" memberName="pad9" virtualName=""
             explicitFocusOrder="0" pos="113 113 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="b24d7545bf305301" memberName="pad10" virtualName=""
             explicitFocusOrder="0" pos="221 113 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="2b5ff7321df9265b" memberName="pad11" virtualName=""
             explicitFocusOrder="0" pos="329 113 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="bdf108d449eb1f0f" memberName="pad4" virtualName=""
             explicitFocusOrder="0" pos="5 221 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="e50c1b57911b1bff" memberName="pad5" virtualName=""
             explicitFocusOrder="0" pos="113 221 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="3bf71ee45def2e53" memberName="pad6" virtualName=""
             explicitFocusOrder="0" pos="221 221 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="9d3ca51b5ad400b4" memberName="pad7" virtualName=""
             explicitFocusOrder="0" pos="329 221 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="e7bfaa1b253e2ffb" memberName="pad0" virtualName=""
             explicitFocusOrder="0" pos="5 329 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="d504e109eb9addb7" memberName="pad1" virtualName=""
             explicitFocusOrder="0" pos="113 329 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="ada91090e0d012aa" memberName="pad2" virtualName=""
             explicitFocusOrder="0" pos="221 329 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="ee967f5c9976f14c" memberName="pad3" virtualName=""
             explicitFocusOrder="0" pos="329 329 100 100" sourceFile="Pad.cpp"
             constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
