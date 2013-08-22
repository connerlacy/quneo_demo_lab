/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  12 Aug 2013 2:43:44pm

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

#include "HorizontalSlider.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
HorizontalSlider::HorizontalSlider (AudioEngine* audioEngine_)
    : audioEngine(audioEngine_)
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    state = false;
    pressure = 0.0f;
    location = 0.0f;
    //[/Constructor]
}

HorizontalSlider::~HorizontalSlider()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void HorizontalSlider::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    if(!state)
    {
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2b2b2b));

    g.setGradientFill (ColourGradient (Colours::white,
                                       88.0f, 16.0f,
                                       Colour (0xffe4e4e4),
                                       224.0f, 24.0f,
                                       true));
    g.fillRoundedRectangle (4.0f, 4.0f, 162.0f, 30.0f, 12.0000f);

    g.setColour (Colour (0xff777777));
    g.drawRoundedRectangle (4.0f, 4.0f, 162.0f, 30.0f, 12.0000f, 3.0000f);

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

        g.fillRoundedRectangle (4.0f, 4.0f, 162.0f, 30.0f, 12.0000f);




        //----------------------------------- Locaters
        g.setGradientFill (ColourGradient (Colour (0xfff0f0f0),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));

        g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)100));
        g.drawRect(7.0f, 18.5f, 157.0f, 1.0f);



        //----------------------------------- Blob
        //Blob Color
        g.setGradientFill (ColourGradient (Colour (0xa00000ff),
                                           //50.0f, 50.0f,
                                           location, 13.0f,
                                           Colour(0xa0000000),
                                           location, 100.0f,
                                           true));
        //Blob Area/Rectangle
        g.fillRoundedRectangle(-5.0f, 19.0f - pressure/2.0f, 180.0f, pressure, 10.0f);

        //Blob border
        g.setColour(Colour(0xe0000000));
        g.drawRoundedRectangle (-5.0f, 19.0f - pressure/2.0f, 180.0f, pressure, 10.0f, 1.0000f);

        //--------------------------------------- Target
        float targetSize = 20.0f;
        float targetOffset = 8.0f;

        //target body
        g.setGradientFill (ColourGradient (Colour(0x50ff0000),
                                           //50.0f, 50.0f,
                                           location, 19.0f,
                                           Colour(0x00ff0000),
                                           location + 10.0f, 19.0f + 10.0f,
                                           true));

        g.fillEllipse(location - targetSize/2.0f + targetOffset,19.0f - targetSize/2.0f,targetSize,targetSize);

        //target border
        g.setColour(Colour(0xffffffff));
        g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)50));

        g.fillEllipse(location - targetSize/6.0f + targetOffset,19.0f - targetSize/6.0f,targetSize/3.0f,targetSize/3.0f);

        g.setGradientFill (ColourGradient (Colour (0xc0101010),
                                           150.0f, 19.0f,
                                           //location, 19.0f,
                                           Colour (0xff404040),
                                           50.0f, 50.0f,
                                           true));



        g.drawEllipse(location - targetSize/6.0f + targetOffset,19.0f - targetSize/6.0f,targetSize/3.0f,targetSize/3.0f,1);
        g.drawEllipse(location - targetSize/2.0f + targetOffset,19.0f - targetSize/2.0f,targetSize,targetSize,4);


        //-- Cover up
        g.setColour (Colour (0xff2b2b2b));
        g.fillRect(0.0f,0.0f,5.0f,40.0f);
        g.fillRect(164.0f,0.0f,40.0f,40.0f);

        //---------- Green Slider Border
        g.setGradientFill (ColourGradient (Colour (0xe0ffffff),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colour(0xD000ff00),
                                           75.0f, 75.0f,
                                           true));
        //Draw pad border
        g.drawRoundedRectangle (4.0f, 4.0f, 162.0f, 30.0f, 12.0000f, 4.0000f);

        g.setColour(Colour (0xff101010));

        //Gray pad border
        g.drawRoundedRectangle (6.0f, 6.0f, 158.0f, 26.0f, 10.0000f, 1.0000f);
    }
    //[/UserPaint]
}

void HorizontalSlider::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void HorizontalSlider::setState(bool st)
{
    state = st;
    if(!state)
    {
        audioEngine->filter[0]->makeInactive();
        audioEngine->filter[1]->makeInactive();
        audioEngine->filterSource->setFilterParameters(*audioEngine->filter[0]);
    }
    this->repaint();
}

void HorizontalSlider::setLoc(float loc)
{
    location = loc/127.0f*154.0f;
    audioEngine->filter[0]->makeBandPass(audioEngine->sR, loc/127.0f*5000.0f + 200, 7*pressure/30.0f + 0.5, 4);
    audioEngine->filter[1]->makeBandPass(audioEngine->sR, loc/127.0f*5000.0f + 200, 7*pressure/30.0f + 0.5, 4);
    audioEngine->filterSource->setFilterParameters(*audioEngine->filter[0]);
    
    this->repaint();
}

void HorizontalSlider::setPressure(float p)
{
    pressure = p/127.0f*26.0f;
    this->repaint();
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="HorizontalSlider" componentName=""
                 parentClasses="public Component" constructorParams="AudioEngine* audioEngine_"
                 variableInitialisers="audioEngine(audioEngine_)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff2b2b2b">
    <ROUNDRECT pos="4 4 162 30" cornerSize="12" fill=" radial: 88 16, 224 24, 0=ffffffff, 1=ffe4e4e4"
               hasStroke="1" stroke="3, mitered, butt" strokeColour="solid: ff777777"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
