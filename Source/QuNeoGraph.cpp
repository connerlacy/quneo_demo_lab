/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  24 Aug 2013 4:02:56pm

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
      rhombusButton (0),
      cachedImage_quNeo_png (0),
      cachedImage_keithMcMillen_png (0)
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
    cachedImage_quNeo_png = ImageCache::getFromMemory (quNeo_png, quNeo_pngSize);
    cachedImage_keithMcMillen_png = ImageCache::getFromMemory (keithMcMillen_png, keithMcMillen_pngSize);

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

    g.setColour (Colours::black);
    g.drawImageWithin (cachedImage_quNeo_png,
                       546, 465, 92, 28,
                       RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize,
                       false);

    g.setColour (Colours::black);
    g.drawImageWithin (cachedImage_keithMcMillen_png,
                       343, 465, 97, 28,
                       RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize,
                       false);

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

void QuNeoGraph::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
    //std::cout << "Mouse Down\n";
    //[/UserCode_mouseDown]
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
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="0">
    <RECT pos="-2 -17 730 113" fill="linear: 376 -24, 352 392, 0=ff5b5b5b, 1=ff000000"
          hasStroke="0"/>
    <ROUNDRECT pos="1 0 724 548" cornerSize="20.5" fill="solid: ff2b2b2b" hasStroke="1"
               stroke="2, mitered, butt" strokeColour="solid: ff404040"/>
    <IMAGE pos="546 465 92 28" resource="quNeo_png" opacity="1" mode="2"/>
    <IMAGE pos="343 465 97 28" resource="keithMcMillen_png" opacity="1"
           mode="2"/>
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

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: quNeo_png, 3649, "../Builds/Resources/images/QuNeo.png"
static const unsigned char resource_QuNeoGraph_quNeo_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,98,0,0,0,31,8,6,0,0,0,28,25,24,17,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,
24,0,0,10,79,105,67,67,80,80,104,111,116,111,115,104,111,112,32,73,67,67,32,112,114,111,102,105,108,101,0,0,120,218,157,83,103,84,83,233,22,61,247,222,244,66,75,136,128,148,75,111,82,21,8,32,82,66,139,
128,20,145,38,42,33,9,16,74,136,33,161,217,21,81,193,17,69,69,4,27,200,160,136,3,142,142,128,140,21,81,44,12,138,10,216,7,228,33,162,142,131,163,136,138,202,251,225,123,163,107,214,188,247,230,205,254,
181,215,62,231,172,243,157,179,207,7,192,8,12,150,72,51,81,53,128,12,169,66,30,17,224,131,199,196,198,225,228,46,64,129,10,36,112,0,16,8,179,100,33,115,253,35,1,0,248,126,60,60,43,34,192,7,190,0,1,120,
211,11,8,0,192,77,155,192,48,28,135,255,15,234,66,153,92,1,128,132,1,192,116,145,56,75,8,128,20,0,64,122,142,66,166,0,64,70,1,128,157,152,38,83,0,160,4,0,96,203,99,98,227,0,80,45,0,96,39,127,230,211,0,
128,157,248,153,123,1,0,91,148,33,21,1,160,145,0,32,19,101,136,68,0,104,59,0,172,207,86,138,69,0,88,48,0,20,102,75,196,57,0,216,45,0,48,73,87,102,72,0,176,183,0,192,206,16,11,178,0,8,12,0,48,81,136,133,
41,0,4,123,0,96,200,35,35,120,0,132,153,0,20,70,242,87,60,241,43,174,16,231,42,0,0,120,153,178,60,185,36,57,69,129,91,8,45,113,7,87,87,46,30,40,206,73,23,43,20,54,97,2,97,154,64,46,194,121,153,25,50,129,
52,15,224,243,204,0,0,160,145,21,17,224,131,243,253,120,206,14,174,206,206,54,142,182,14,95,45,234,191,6,255,34,98,98,227,254,229,207,171,112,64,0,0,225,116,126,209,254,44,47,179,26,128,59,6,128,109,254,
162,37,238,4,104,94,11,160,117,247,139,102,178,15,64,181,0,160,233,218,87,243,112,248,126,60,60,69,161,144,185,217,217,229,228,228,216,74,196,66,91,97,202,87,125,254,103,194,95,192,87,253,108,249,126,
60,252,247,245,224,190,226,36,129,50,93,129,71,4,248,224,194,204,244,76,165,28,207,146,9,132,98,220,230,143,71,252,183,11,255,252,29,211,34,196,73,98,185,88,42,20,227,81,18,113,142,68,154,140,243,50,165,
34,137,66,146,41,197,37,210,255,100,226,223,44,251,3,62,223,53,0,176,106,62,1,123,145,45,168,93,99,3,246,75,39,16,88,116,192,226,247,0,0,242,187,111,193,212,40,8,3,128,104,131,225,207,119,255,239,63,253,
71,160,37,0,128,102,73,146,113,0,0,94,68,36,46,84,202,179,63,199,8,0,0,68,160,129,42,176,65,27,244,193,24,44,192,6,28,193,5,220,193,11,252,96,54,132,66,36,196,194,66,16,66,10,100,128,28,114,96,41,172,
130,66,40,134,205,176,29,42,96,47,212,64,29,52,192,81,104,134,147,112,14,46,194,85,184,14,61,112,15,250,97,8,158,193,40,188,129,9,4,65,200,8,19,97,33,218,136,1,98,138,88,35,142,8,23,153,133,248,33,193,
72,4,18,139,36,32,201,136,20,81,34,75,145,53,72,49,82,138,84,32,85,72,29,242,61,114,2,57,135,92,70,186,145,59,200,0,50,130,252,134,188,71,49,148,129,178,81,61,212,12,181,67,185,168,55,26,132,70,162,11,
208,100,116,49,154,143,22,160,155,208,114,180,26,61,140,54,161,231,208,171,104,15,218,143,62,67,199,48,192,232,24,7,51,196,108,48,46,198,195,66,177,56,44,9,147,99,203,177,34,172,12,171,198,26,176,86,172,
3,187,137,245,99,207,177,119,4,18,129,69,192,9,54,4,119,66,32,97,30,65,72,88,76,88,78,216,72,168,32,28,36,52,17,218,9,55,9,3,132,81,194,39,34,147,168,75,180,38,186,17,249,196,24,98,50,49,135,88,72,44,
35,214,18,143,19,47,16,123,136,67,196,55,36,18,137,67,50,39,185,144,2,73,177,164,84,210,18,210,70,210,110,82,35,233,44,169,155,52,72,26,35,147,201,218,100,107,178,7,57,148,44,32,43,200,133,228,157,228,
195,228,51,228,27,228,33,242,91,10,157,98,64,113,164,248,83,226,40,82,202,106,74,25,229,16,229,52,229,6,101,152,50,65,85,163,154,82,221,168,161,84,17,53,143,90,66,173,161,182,82,175,81,135,168,19,52,117,
154,57,205,131,22,73,75,165,173,162,149,211,26,104,23,104,247,105,175,232,116,186,17,221,149,30,78,151,208,87,210,203,233,71,232,151,232,3,244,119,12,13,134,21,131,199,136,103,40,25,155,24,7,24,103,25,
119,24,175,152,76,166,25,211,139,25,199,84,48,55,49,235,152,231,153,15,153,111,85,88,42,182,42,124,21,145,202,10,149,74,149,38,149,27,42,47,84,169,170,166,170,222,170,11,85,243,85,203,84,143,169,94,83,
125,174,70,85,51,83,227,169,9,212,150,171,85,170,157,80,235,83,27,83,103,169,59,168,135,170,103,168,111,84,63,164,126,89,253,137,6,89,195,76,195,79,67,164,81,160,177,95,227,188,198,32,11,99,25,179,120,
44,33,107,13,171,134,117,129,53,196,38,177,205,217,124,118,42,187,152,253,29,187,139,61,170,169,161,57,67,51,74,51,87,179,82,243,148,102,63,7,227,152,113,248,156,116,78,9,231,40,167,151,243,126,138,222,
20,239,41,226,41,27,166,52,76,185,49,101,92,107,170,150,151,150,88,171,72,171,81,171,71,235,189,54,174,237,167,157,166,189,69,187,89,251,129,14,65,199,74,39,92,39,71,103,143,206,5,157,231,83,217,83,221,
167,10,167,22,77,61,58,245,174,46,170,107,165,27,161,187,68,119,191,110,167,238,152,158,190,94,128,158,76,111,167,222,121,189,231,250,28,125,47,253,84,253,109,250,167,245,71,12,88,6,179,12,36,6,219,12,
206,24,60,197,53,113,111,60,29,47,199,219,241,81,67,93,195,64,67,165,97,149,97,151,225,132,145,185,209,60,163,213,70,141,70,15,140,105,198,92,227,36,227,109,198,109,198,163,38,6,38,33,38,75,77,234,77,
238,154,82,77,185,166,41,166,59,76,59,76,199,205,204,205,162,205,214,153,53,155,61,49,215,50,231,155,231,155,215,155,223,183,96,90,120,90,44,182,168,182,184,101,73,178,228,90,166,89,238,182,188,110,133,
90,57,89,165,88,85,90,93,179,70,173,157,173,37,214,187,173,187,167,17,167,185,78,147,78,171,158,214,103,195,176,241,182,201,182,169,183,25,176,229,216,6,219,174,182,109,182,125,97,103,98,23,103,183,197,
174,195,238,147,189,147,125,186,125,141,253,61,7,13,135,217,14,171,29,90,29,126,115,180,114,20,58,86,58,222,154,206,156,238,63,125,197,244,150,233,47,103,88,207,16,207,216,51,227,182,19,203,41,196,105,
157,83,155,211,71,103,23,103,185,115,131,243,136,139,137,75,130,203,46,151,62,46,155,27,198,221,200,189,228,74,116,245,113,93,225,122,210,245,157,155,179,155,194,237,168,219,175,238,54,238,105,238,135,
220,159,204,52,159,41,158,89,51,115,208,195,200,67,224,81,229,209,63,11,159,149,48,107,223,172,126,79,67,79,129,103,181,231,35,47,99,47,145,87,173,215,176,183,165,119,170,247,97,239,23,62,246,62,114,159,
227,62,227,60,55,222,50,222,89,95,204,55,192,183,200,183,203,79,195,111,158,95,133,223,67,127,35,255,100,255,122,255,209,0,167,128,37,1,103,3,137,129,65,129,91,2,251,248,122,124,33,191,142,63,58,219,101,
246,178,217,237,65,140,160,185,65,21,65,143,130,173,130,229,193,173,33,104,200,236,144,173,33,247,231,152,206,145,206,105,14,133,80,126,232,214,208,7,97,230,97,139,195,126,12,39,133,135,133,87,134,63,
142,112,136,88,26,209,49,151,53,119,209,220,67,115,223,68,250,68,150,68,222,155,103,49,79,57,175,45,74,53,42,62,170,46,106,60,218,55,186,52,186,63,198,46,102,89,204,213,88,157,88,73,108,75,28,57,46,42,
174,54,110,108,190,223,252,237,243,135,226,157,226,11,227,123,23,152,47,200,93,112,121,161,206,194,244,133,167,22,169,46,18,44,58,150,64,76,136,78,56,148,240,65,16,42,168,22,140,37,242,19,119,37,142,10,
121,194,29,194,103,34,47,209,54,209,136,216,67,92,42,30,78,242,72,42,77,122,146,236,145,188,53,121,36,197,51,165,44,229,185,132,39,169,144,188,76,13,76,221,155,58,158,22,154,118,32,109,50,61,58,189,49,
131,146,145,144,113,66,170,33,77,147,182,103,234,103,230,102,118,203,172,101,133,178,254,197,110,139,183,47,30,149,7,201,107,179,144,172,5,89,45,10,182,66,166,232,84,90,40,215,42,7,178,103,101,87,102,
191,205,137,202,57,150,171,158,43,205,237,204,179,202,219,144,55,156,239,159,255,237,18,194,18,225,146,182,165,134,75,87,45,29,88,230,189,172,106,57,178,60,113,121,219,10,227,21,5,43,134,86,6,172,60,184,
138,182,42,109,213,79,171,237,87,151,174,126,189,38,122,77,107,129,94,193,202,130,193,181,1,107,235,11,85,10,229,133,125,235,220,215,237,93,79,88,47,89,223,181,97,250,134,157,27,62,21,137,138,174,20,219,
23,151,21,127,216,40,220,120,229,27,135,111,202,191,153,220,148,180,169,171,196,185,100,207,102,210,102,233,230,222,45,158,91,14,150,170,151,230,151,14,110,13,217,218,180,13,223,86,180,237,245,246,69,
219,47,151,205,40,219,187,131,182,67,185,163,191,60,184,188,101,167,201,206,205,59,63,84,164,84,244,84,250,84,54,238,210,221,181,97,215,248,110,209,238,27,123,188,246,52,236,213,219,91,188,247,253,62,
201,190,219,85,1,85,77,213,102,213,101,251,73,251,179,247,63,174,137,170,233,248,150,251,109,93,173,78,109,113,237,199,3,210,3,253,7,35,14,182,215,185,212,213,29,210,61,84,82,143,214,43,235,71,14,199,
31,190,254,157,239,119,45,13,54,13,85,141,156,198,226,35,112,68,121,228,233,247,9,223,247,30,13,58,218,118,140,123,172,225,7,211,31,118,29,103,29,47,106,66,154,242,154,70,155,83,154,251,91,98,91,186,79,
204,62,209,214,234,222,122,252,71,219,31,15,156,52,60,89,121,74,243,84,201,105,218,233,130,211,147,103,242,207,140,157,149,157,125,126,46,249,220,96,219,162,182,123,231,99,206,223,106,15,111,239,186,16,
116,225,210,69,255,139,231,59,188,59,206,92,242,184,116,242,178,219,229,19,87,184,87,154,175,58,95,109,234,116,234,60,254,147,211,79,199,187,156,187,154,174,185,92,107,185,238,122,189,181,123,102,247,
233,27,158,55,206,221,244,189,121,241,22,255,214,213,158,57,61,221,189,243,122,111,247,197,247,245,223,22,221,126,114,39,253,206,203,187,217,119,39,238,173,188,79,188,95,244,64,237,65,217,67,221,135,213,
63,91,254,220,216,239,220,127,106,192,119,160,243,209,220,71,247,6,133,131,207,254,145,245,143,15,67,5,143,153,143,203,134,13,134,235,158,56,62,57,57,226,63,114,253,233,252,167,67,207,100,207,38,158,23,
254,162,254,203,174,23,22,47,126,248,213,235,215,206,209,152,209,161,151,242,151,147,191,109,124,165,253,234,192,235,25,175,219,198,194,198,30,190,201,120,51,49,94,244,86,251,237,193,119,220,119,29,239,
163,223,15,79,228,124,32,127,40,255,104,249,177,245,83,208,167,251,147,25,147,147,255,4,3,152,243,252,99,51,45,219,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,
96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,3,108,73,68,65,84,120,218,236,90,235,145,163,48,12,86,50,215,128,175,4,174,4,95,9,164,132,108,9,108,9,78,9,73,9,73,9,108,9,166,4,40,33,41,1,74,240,253,145,103,
52,90,63,4,129,36,155,67,51,158,157,44,198,232,173,79,130,141,115,14,86,122,62,109,87,21,172,134,88,137,208,175,31,198,111,137,127,155,204,190,2,23,0,64,7,0,195,187,68,68,9,0,103,0,184,2,128,195,213,3,
128,5,0,67,132,94,146,90,124,158,69,94,82,180,39,123,245,143,112,49,231,92,106,105,231,156,117,50,58,59,231,84,230,188,169,107,31,120,94,153,216,111,132,251,94,102,165,34,162,66,47,44,201,255,6,76,11,
13,0,220,34,251,151,240,192,80,196,153,255,161,88,87,44,252,47,0,240,23,0,126,3,192,14,215,31,92,7,166,176,165,211,193,64,210,101,249,206,134,208,196,8,3,42,253,19,139,30,167,27,0,156,208,72,254,186,18,
228,240,123,232,244,142,81,17,50,4,85,226,135,0,161,120,100,178,35,233,74,47,168,164,142,240,52,87,84,168,103,71,215,54,128,54,52,241,188,102,100,202,248,96,233,237,27,54,192,149,50,146,223,99,23,142,
10,133,247,94,9,2,116,248,251,40,68,130,254,12,75,248,118,0,80,143,54,44,171,222,53,65,27,83,17,208,153,156,177,103,215,60,153,196,253,158,108,6,5,217,4,50,202,161,38,237,156,187,102,80,96,239,156,171,
18,124,86,184,103,22,36,185,141,52,76,95,119,52,65,77,6,237,60,187,86,40,244,224,2,101,60,32,232,216,96,173,59,176,90,183,79,128,25,69,192,204,1,107,233,137,232,174,18,215,75,98,21,37,244,216,220,82,17,
175,158,59,34,82,81,97,4,209,210,99,100,228,162,186,103,94,93,144,72,136,157,161,24,111,213,152,136,152,11,114,62,114,156,48,37,42,12,185,183,11,32,70,203,234,91,23,136,6,69,192,76,151,168,151,55,41,111,
219,25,20,168,18,215,110,11,27,162,25,137,160,52,225,247,139,201,112,100,13,236,141,244,76,3,3,52,28,189,197,28,242,66,82,180,150,26,162,155,16,29,42,48,251,209,15,52,196,216,168,80,1,222,60,114,50,68,
129,190,110,52,137,46,95,10,235,37,14,251,173,88,119,196,234,74,32,212,21,21,95,17,65,246,145,194,253,42,81,193,167,0,71,34,235,9,13,112,34,231,233,71,164,96,110,136,203,8,239,26,216,120,227,136,247,24,
162,160,238,197,106,197,192,16,226,133,240,234,199,53,3,59,171,141,244,52,90,104,236,73,125,132,98,248,186,18,160,164,42,130,161,203,4,34,58,10,16,87,61,114,154,106,25,226,138,237,247,242,93,241,121,49,
228,84,176,126,128,247,90,189,160,71,176,100,111,82,143,146,145,115,53,178,137,227,74,164,171,207,8,97,34,16,87,98,136,82,232,16,21,227,83,69,28,162,37,251,138,136,126,106,225,40,222,76,49,68,76,177,58,
17,17,42,128,189,117,134,185,22,133,42,113,165,176,187,244,253,130,21,70,38,85,242,21,207,247,124,24,214,49,155,140,126,90,54,65,208,108,66,209,74,186,235,49,94,238,153,182,100,245,236,97,53,83,102,17,
56,183,22,140,22,244,196,23,61,165,208,16,220,227,99,148,74,161,146,23,102,173,116,196,33,201,255,189,224,129,61,10,204,5,172,19,97,27,154,245,212,130,72,42,71,164,201,54,51,1,48,17,249,106,225,155,189,
42,34,135,143,50,241,188,110,35,248,174,73,33,36,245,208,80,5,160,227,133,160,13,69,80,198,46,3,243,20,162,143,97,102,132,85,224,217,210,51,239,229,227,238,143,21,36,134,184,167,219,126,249,175,39,94,
133,150,50,196,74,51,188,161,91,105,53,196,106,136,149,86,67,172,4,0,240,111,0,165,228,223,64,187,40,136,226,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* QuNeoGraph::quNeo_png = (const char*) resource_QuNeoGraph_quNeo_png;
const int QuNeoGraph::quNeo_pngSize = 3649;

