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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "LongSlider.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
LongSlider::LongSlider (AudioEngine* audioEngine_)
    : Component (L"longSlider"),
      audioEngine(audioEngine_)
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    state = false;
    location = 0.0f;
    width = 10.0f;
    pressure = 0.0f;
    isPlaying = false;
    
    params.roomSize = 0.5f;
    togState = false;
    
    //[/Constructor]
}

LongSlider::~LongSlider()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void LongSlider::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    if(!state)
    {
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2b2b2b));

    g.setGradientFill (ColourGradient (Colours::white,
                                       144.0f, 16.0f,
                                       Colour (0xffe4e4e4),
                                       256.0f, 16.0f,
                                       true));
    g.fillRoundedRectangle (4.0f, 4.0f, 300.0f, 30.0f, 12.0000f);

    g.setColour (Colour (0xff777777));
    g.drawRoundedRectangle (4.0f, 4.0f, 300.0f, 30.0f, 12.0000f, 3.0000f);

    //[UserPaint] Add your own custom painting code here..
    }
    else
    {

        //----------------------------------- State
        g.fillAll (Colour (0xff2b2b2b));

        g.setGradientFill (ColourGradient (Colours::white,
                                           144.0f, 16.0f,
                                           Colour (0xffe4e4e4),
                                           256.0f, 16.0f,
                                           true));

        g.fillRoundedRectangle (4.0f, 4.0f, 300.0f, 30.0f, 12.0000f);



        //----------------------------------- Locaters
        g.setGradientFill (ColourGradient (Colour (0xfff0f0f0),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));

        g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)100));

        //Vertical locator
        //g.drawRect(location, 7.0f, 1.0f, 30.0f);

        g.drawRect(7.0f, 19.0f, 300.0f, 1.0f);








        //----------------------------------- Blob
        g.setGradientFill (ColourGradient (Colour (0xa00000ff),
                                           //50.0f, 50.0f,
                                           location, 13.0f,
                                           Colour(0xa0000000),
                                           location, 100.0f,
                                           true));

        g.fillRoundedRectangle(location - width/2.0f - 10, 19.0f - pressure/2.0f, width + 20, pressure, 5.0f);

        //Blob border
        g.setColour(Colour(0xe0000000));
        g.drawRoundedRectangle (location - width/2.0f - 10, 19.0f - pressure/2.0f, width + 20, pressure, 5.0000f, 1.0000f);



        //--------------Center dot
        /*g.drawEllipse(location - 4.0f, 15.0f, 9.0f, 9.0f, 1.0f);

        g.setGradientFill (ColourGradient (Colour (0xa0ffffff),
                                           //50.0f, 50.0f,
                                           location, 15.0f,
                                           Colour(0xD00000ff),
                                           75.0f, 75.0f,
                                           true));

        g.setColour(Colour(0x55000000));
        g.fillEllipse(location - 4.0f, 15.0f, 9.0f, 9.0f);*/

        //--------------------------------------- Target
        float targetSize = 20.0f;

        //target body
        g.setGradientFill (ColourGradient (Colour(0x50ff0000),
                                           //50.0f, 50.0f,
                                           location, 19.0f,
                                           Colour(0x00ff0000),
                                           location + 10.0f, 19.0f + 10.0f,
                                           true));
        g.fillEllipse(location - targetSize/2.0f,19.0f - targetSize/2.0f,targetSize,targetSize);

        //target border
        g.setColour(Colour(0xffffffff));
        g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)50));
        g.fillEllipse(location - targetSize/6.0f,19.0f - targetSize/6.0f,targetSize/3.0f,targetSize/3.0f);
        g.setGradientFill (ColourGradient (Colour (0xc0101010),
                                           150.0f, 19.0f,
                                           //location, 19.0f,
                                           Colour (0xff404040),
                                           50.0f, 50.0f,
                                           true));



        g.drawEllipse(location - targetSize/6.0f,19.0f - targetSize/6.0f,targetSize/3.0f,targetSize/3.0f,1);
        g.drawEllipse(location - targetSize/2.0f,19.0f - targetSize/2.0f,targetSize,targetSize,4);








        //-- Cover up
        g.setColour (Colour (0xff2b2b2b));
        g.fillRect(0.0f,0.0f,5.0f,40.0f);
        g.fillRect(304.0f,0.0f,40.0f,40.0f);


        //---------- slider border color
        g.setGradientFill (ColourGradient (Colour (0xe0ffffff),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colour(0xD000ff00),
                                           75.0f, 75.0f,
                                           true));
        //Draw pad border
        g.drawRoundedRectangle (4.0f, 4.0f, 300.0f, 30.0f, 10.0000f, 4.0000f);

        g.setColour(Colour (0xff101010));

        //Gray pad border
        g.drawRoundedRectangle (6.0f, 6.0f, 296.0f, 26.0f, 10.0000f, 1.0000f);

    }
    //[/UserPaint]
}

void LongSlider::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void LongSlider::setState(bool st)
{
    state = st;
    
    this->repaint();
}

void LongSlider::setLoc(float loc)
{
    location = loc/127.0f*280.0f + 13.0f;
    sampler->setPlayerGain(loc/127.0f);
    this->repaint();
}

void LongSlider::setPressure(float p)
{
    pressure = p/127.0f*30.0f;
    this->repaint();
}

void LongSlider::setWidth(float wd)
{
    width = wd/127.0f*300.0f;
    this->repaint();
}

void LongSlider::timerCallback(int timerID)
{

    
}

void LongSlider::setSampler(Sampler* smplr)
{
    sampler = smplr;
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="LongSlider" componentName="longSlider"
                 parentClasses="public Component, public MultiTimer" constructorParams="AudioEngine* audioEngine_"
                 variableInitialisers="audioEngine(audioEngine_)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff2b2b2b">
    <ROUNDRECT pos="4 4 300 30" cornerSize="12" fill=" radial: 144 16, 256 16, 0=ffffffff, 1=ffe4e4e4"
               hasStroke="1" stroke="3, mitered, butt" strokeColour="solid: ff777777"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
