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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "QuNeoGraph.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
QuNeoGraph::QuNeoGraph (AudioEngine* audioEngine_)
    : Component (L"quNeoGraph"),
      audioEngine(audioEngine_),
      buttonGrid (0),
      rotary0 (0),
      longSlider (0),
      upButton0 (0),
      upButton1 (0),
      downButton0 (0),
      downButton1 (0),
      vSlider3 (0),
      vSlider2 (0),
      vSlider0 (0),
      vSlider1 (0),
      hSlider2 (0),
      hSlider3 (0),
      hSlider1 (0),
      hSlider0 (0),
      leftButton0 (0),
      rightButton0 (0),
      leftButton1 (0),
      rightButton1 (0),
      leftButton2 (0),
      rightButton2 (0),
      leftButton3 (0),
      rightButton3 (0),
      modeButton (0),
      recordButton (0),
      stopButton (0),
      playButton (0),
      rotary1 (0),
      rhombusButton (0)
{
    addAndMakeVisible (buttonGrid = new ButtonGrid (audioEngine));
    addAndMakeVisible (rotary0 = new Rotary (audioEngine, 0));
    addAndMakeVisible (longSlider = new LongSlider (audioEngine));
    addAndMakeVisible (upButton0 = new UpButton (audioEngine));
    addAndMakeVisible (upButton1 = new UpButton (audioEngine));
    addAndMakeVisible (downButton0 = new DownButton (audioEngine));
    addAndMakeVisible (downButton1 = new DownButton (audioEngine));
    addAndMakeVisible (vSlider3 = new VerticalSlider (audioEngine));
    addAndMakeVisible (vSlider2 = new VerticalSlider (audioEngine));
    addAndMakeVisible (vSlider0 = new VerticalSlider (audioEngine));
    addAndMakeVisible (vSlider1 = new VerticalSlider (audioEngine));
    addAndMakeVisible (hSlider2 = new HorizontalSlider (audioEngine));
    addAndMakeVisible (hSlider3 = new HorizontalSlider (audioEngine));
    addAndMakeVisible (hSlider1 = new HorizontalSlider (audioEngine));
    addAndMakeVisible (hSlider0 = new HorizontalSlider (audioEngine));
    addAndMakeVisible (leftButton0 = new LeftButton (audioEngine));
    addAndMakeVisible (rightButton0 = new RightButton (audioEngine));
    addAndMakeVisible (leftButton1 = new LeftButton (audioEngine));
    addAndMakeVisible (rightButton1 = new RightButton (audioEngine));
    addAndMakeVisible (leftButton2 = new LeftButton (audioEngine));
    addAndMakeVisible (rightButton2 = new RightButton (audioEngine));
    addAndMakeVisible (leftButton3 = new LeftButton (audioEngine));
    addAndMakeVisible (rightButton3 = new RightButton (audioEngine));
    addAndMakeVisible (modeButton = new ModeButton (audioEngine));
    addAndMakeVisible (recordButton = new RecordButton (audioEngine));
    addAndMakeVisible (stopButton = new StopButton (audioEngine));
    addAndMakeVisible (playButton = new PlayButton (audioEngine));
    addAndMakeVisible (rotary1 = new Rotary (audioEngine, 1));
    addAndMakeVisible (rhombusButton = new RhombusButton (audioEngine));

    //[UserPreSize]
    //[/UserPreSize]

    setSize (726, 600);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

QuNeoGraph::~QuNeoGraph()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (buttonGrid);
    deleteAndZero (rotary0);
    deleteAndZero (longSlider);
    deleteAndZero (upButton0);
    deleteAndZero (upButton1);
    deleteAndZero (downButton0);
    deleteAndZero (downButton1);
    deleteAndZero (vSlider3);
    deleteAndZero (vSlider2);
    deleteAndZero (vSlider0);
    deleteAndZero (vSlider1);
    deleteAndZero (hSlider2);
    deleteAndZero (hSlider3);
    deleteAndZero (hSlider1);
    deleteAndZero (hSlider0);
    deleteAndZero (leftButton0);
    deleteAndZero (rightButton0);
    deleteAndZero (leftButton1);
    deleteAndZero (rightButton1);
    deleteAndZero (leftButton2);
    deleteAndZero (rightButton2);
    deleteAndZero (leftButton3);
    deleteAndZero (rightButton3);
    deleteAndZero (modeButton);
    deleteAndZero (recordButton);
    deleteAndZero (stopButton);
    deleteAndZero (playButton);
    deleteAndZero (rotary1);
    deleteAndZero (rhombusButton);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void QuNeoGraph::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.setGradientFill (ColourGradient (Colour (0xff5b5b5b),
                                       376.0f, (float) (-24),
                                       Colours::black,
                                       352.0f, 392.0f,
                                       false));
    g.fillRect (-2, -17, 730, 113);

    g.setColour (Colour (0xff2b2b2b));
    g.fillRoundedRectangle (1.0f, 0.0f, 724.0f, 548.0f, 20.5000f);

    g.setColour (Colour (0xff404040));
    g.drawRoundedRectangle (1.0f, 0.0f, 724.0f, 548.0f, 20.5000f, 2.0000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void QuNeoGraph::resized()
{
    buttonGrid->setBounds (273, 17, 430, 432);
    rotary0->setBounds (15, 254, 110, 110);
    longSlider->setBounds (334, 493, 310, 40);
    upButton0->setBounds (265, 464, 64, 48);
    upButton1->setBounds (650, 464, 64, 48);
    downButton0->setBounds (265, 499, 64, 42);
    downButton1->setBounds (650, 499, 64, 42);
    vSlider3->setBounds (198, 366, 40, 168);
    vSlider2->setBounds (142, 366, 40, 168);
    vSlider0->setBounds (30, 366, 40, 168);
    vSlider1->setBounds (86, 366, 40, 168);
    hSlider2->setBounds (86, 159, 168, 40);
    hSlider3->setBounds (86, 206, 168, 40);
    hSlider1->setBounds (86, 110, 168, 40);
    hSlider0->setBounds (86, 62, 168, 40);
    leftButton0->setBounds (16, 62, 32, 32);
    rightButton0->setBounds (44, 62, 34, 32);
    leftButton1->setBounds (16, 110, 32, 32);
    rightButton1->setBounds (44, 110, 34, 32);
    leftButton2->setBounds (16, 159, 32, 32);
    rightButton2->setBounds (44, 159, 34, 32);
    leftButton3->setBounds (16, 206, 32, 32);
    rightButton3->setBounds (44, 206, 34, 32);
    modeButton->setBounds (28, 13, 32, 32);
    recordButton->setBounds (79, 9, 48, 48);
    stopButton->setBounds (150, 12, 47, 45);
    playButton->setBounds (219, 9, 42, 48);
    rotary1->setBounds (143, 254, 110, 110);
    rhombusButton->setBounds (110, 337, 50, 32);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void QuNeoGraph::actionListenerCallback(const String& message)
{
    String msg = message;
    int noteNum = -1;
    int ccNum = -1;
    int ccVal = -1;

    //--------------- Pads
    //Notes
    if (message.contains(String("Note On")))
    {
        msg = msg.trimCharactersAtStart(String("Note On"));

        noteNum = msg.getIntValue() - 36;

        buttonGrid->setPadState(noteNum, true);
    }
    else if(message.contains(String("Note Off")))
    {
        msg = msg.trimCharactersAtStart(String("Note Off"));

        noteNum = msg.getIntValue() - 36;

        buttonGrid->setPadState(noteNum, false);
    }

    //Controllers
    else if(message.contains(String("CC")))
    {
        msg = msg.trimCharactersAtStart(String("CC"));

        //CC number
        //msg = msg.substring(0,2).getIntValue();
        ccNum = msg.substring(0,2).getIntValue();

        //CC Value
        if(msg.length() > 4)
        {
            //msg = msg.substring(2,4);
            ccVal = msg.substring(2,5).getIntValue();

            //Note Num
            noteNum = msg.substring(5).getIntValue();
        }
        else
        {
            //msg = msg.substring(2,4);
            ccVal = msg.substring(2,4).getIntValue();

            //Note Num
            noteNum = msg.substring(4).getIntValue();
        }


        //std::cout << "Note " << noteNum << " CC Num " << ccNum << " CC Val " << ccVal << " message - " << msg << "\n";

        //--- Pressure
        if((ccNum - 23)%3 == 0)
        {
            //std::cout << "Pressure " << ccVal << "\n";
            buttonGrid->setPressure((ccNum - 23)/3, (float)ccVal);
        }

        //--- X
        else if((ccNum - 23)%3 == 1)
        {
            //std::cout << "X " << ccVal << "\n";
            buttonGrid->setX((ccNum - 24)/3, (float)ccVal);
        }

        //--- Y
        else if((ccNum - 23)%3 == 2)
        {
            //std::cout << "Y " << ccVal << "\n";
            buttonGrid->setY((ccNum - 25)/3, 127 - (float)ccVal);
        }
    }


    //-------------------- Long Slider
    else if(message.contains(String("LongSlider On")))
    {
        longSlider->setState(true);
    }
    else if(message.contains(String("LongSlider Off")))
    {
        longSlider->setState(false);
    }
    else if(message.contains(String("LongSlider Pressure")))
    {
        longSlider->setPressure(message.trimCharactersAtStart(String("LongSlider Pressure")).getIntValue());
    }
    else if(message.contains(String("LongSlider Location")))
    {
        longSlider->setLoc(message.trimCharactersAtStart(String("LongSlider Location")).getIntValue());
    }
    else if(message.contains(String("LongSlider Width")))
    {
        longSlider->setWidth(message.trimCharactersAtStart(String("LongSlider Width")).getIntValue());
    }

    //-------------------- UpButtons
    else if(message.contains(String("UpButton Zero On")))
    {
        upButton0->setState(true);
    }
    else if(message.contains(String("UpButton One On")))
    {
        upButton1->setState(true);
    }
    else if(message.contains(String("UpButton Zero Off")))
    {
        upButton0->setState(false);
    }
    else if(message.contains(String("UpButton One Off")))
    {
        upButton1->setState(false);
    }
    else if(message.contains(String("UpButton Zero Pressure")))
    {
        upButton0->setPressure(message.trimCharactersAtStart(String("UpButton Zero Pressure")).getIntValue());
    }
    else if(message.contains(String("UpButton One Pressure")))
    {
        upButton1->setPressure(message.trimCharactersAtStart(String("UpButton One Pressure")).getIntValue());
    }

    //------------------ Down Buttons
    else if(message.contains(String("DownButton Zero On")))
    {
        downButton0->setState(true);
    }
    else if(message.contains(String("DownButton One On")))
    {
        downButton1->setState(true);
    }
    else if(message.contains(String("DownButton Zero Off")))
    {
        downButton0->setState(false);
    }
    else if(message.contains(String("DownButton One Off")))
    {
        downButton1->setState(false);
    }
    else if(message.contains(String("DownButton Zero Pressure")))
    {
        downButton0->setPressure(message.trimCharactersAtStart(String("DownButton Zero Pressure")).getIntValue());
    }
    else if(message.contains(String("DownButton One Pressure")))
    {
        downButton1->setPressure(message.trimCharactersAtStart(String("DownButton One Pressure")).getIntValue());
    }

    //------------------ RhombusButton
    else if(message.contains(String("RhombusButton On")))
    {
        rhombusButton->setState(true);
    }
    else if(message.contains(String("RhombusButton Off")))
    {
        rhombusButton->setState(false);
    }
    else if(message.contains(String("RhombusButton Pressure")))
    {
        rhombusButton->setPressure(message.trimCharactersAtStart(String("RhombusButton Pressure")).getIntValue());
    }

    //------------------ LeftButton
    else if(message.contains(String("LeftButton Zero On")))
    {
        leftButton0->setState(true);
    }
    else if(message.contains(String("LeftButton One On")))
    {
        leftButton1->setState(true);
    }
    else if(message.contains(String("LeftButton Two On")))
    {
        leftButton2->setState(true);
    }
    else if(message.contains(String("LeftButton Three On")))
    {
        leftButton3->setState(true);
    }
    else if(message.contains(String("LeftButton Zero Off")))
    {
        leftButton0->setState(false);
    }
    else if(message.contains(String("LeftButton One Off")))
    {
        leftButton1->setState(false);
    }
    else if(message.contains(String("LeftButton Two Off")))
    {
        leftButton2->setState(false);
    }
    else if(message.contains(String("LeftButton Three Off")))
    {
        leftButton3->setState(false);
    }
    else if(message.contains(String("LeftButton Zero Pressure")))
    {
        leftButton0->setPressure(message.trimCharactersAtStart(String("LeftButton Zero Pressure")).getIntValue());
    }
    else if(message.contains(String("LeftButton One Pressure")))
    {
        leftButton1->setPressure(message.trimCharactersAtStart(String("LeftButton One Pressure")).getIntValue());
    }
    else if(message.contains(String("LeftButton Two Pressure")))
    {
        leftButton2->setPressure(message.trimCharactersAtStart(String("LeftButton Two Pressure")).getIntValue());
    }
    else if(message.contains(String("LeftButton Three Pressure")))
    {
        leftButton3->setPressure(message.trimCharactersAtStart(String("LeftButton Three Pressure")).getIntValue());
    }
    //------------------ RightButton
    else if(message.contains(String("RightButton Zero On")))
    {
        rightButton0->setState(true);
    }
    else if(message.contains(String("RightButton One On")))
    {
        rightButton1->setState(true);
    }
    else if(message.contains(String("RightButton Two On")))
    {
        rightButton2->setState(true);
    }
    else if(message.contains(String("RightButton Three On")))
    {
        rightButton3->setState(true);
    }
    else if(message.contains(String("RightButton Zero Off")))
    {
        rightButton0->setState(false);
    }
    else if(message.contains(String("RightButton One Off")))
    {
        rightButton1->setState(false);
    }
    else if(message.contains(String("RightButton Two Off")))
    {
        rightButton2->setState(false);
    }
    else if(message.contains(String("RightButton Three Off")))
    {
        rightButton3->setState(false);
    }
    else if(message.contains(String("RightButton Zero Pressure")))
    {
        rightButton0->setPressure(message.trimCharactersAtStart(String("RightButton Zero Pressure")).getIntValue());
    }
    else if(message.contains(String("RightButton One Pressure")))
    {
        rightButton1->setPressure(message.trimCharactersAtStart(String("RightButton One Pressure")).getIntValue());
    }
    else if(message.contains(String("RightButton Two Pressure")))
    {
        rightButton2->setPressure(message.trimCharactersAtStart(String("RightButton Two Pressure")).getIntValue());
    }
    else if(message.contains(String("RightButton Three Pressure")))
    {
        rightButton3->setPressure(message.trimCharactersAtStart(String("RightButton Three Pressure")).getIntValue());
    }

    //------------------ PlayButton
    else if(message.contains(String("PlayButton On")))
    {
        playButton->setState(true);
    }
    else if(message.contains(String("PlayButton Off")))
    {
        playButton->setState(false);
    }
    else if(message.contains(String("PlayButton Pressure")))
    {
        playButton->setPressure(message.trimCharactersAtStart(String("PlayButton Pressure")).getIntValue());
    }

    //------------------ stopButton
    else if(message.contains(String("StopButton On")))
    {
        stopButton->setState(true);
    }
    else if(message.contains(String("StopButton Off")))
    {
        stopButton->setState(false);
    }
    else if(message.contains(String("StopButton Pressure")))
    {
        stopButton->setPressure(message.trimCharactersAtStart(String("StopButton Pressure")).getIntValue());
    }

    //------------------ recordButton
    else if(message.contains(String("RecordButton On")))
    {
        recordButton->setState(true);
    }
    else if(message.contains(String("RecordButton Off")))
    {
        recordButton->setState(false);
    }
    else if(message.contains(String("RecordButton Pressure")))
    {
        recordButton->setPressure(message.trimCharactersAtStart(String("RecordButton Pressure")).getIntValue());
    }

    //------------------ HSlider
    else if(message.contains(String("HSlider Zero On")))
    {
        hSlider0->setState(true);
    }
    else if(message.contains(String("HSlider One On")))
    {
        hSlider1->setState(true);
    }
    else if(message.contains(String("HSlider Two On")))
    {
        hSlider2->setState(true);
    }
    else if(message.contains(String("HSlider Three On")))
    {
        hSlider3->setState(true);
    }
    else if(message.contains(String("HSlider Zero Off")))
    {
        hSlider0->setState(false);
    }
    else if(message.contains(String("HSlider One Off")))
    {
        hSlider1->setState(false);
    }
    else if(message.contains(String("HSlider Two Off")))
    {
        hSlider2->setState(false);
    }
    else if(message.contains(String("HSlider Three Off")))
    {
        hSlider3->setState(false);
    }
    else if(message.contains(String("HSlider Zero Pressure")))
    {
        hSlider0->setPressure(message.trimCharactersAtStart(String("HSlider Zero Pressure")).getIntValue());
    }
    else if(message.contains(String("HSlider One Pressure")))
    {
        hSlider1->setPressure(message.trimCharactersAtStart(String("HSlider One Pressure")).getIntValue());
    }
    else if(message.contains(String("HSlider Two Pressure")))
    {
        hSlider2->setPressure(message.trimCharactersAtStart(String("HSlider Two Pressure")).getIntValue());
    }
    else if(message.contains(String("HSlider Three Pressure")))
    {
        hSlider3->setPressure(message.trimCharactersAtStart(String("HSlider Three Pressure")).getIntValue());
    }
    else if(message.contains(String("HSlider Zero Location")))
    {
        hSlider0->setLoc(message.trimCharactersAtStart(String("HSlider Zero Location")).getIntValue());
    }
    else if(message.contains(String("HSlider One Location")))
    {
        hSlider1->setLoc(message.trimCharactersAtStart(String("HSlider One Location")).getIntValue());
    }
    else if(message.contains(String("HSlider Two Location")))
    {
        hSlider2->setLoc(message.trimCharactersAtStart(String("HSlider Two Location")).getIntValue());
    }
    else if(message.contains(String("HSlider Three Location")))
    {
        hSlider3->setLoc(message.trimCharactersAtStart(String("HSlider Three Location")).getIntValue());
    }

    //------------------ VSlider
    else if(message.contains(String("VSlider Zero On")))
    {
        vSlider0->setState(true);
    }
    else if(message.contains(String("VSlider One On")))
    {
        vSlider1->setState(true);
    }
    else if(message.contains(String("VSlider Two On")))
    {
        vSlider2->setState(true);
    }
    else if(message.contains(String("VSlider Three On")))
    {
        vSlider3->setState(true);
    }
    else if(message.contains(String("VSlider Zero Off")))
    {
        vSlider0->setState(false);
    }
    else if(message.contains(String("VSlider One Off")))
    {
        vSlider1->setState(false);
    }
    else if(message.contains(String("VSlider Two Off")))
    {
        vSlider2->setState(false);
    }
    else if(message.contains(String("VSlider Three Off")))
    {
        vSlider3->setState(false);
    }
    else if(message.contains(String("VSlider Zero Pressure")))
    {
        vSlider0->setPressure(message.trimCharactersAtStart(String("VSlider Zero Pressure")).getIntValue());
    }
    else if(message.contains(String("VSlider One Pressure")))
    {
        vSlider1->setPressure(message.trimCharactersAtStart(String("VSlider One Pressure")).getIntValue());
    }
    else if(message.contains(String("VSlider Two Pressure")))
    {
        vSlider2->setPressure(message.trimCharactersAtStart(String("VSlider Two Pressure")).getIntValue());
    }
    else if(message.contains(String("VSlider Three Pressure")))
    {
        vSlider3->setPressure(message.trimCharactersAtStart(String("VSlider Three Pressure")).getIntValue());
    }
    else if(message.contains(String("VSlider Zero Location")))
    {
        vSlider0->setLoc(message.trimCharactersAtStart(String("VSlider Zero Location")).getIntValue());
    }
    else if(message.contains(String("VSlider One Location")))
    {
        vSlider1->setLoc(message.trimCharactersAtStart(String("VSlider One Location")).getIntValue());
    }
    else if(message.contains(String("VSlider Two Location")))
    {
        vSlider2->setLoc(message.trimCharactersAtStart(String("VSlider Two Location")).getIntValue());
    }
    else if(message.contains(String("VSlider Three Location")))
    {
        vSlider3->setLoc(message.trimCharactersAtStart(String("VSlider Three Location")).getIntValue());
    }

    //------------------ recordButton
    else if(message.contains(String("Rotary Zero On")))
    {
        rotary0->setState(true);
    }
    else if(message.contains(String("Rotary Zero Off")))
    {
        rotary0->setState(false);
    }
    else if(message.contains(String("Rotary Zero Pressure")))
    {
        rotary0->setPressure(message.trimCharactersAtStart(String("Rotary Zero Pressure")).getIntValue());
    }
    else if(message.contains(String("Rotary Zero Direction")))
    {
        rotary0->setDirection(message.trimCharactersAtStart(String("Rotary Zero Direction")).getIntValue());
    }
    else if(message.contains(String("Rotary Zero Location")))
    {
        rotary0->setLocation(message.trimCharactersAtStart(String("Rotary Zero Location")).getIntValue());
    }
    else if(message.contains(String("Rotary One On")))
    {
        rotary1->setState(true);
    }
    else if(message.contains(String("Rotary One Off")))
    {
        rotary1->setState(false);
    }
    else if(message.contains(String("Rotary One Pressure")))
    {
        rotary1->setPressure(message.trimCharactersAtStart(String("Rotary One Pressure")).getIntValue());
    }
    else if(message.contains(String("Rotary One Direction")))
    {
        rotary1->setDirection(message.trimCharactersAtStart(String("Rotary One Direction")).getIntValue());
    }
    else if(message.contains(String("Rotary One Location")))
    {
        rotary1->setLocation(message.trimCharactersAtStart(String("Rotary One Location")).getIntValue());
    }

}

Pad* QuNeoGraph::getPad(int padNum)
{
    return buttonGrid->getPad(padNum);
}

void QuNeoGraph::setLongSliderSampler(Sampler* smplr)
{
    longSlider->setSampler(smplr);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="QuNeoGraph" componentName="quNeoGraph"
                 parentClasses="public Component, public ActionListener" constructorParams="AudioEngine* audioEngine_"
                 variableInitialisers="audioEngine(audioEngine_)" snapPixels="8"
                 snapActive="1" snapShown="0" overlayOpacity="0.330000013" fixedSize="1"
                 initialWidth="726" initialHeight="600">
  <BACKGROUND backgroundColour="0">
    <RECT pos="-2 -17 730 113" fill="linear: 376 -24, 352 392, 0=ff5b5b5b, 1=ff000000"
          hasStroke="0"/>
    <ROUNDRECT pos="1 0 724 548" cornerSize="20.5" fill="solid: ff2b2b2b" hasStroke="1"
               stroke="2, mitered, butt" strokeColour="solid: ff404040"/>
  </BACKGROUND>
  <JUCERCOMP name="" id="d3bacd0a771aeaee" memberName="buttonGrid" virtualName=""
             explicitFocusOrder="0" pos="273 17 430 432" sourceFile="ButtonGrid.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="63dd3382dc35cbfb" memberName="rotary0" virtualName=""
             explicitFocusOrder="0" pos="15 254 110 110" sourceFile="Rotary.cpp"
             constructorParams="audioEngine, 0"/>
  <JUCERCOMP name="" id="af87a71daeb9e976" memberName="longSlider" virtualName=""
             explicitFocusOrder="0" pos="334 493 310 40" sourceFile="LongSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="579a67e8deaadef3" memberName="upButton0" virtualName=""
             explicitFocusOrder="0" pos="265 464 64 48" sourceFile="UpButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="f2c8a88e6653cf08" memberName="upButton1" virtualName=""
             explicitFocusOrder="0" pos="650 464 64 48" sourceFile="UpButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="9993e206ac78fd9e" memberName="downButton0" virtualName=""
             explicitFocusOrder="0" pos="265 499 64 42" sourceFile="DownButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="f1e255fd153b9360" memberName="downButton1" virtualName=""
             explicitFocusOrder="0" pos="650 499 64 42" sourceFile="DownButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="ddc8b6f25c064d65" memberName="vSlider3" virtualName=""
             explicitFocusOrder="0" pos="198 366 40 168" sourceFile="VerticalSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="7fb4a58e40047df7" memberName="vSlider2" virtualName=""
             explicitFocusOrder="0" pos="142 366 40 168" sourceFile="VerticalSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="60b1b489fbe1fefc" memberName="vSlider0" virtualName=""
             explicitFocusOrder="0" pos="30 366 40 168" sourceFile="VerticalSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="3a57505d28fa0154" memberName="vSlider1" virtualName=""
             explicitFocusOrder="0" pos="86 366 40 168" sourceFile="VerticalSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="4fe42e284585d59a" memberName="hSlider2" virtualName=""
             explicitFocusOrder="0" pos="86 159 168 40" sourceFile="HorizontalSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="9a91ca3ac28d8154" memberName="hSlider3" virtualName=""
             explicitFocusOrder="0" pos="86 206 168 40" sourceFile="HorizontalSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="9acf641819ab546c" memberName="hSlider1" virtualName=""
             explicitFocusOrder="0" pos="86 110 168 40" sourceFile="HorizontalSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="9aef769d7280bd44" memberName="hSlider0" virtualName=""
             explicitFocusOrder="0" pos="86 62 168 40" sourceFile="HorizontalSlider.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="385ddd9108ffa04d" memberName="leftButton0" virtualName=""
             explicitFocusOrder="0" pos="16 62 32 32" sourceFile="LeftButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="f245ac43bd3306e2" memberName="rightButton0" virtualName=""
             explicitFocusOrder="0" pos="44 62 34 32" sourceFile="RightButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="7a28862c00ddf3de" memberName="leftButton1" virtualName=""
             explicitFocusOrder="0" pos="16 110 32 32" sourceFile="LeftButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="a89608ceed5a7152" memberName="rightButton1" virtualName=""
             explicitFocusOrder="0" pos="44 110 34 32" sourceFile="RightButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="2e5f947e952fad73" memberName="leftButton2" virtualName=""
             explicitFocusOrder="0" pos="16 159 32 32" sourceFile="LeftButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="571df9dc808ed766" memberName="rightButton2" virtualName=""
             explicitFocusOrder="0" pos="44 159 34 32" sourceFile="RightButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="b18e9adae48b242b" memberName="leftButton3" virtualName=""
             explicitFocusOrder="0" pos="16 206 32 32" sourceFile="LeftButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="237a72d397d68517" memberName="rightButton3" virtualName=""
             explicitFocusOrder="0" pos="44 206 34 32" sourceFile="RightButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="3dd0e8490151c041" memberName="modeButton" virtualName=""
             explicitFocusOrder="0" pos="28 13 32 32" sourceFile="ModeButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="6de49bdf557811e0" memberName="recordButton" virtualName=""
             explicitFocusOrder="0" pos="79 9 48 48" sourceFile="RecordButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="43124fb2ed0247f1" memberName="stopButton" virtualName=""
             explicitFocusOrder="0" pos="150 12 47 45" sourceFile="StopButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="97af644f36ca20af" memberName="playButton" virtualName=""
             explicitFocusOrder="0" pos="219 9 42 48" sourceFile="PlayButton.cpp"
             constructorParams="audioEngine"/>
  <JUCERCOMP name="" id="a48c6b5c70767761" memberName="rotary1" virtualName=""
             explicitFocusOrder="0" pos="143 254 110 110" sourceFile="Rotary.cpp"
             constructorParams="audioEngine, 1"/>
  <JUCERCOMP name="" id="df58b84969561c7d" memberName="rhombusButton" virtualName=""
             explicitFocusOrder="0" pos="110 337 50 32" sourceFile="RhombusButton.cpp"
             constructorParams="audioEngine"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
