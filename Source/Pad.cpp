/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  7 Aug 2013 7:03:18pm

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

#include "Pad.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Pad::Pad ()
    : Component (L"pad")
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (100, 100);


    //[Constructor] You can add your own custom stuff here..
    on = false;
    x = 63;
    y = 63;
    pressure = 0;
    repeat = false;
    //[/Constructor]
}

Pad::~Pad()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Pad::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    if(!on)
    {
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2b2b2b));

    g.setGradientFill (ColourGradient (Colours::white,
                                       50.0f, 50.0f,
                                       Colour (0xffe4e4e4),
                                       88.0f, 88.0f,
                                       true));
    g.fillRoundedRectangle (5.0f, 5.0f, 90.0f, 90.0f, 13.0000f);

    g.setGradientFill (ColourGradient (Colours::white,
                                       50.0f, 50.0f,
                                       Colours::black,
                                       56.0f, 144.0f,
                                       true));
    g.drawRoundedRectangle (5.0f, 5.0f, 90.0f, 90.0f, 13.0000f, 3.0000f);

    //[UserPaint] Add your own custom painting code here..
    }
    else
    {
        //---------------------------------- Draw Pad On State
        g.fillAll (Colour (0xff2b2b2b));

        //Set bg
        g.setGradientFill (ColourGradient (Colour (0xff9d9d9d),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));
        
        g.setGradientFill (ColourGradient (Colours::white,
                                           50.0f, 50.0f,
                                           Colour (0xffe4e4e4),
                                           88.0f, 88.0f,
                                           true));
        


        //Draw pad
        g.fillRoundedRectangle (5.0f, 5.0f, 90.0f, 90.0f, 10.0000f);

        //Set pad border color
        g.setColour(Colour(0xf000ff00));
        g.setGradientFill (ColourGradient (Colour (0xe0ffffff),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colour(0xD000ff00),
                                           75.0f, 75.0f,
                                           true));
    
        //Draw pad border
        g.drawRoundedRectangle (5.0f, 5.0f, 90.0f, 90.0f, 10.0000f, 4.0000f);
        
        

        //------ Pressure
        g.setColour(Colour(0x30ff0000));
        g.setGradientFill (ColourGradient (Colour (0x309d9d9d),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));
        
        g.fillEllipse(50.0f - pressure/2.0f, 50.0f - pressure/2.0f, pressure, pressure);
        
        //g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)100));
        
        g.setGradientFill (ColourGradient (Colour (0x309d9d9d),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));

        //Pressure border
        g.drawEllipse(50.0f - pressure/2.0f, 50.0f - pressure/2.0f, pressure, pressure,pressure/7.0f);
        
        
        //--------- Draw locaters
        g.setGradientFill (ColourGradient (Colour (0xfff0f0f0),
                                           //50.0f, 50.0f,
                                           x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));
        
        g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)100));
        
        g.drawRect(x, 7.0f, 1.0f, 86.0f);
        g.drawRect(7.0f, y, 86.0f, 1.0f);
        
        g.setColour(Colour (0xff101010));
        
        //Gray pad border
        g.drawRoundedRectangle (6.0f, 6.0f, 88.0f, 88.0f, 10.0000f, 1.0000f);
        
        //-------- Draw target
        float targetSize = 25.0f;
        
        //target body
        g.setGradientFill (ColourGradient (Colour(0xffffff00),
                                           //50.0f, 50.0f,
                                           x, y,
                                           Colour(0x00ffff00),
                                           x + 10.0f, y + 10.0f,
                                           true));
        g.fillEllipse(x - targetSize/2.0f,y - targetSize/2.0f,targetSize,targetSize);
        
        //target border
        g.setColour(Colour(0xffffffff));
        g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)100));
        g.fillEllipse(x - targetSize/6.0f,y - targetSize/6.0f,targetSize/3.0f,targetSize/3.0f);
        g.setGradientFill (ColourGradient (Colour (0xff808080),
                                           //50.0f, 50.0f,
                                           x, y,
                                           Colour (0xc0101010),
                                           50.0f, 50.0f,
                                           true));
        g.drawEllipse(x - targetSize/6.0f,y - targetSize/6.0f,targetSize/3.0f,targetSize/3.0f,1);
        g.drawEllipse(x - targetSize/2.0f,y - targetSize/2.0f,targetSize,targetSize,4);
        //g.drawEllipse(x - targetSize/2.0f,y - targetSize/2.0f,targetSize,targetSize, 1);
        
        //Pressure border
        //g.drawEllipse(50.0f - pressure/2.0f, 50.0f - pressure/2.0f, pressure, pressure,1);
        

        //Draw Pressure

        //g.drawEllipse(x - pressure/127.0f*100.0f/8.0f,y - pressure/127.0f*100.0f/8.0f,pressure/127.0f*100.0f/4.0f,pressure/127.0f*100.0f/4.0f, 2);
        
        


    }
    //[/UserPaint]
}

void Pad::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void Pad::setState(bool state)
{
    on = state;
    this->repaint();
}

void Pad::setX(float xLoc)
{
    static float prev;
    
    if(xLoc != prev)
    {
        prev = xLoc;
        x = xLoc/127.0f*70.0f + 15;
        //std::cout << "x " << x << "\n";
        this->repaint(); 
    }

}

void Pad::setY(float yLoc)
{
    static float prev;
    
    if(yLoc != prev)
    {
        prev = yLoc;
        y = yLoc/127.0f*70.0f + 15;
        this->repaint();
    }
}

void Pad::setPressure(float p)
{
    static float prev;
    
    if(p != prev)
    {
        prev = p;
        pressure = p/127.0f*85.0f;
        //std::cout << "pressure" << pressure << "\n";
        this->repaint();
    }
}

void Pad::setRepeat(bool yesOrNo)
{
    repeat = yesOrNo;
}

float Pad::getPressure()
{
    return pressure*127.0f/85.0f;
}

bool Pad::getState()
{
    return on;
}
float Pad::getX()
{
    return (x - 15)*127.0f/70.0f;
}
float Pad::getY()
{
    return (y - 15)*127.0f/70.0f;
}

bool Pad::getRepeat()
{
    return repeat;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Pad" componentName="pad"
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="100" initialHeight="100">
  <BACKGROUND backgroundColour="ff2b2b2b">
    <ROUNDRECT pos="5 5 90 90" cornerSize="13" fill=" radial: 50 50, 88 88, 0=ffffffff, 1=ffe4e4e4"
               hasStroke="1" stroke="3, mitered, butt" strokeColour=" radial: 50 50, 56 144, 0=ffffffff, 1=ff000000"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