// JUCER_RESOURCE: keithMcMillen_png, 4294, "../Builds/Resources/images/KeithMcMillen.png"
static const unsigned char resource_QuNeoGraph_keithMcMillen_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,129,0,0,0,31,8,6,0,0,0,192,204,174,99,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,
19,1,0,154,156,24,0,0,10,79,105,67,67,80,80,104,111,116,111,115,104,111,112,32,73,67,67,32,112,114,111,102,105,108,101,0,0,120,218,157,83,103,84,83,233,22,61,247,222,244,66,75,136,128,148,75,111,82,21,
8,32,82,66,139,128,20,145,38,42,33,9,16,74,136,33,161,217,21,81,193,17,69,69,4,27,200,160,136,3,142,142,128,140,21,81,44,12,138,10,216,7,228,33,162,142,131,163,136,138,202,251,225,123,163,107,214,188,
247,230,205,254,181,215,62,231,172,243,157,179,207,7,192,8,12,150,72,51,81,53,128,12,169,66,30,17,224,131,199,196,198,225,228,46,64,129,10,36,112,0,16,8,179,100,33,115,253,35,1,0,248,126,60,60,43,34,192,
7,190,0,1,120,211,11,8,0,192,77,155,192,48,28,135,255,15,234,66,153,92,1,128,132,1,192,116,145,56,75,8,128,20,0,64,122,142,66,166,0,64,70,1,128,157,152,38,83,0,160,4,0,96,203,99,98,227,0,80,45,0,96,39,
127,230,211,0,128,157,248,153,123,1,0,91,148,33,21,1,160,145,0,32,19,101,136,68,0,104,59,0,172,207,86,138,69,0,88,48,0,20,102,75,196,57,0,216,45,0,48,73,87,102,72,0,176,183,0,192,206,16,11,178,0,8,12,
0,48,81,136,133,41,0,4,123,0,96,200,35,35,120,0,132,153,0,20,70,242,87,60,241,43,174,16,231,42,0,0,120,153,178,60,185,36,57,69,129,91,8,45,113,7,87,87,46,30,40,206,73,23,43,20,54,97,2,97,154,64,46,194,
121,153,25,50,129,52,15,224,243,204,0,0,160,145,21,17,224,131,243,253,120,206,14,174,206,206,54,142,182,14,95,45,234,191,6,255,34,98,98,227,254,229,207,171,112,64,0,0,225,116,126,209,254,44,47,179,26,
128,59,6,128,109,254,162,37,238,4,104,94,11,160,117,247,139,102,178,15,64,181,0,160,233,218,87,243,112,248,126,60,60,69,161,144,185,217,217,229,228,228,216,74,196,66,91,97,202,87,125,254,103,194,95,192,
87,253,108,249,126,60,252,247,245,224,190,226,36,129,50,93,129,71,4,248,224,194,204,244,76,165,28,207,146,9,132,98,220,230,143,71,252,183,11,255,252,29,211,34,196,73,98,185,88,42,20,227,81,18,113,142,
68,154,140,243,50,165,34,137,66,146,41,197,37,210,255,100,226,223,44,251,3,62,223,53,0,176,106,62,1,123,145,45,168,93,99,3,246,75,39,16,88,116,192,226,247,0,0,242,187,111,193,212,40,8,3,128,104,131,225,
207,119,255,239,63,253,71,160,37,0,128,102,73,146,113,0,0,94,68,36,46,84,202,179,63,199,8,0,0,68,160,129,42,176,65,27,244,193,24,44,192,6,28,193,5,220,193,11,252,96,54,132,66,36,196,194,66,16,66,10,100,
128,28,114,96,41,172,130,66,40,134,205,176,29,42,96,47,212,64,29,52,192,81,104,134,147,112,14,46,194,85,184,14,61,112,15,250,97,8,158,193,40,188,129,9,4,65,200,8,19,97,33,218,136,1,98,138,88,35,142,8,
23,153,133,248,33,193,72,4,18,139,36,32,201,136,20,81,34,75,145,53,72,49,82,138,84,32,85,72,29,242,61,114,2,57,135,92,70,186,145,59,200,0,50,130,252,134,188,71,49,148,129,178,81,61,212,12,181,67,185,168,
55,26,132,70,162,11,208,100,116,49,154,143,22,160,155,208,114,180,26,61,140,54,161,231,208,171,104,15,218,143,62,67,199,48,192,232,24,7,51,196,108,48,46,198,195,66,177,56,44,9,147,99,203,177,34,172,12,
171,198,26,176,86,172,3,187,137,245,99,207,177,119,4,18,129,69,192,9,54,4,119,66,32,97,30,65,72,88,76,88,78,216,72,168,32,28,36,52,17,218,9,55,9,3,132,81,194,39,34,147,168,75,180,38,186,17,249,196,24,
98,50,49,135,88,72,44,35,214,18,143,19,47,16,123,136,67,196,55,36,18,137,67,50,39,185,144,2,73,177,164,84,210,18,210,70,210,110,82,35,233,44,169,155,52,72,26,35,147,201,218,100,107,178,7,57,148,44,32,
43,200,133,228,157,228,195,228,51,228,27,228,33,242,91,10,157,98,64,113,164,248,83,226,40,82,202,106,74,25,229,16,229,52,229,6,101,152,50,65,85,163,154,82,221,168,161,84,17,53,143,90,66,173,161,182,82,
175,81,135,168,19,52,117,154,57,205,131,22,73,75,165,173,162,149,211,26,104,23,104,247,105,175,232,116,186,17,221,149,30,78,151,208,87,210,203,233,71,232,151,232,3,244,119,12,13,134,21,131,199,136,103,
40,25,155,24,7,24,103,25,119,24,175,152,76,166,25,211,139,25,199,84,48,55,49,235,152,231,153,15,153,111,85,88,42,182,42,124,21,145,202,10,149,74,149,38,149,27,42,47,84,169,170,166,170,222,170,11,85,243,
85,203,84,143,169,94,83,125,174,70,85,51,83,227,169,9,212,150,171,85,170,157,80,235,83,27,83,103,169,59,168,135,170,103,168,111,84,63,164,126,89,253,137,6,89,195,76,195,79,67,164,81,160,177,95,227,188,
198,32,11,99,25,179,120,44,33,107,13,171,134,117,129,53,196,38,177,205,217,124,118,42,187,152,253,29,187,139,61,170,169,161,57,67,51,74,51,87,179,82,243,148,102,63,7,227,152,113,248,156,116,78,9,231,40,
167,151,243,126,138,222,20,239,41,226,41,27,166,52,76,185,49,101,92,107,170,150,151,150,88,171,72,171,81,171,71,235,189,54,174,237,167,157,166,189,69,187,89,251,129,14,65,199,74,39,92,39,71,103,143,206,
5,157,231,83,217,83,221,167,10,167,22,77,61,58,245,174,46,170,107,165,27,161,187,68,119,191,110,167,238,152,158,190,94,128,158,76,111,167,222,121,189,231,250,28,125,47,253,84,253,109,250,167,245,71,12,
88,6,179,12,36,6,219,12,206,24,60,197,53,113,111,60,29,47,199,219,241,81,67,93,195,64,67,165,97,149,97,151,225,132,145,185,209,60,163,213,70,141,70,15,140,105,198,92,227,36,227,109,198,109,198,163,38,
6,38,33,38,75,77,234,77,238,154,82,77,185,166,41,166,59,76,59,76,199,205,204,205,162,205,214,153,53,155,61,49,215,50,231,155,231,155,215,155,223,183,96,90,120,90,44,182,168,182,184,101,73,178,228,90,166,
89,238,182,188,110,133,90,57,89,165,88,85,90,93,179,70,173,157,173,37,214,187,173,187,167,17,167,185,78,147,78,171,158,214,103,195,176,241,182,201,182,169,183,25,176,229,216,6,219,174,182,109,182,125,
97,103,98,23,103,183,197,174,195,238,147,189,147,125,186,125,141,253,61,7,13,135,217,14,171,29,90,29,126,115,180,114,20,58,86,58,222,154,206,156,238,63,125,197,244,150,233,47,103,88,207,16,207,216,51,
227,182,19,203,41,196,105,157,83,155,211,71,103,23,103,185,115,131,243,136,139,137,75,130,203,46,151,62,46,155,27,198,221,200,189,228,74,116,245,113,93,225,122,210,245,157,155,179,155,194,237,168,219,
175,238,54,238,105,238,135,220,159,204,52,159,41,158,89,51,115,208,195,200,67,224,81,229,209,63,11,159,149,48,107,223,172,126,79,67,79,129,103,181,231,35,47,99,47,145,87,173,215,176,183,165,119,170,247,
97,239,23,62,246,62,114,159,227,62,227,60,55,222,50,222,89,95,204,55,192,183,200,183,203,79,195,111,158,95,133,223,67,127,35,255,100,255,122,255,209,0,167,128,37,1,103,3,137,129,65,129,91,2,251,248,122,
124,33,191,142,63,58,219,101,246,178,217,237,65,140,160,185,65,21,65,143,130,173,130,229,193,173,33,104,200,236,144,173,33,247,231,152,206,145,206,105,14,133,80,126,232,214,208,7,97,230,97,139,195,126,
12,39,133,135,133,87,134,63,142,112,136,88,26,209,49,151,53,119,209,220,67,115,223,68,250,68,150,68,222,155,103,49,79,57,175,45,74,53,42,62,170,46,106,60,218,55,186,52,186,63,198,46,102,89,204,213,88,
157,88,73,108,75,28,57,46,42,174,54,110,108,190,223,252,237,243,135,226,157,226,11,227,123,23,152,47,200,93,112,121,161,206,194,244,133,167,22,169,46,18,44,58,150,64,76,136,78,56,148,240,65,16,42,168,
22,140,37,242,19,119,37,142,10,121,194,29,194,103,34,47,209,54,209,136,216,67,92,42,30,78,242,72,42,77,122,146,236,145,188,53,121,36,197,51,165,44,229,185,132,39,169,144,188,76,13,76,221,155,58,158,22,
154,118,32,109,50,61,58,189,49,131,146,145,144,113,66,170,33,77,147,182,103,234,103,230,102,118,203,172,101,133,178,254,197,110,139,183,47,30,149,7,201,107,179,144,172,5,89,45,10,182,66,166,232,84,90,
40,215,42,7,178,103,101,87,102,191,205,137,202,57,150,171,158,43,205,237,204,179,202,219,144,55,156,239,159,255,237,18,194,18,225,146,182,165,134,75,87,45,29,88,230,189,172,106,57,178,60,113,121,219,10,
227,21,5,43,134,86,6,172,60,184,138,182,42,109,213,79,171,237,87,151,174,126,189,38,122,77,107,129,94,193,202,130,193,181,1,107,235,11,85,10,229,133,125,235,220,215,237,93,79,88,47,89,223,181,97,250,134,
157,27,62,21,137,138,174,20,219,23,151,21,127,216,40,220,120,229,27,135,111,202,191,153,220,148,180,169,171,196,185,100,207,102,210,102,233,230,222,45,158,91,14,150,170,151,230,151,14,110,13,217,218,180,
13,223,86,180,237,245,246,69,219,47,151,205,40,219,187,131,182,67,185,163,191,60,184,188,101,167,201,206,205,59,63,84,164,84,244,84,250,84,54,238,210,221,181,97,215,248,110,209,238,27,123,188,246,52,236,
213,219,91,188,247,253,62,201,190,219,85,1,85,77,213,102,213,101,251,73,251,179,247,63,174,137,170,233,248,150,251,109,93,173,78,109,113,237,199,3,210,3,253,7,35,14,182,215,185,212,213,29,210,61,84,82,
143,214,43,235,71,14,199,31,190,254,157,239,119,45,13,54,13,85,141,156,198,226,35,112,68,121,228,233,247,9,223,247,30,13,58,218,118,140,123,172,225,7,211,31,118,29,103,29,47,106,66,154,242,154,70,155,
83,154,251,91,98,91,186,79,204,62,209,214,234,222,122,252,71,219,31,15,156,52,60,89,121,74,243,84,201,105,218,233,130,211,147,103,242,207,140,157,149,157,125,126,46,249,220,96,219,162,182,123,231,99,206,
223,106,15,111,239,186,16,116,225,210,69,255,139,231,59,188,59,206,92,242,184,116,242,178,219,229,19,87,184,87,154,175,58,95,109,234,116,234,60,254,147,211,79,199,187,156,187,154,174,185,92,107,185,238,
122,189,181,123,102,247,233,27,158,55,206,221,244,189,121,241,22,255,214,213,158,57,61,221,189,243,122,111,247,197,247,245,223,22,221,126,114,39,253,206,203,187,217,119,39,238,173,188,79,188,95,244,64,
237,65,217,67,221,135,213,63,91,254,220,216,239,220,127,106,192,119,160,243,209,220,71,247,6,133,131,207,254,145,245,143,15,67,5,143,153,143,203,134,13,134,235,158,56,62,57,57,226,63,114,253,233,252,167,
67,207,100,207,38,158,23,254,162,254,203,174,23,22,47,126,248,213,235,215,206,209,152,209,161,151,242,151,147,191,109,124,165,253,234,192,235,25,175,219,198,194,198,30,190,201,120,51,49,94,244,86,251,
237,193,119,220,119,29,239,163,223,15,79,228,124,32,127,40,255,104,249,177,245,83,208,167,251,147,25,147,147,255,4,3,152,243,252,99,51,45,219,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,
0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,5,241,73,68,65,84,120,218,236,91,235,109,227,56,16,158,108,7,188,18,184,37,168,5,110,9,74,9,218,18,152,18,148,18,228,18,228,18,232,
18,228,18,232,18,164,18,116,127,134,184,15,3,190,164,88,74,128,51,1,35,116,248,152,225,188,103,72,191,173,235,74,175,246,255,110,191,94,36,120,181,159,34,4,19,17,181,220,183,68,52,236,220,199,18,81,79,
68,51,17,169,4,156,174,176,222,253,32,120,154,136,86,166,71,39,250,207,107,235,186,126,247,199,172,255,181,110,93,87,199,125,187,113,31,7,251,184,200,248,0,227,182,128,135,255,33,240,172,216,3,233,244,
52,30,212,90,2,189,83,43,219,138,121,13,255,93,136,232,2,223,239,27,225,33,142,55,49,214,9,237,145,123,43,97,125,30,63,4,158,1,218,24,65,167,211,45,193,188,81,250,114,218,220,241,216,36,230,58,161,29,
122,163,68,207,137,181,90,140,205,5,173,174,181,66,71,192,147,180,9,251,140,162,79,103,91,130,14,36,183,41,204,109,137,200,131,212,198,90,240,157,31,194,18,16,248,199,71,165,54,162,53,81,137,181,35,143,
61,18,90,105,25,223,37,51,231,44,120,72,27,3,223,111,162,127,122,96,24,24,122,45,16,103,228,143,230,185,255,16,209,103,98,110,48,251,35,28,206,100,204,107,173,75,33,97,42,45,143,221,65,232,110,194,164,
91,238,255,5,166,222,190,17,222,133,191,163,155,84,135,185,130,141,66,112,201,248,254,153,173,192,141,136,126,19,209,59,35,28,107,11,19,232,19,132,234,70,68,111,25,31,90,106,42,178,54,16,252,65,68,127,
192,135,223,35,90,251,193,56,232,74,1,60,10,222,2,194,99,128,54,230,40,43,80,19,19,72,31,133,159,150,255,31,252,148,222,225,143,48,118,104,190,16,15,140,145,40,59,236,109,32,90,159,35,145,247,192,223,
155,13,145,247,25,240,60,140,251,35,178,130,240,41,77,24,34,129,82,3,7,30,214,117,85,9,228,231,8,51,71,94,47,231,106,16,56,39,130,172,169,34,80,11,251,244,32,160,18,111,7,123,43,198,207,69,4,94,11,124,
29,239,171,14,134,135,180,209,64,195,6,250,10,214,161,64,33,190,54,242,63,39,232,190,73,8,60,72,115,96,190,207,48,197,136,168,119,74,140,105,56,232,148,16,56,5,196,94,153,208,49,152,10,230,24,192,219,
69,206,98,129,48,94,48,182,23,248,182,226,44,250,64,120,146,54,45,40,68,43,148,67,102,22,93,36,99,209,145,58,195,180,71,8,12,44,118,128,80,110,77,15,102,178,23,76,181,2,153,78,140,7,134,55,112,216,33,
147,102,73,60,61,224,32,9,174,128,105,109,194,180,58,33,220,147,32,182,58,16,158,164,141,5,218,96,95,1,163,7,158,31,96,27,33,44,45,240,46,155,246,230,24,106,51,38,191,100,150,45,248,205,94,16,213,10,205,
55,96,21,60,192,182,17,63,154,195,179,7,34,117,17,65,241,128,199,144,200,251,141,152,175,120,223,241,96,120,146,54,35,104,244,24,113,153,30,220,132,231,49,20,22,13,174,100,46,197,89,169,96,176,231,197,
126,67,128,129,190,171,19,2,160,65,163,80,211,125,196,42,24,208,8,95,112,5,40,76,13,19,108,76,156,105,224,253,125,194,154,248,130,111,61,10,94,140,54,30,198,177,63,2,157,38,16,128,64,207,25,226,168,174,
16,216,71,133,192,130,111,107,118,212,239,173,168,110,245,145,177,73,104,194,32,14,215,192,193,116,101,29,223,131,102,204,9,171,53,64,148,109,18,184,15,130,41,250,36,120,37,218,200,254,12,49,134,22,107,
70,177,247,80,195,71,140,194,109,36,232,104,118,164,123,115,4,168,244,75,141,208,240,153,137,48,70,252,100,159,129,169,97,95,151,73,161,28,239,61,100,198,13,192,117,39,194,203,209,6,251,6,232,59,9,1,48,
176,7,198,39,115,70,80,139,238,192,67,144,81,19,15,232,204,13,151,22,41,78,128,49,139,3,56,161,13,190,66,16,141,96,74,201,90,168,204,61,0,206,237,78,130,87,162,13,246,135,12,79,6,112,223,173,200,110,138,
119,13,191,18,37,221,240,87,243,93,64,91,89,85,124,143,84,22,91,168,118,45,80,113,187,67,9,118,97,88,239,176,159,230,57,247,66,249,246,198,48,62,50,183,125,138,43,148,75,2,247,43,224,154,171,26,30,1,47,
71,27,236,27,238,255,137,236,27,238,34,238,145,189,175,123,202,198,26,74,155,191,25,193,17,106,222,41,226,60,18,0,3,50,225,30,161,103,132,23,56,128,98,225,121,136,53,23,88,163,19,4,93,24,199,123,70,64,
31,153,178,119,3,76,15,165,239,220,213,238,179,225,73,218,160,16,106,40,47,235,4,125,13,240,236,47,172,107,129,39,58,203,191,132,59,112,145,18,177,207,152,64,31,241,221,173,8,122,20,155,166,144,211,142,
137,224,79,129,105,211,133,146,180,47,152,229,144,199,231,178,11,25,144,217,68,32,247,108,120,77,130,54,147,72,29,13,184,5,21,129,21,171,3,96,141,166,45,196,85,73,75,32,37,238,202,86,97,225,39,83,90,204,
215,32,249,29,95,9,55,48,111,97,183,114,129,43,84,5,110,228,35,114,117,253,96,88,215,132,102,154,90,115,151,153,163,65,163,59,97,126,131,102,58,198,251,8,120,49,218,200,139,162,112,163,120,133,27,197,
30,214,132,61,63,5,13,131,213,177,25,215,149,180,4,174,112,129,211,138,0,164,3,75,48,11,169,108,51,101,95,7,249,46,69,44,65,41,181,25,42,180,146,10,90,105,97,124,128,108,196,69,238,49,158,13,47,70,27,
5,25,5,246,61,220,1,160,245,8,214,171,77,84,110,167,154,192,62,117,67,86,58,168,2,38,118,226,21,77,27,97,86,155,48,155,38,17,253,247,21,53,138,169,34,133,45,17,96,72,188,231,139,189,27,124,54,188,24,109,
26,200,76,176,63,101,240,178,9,60,166,202,204,142,98,41,208,150,2,17,86,198,106,211,73,212,152,45,117,8,170,56,252,150,143,138,236,161,225,206,226,12,120,49,154,232,72,95,65,21,240,240,171,228,110,7,99,
244,198,251,5,41,116,223,245,202,185,219,249,6,226,72,120,109,165,91,57,244,141,161,218,241,170,231,193,169,137,221,241,42,121,207,43,230,103,53,181,241,29,227,25,240,150,68,255,212,31,159,124,5,240,7,
231,166,205,134,53,151,111,20,130,251,15,132,119,251,194,59,203,167,9,193,87,53,227,19,210,146,159,220,218,51,137,252,13,240,54,181,183,215,15,82,95,237,245,131,212,87,163,127,7,0,148,187,51,15,198,0,
100,51,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* QuNeoGraph::keithMcMillen_png = (const char*) resource_QuNeoGraph_keithMcMillen_png;
const int QuNeoGraph::keithMcMillen_pngSize = 4294;
