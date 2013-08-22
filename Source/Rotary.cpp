/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  12 Aug 2013 2:43:46pm

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

#include "Rotary.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Rotary::Rotary (AudioEngine* audioEngine_, int instance_)
    : audioEngine(audioEngine_),
      instance(instance_)
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (110, 110);


    //[Constructor] You can add your own custom stuff here..
    state = false;
    location = 0.0f;
    direction = 0.0f;
    pressure = 0.0f;
    //[/Constructor]
}

Rotary::~Rotary()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Rotary::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    if(!state)
    {
    //[/UserPrePaint]

    g.fillAll (Colour (0xff2b2b2b));

    g.setGradientFill (ColourGradient (Colours::white,
                                       55.0f, 55.0f,
                                       Colour (0xffe4e4e4),
                                       88.0f, 88.0f,
                                       true));
    g.fillEllipse (5.0f, 5.0f, 100.0f, 100.0f);

    g.setColour (Colour (0xff777777));
    g.drawEllipse (5.0f, 5.0f, 100.0f, 100.0f, 3.0000f);

    //[UserPaint] Add your own custom painting code here..
    }
    else
    {

        g.setGradientFill (ColourGradient (Colours::white,
                                           55.0f, 55.0f,
                                           Colour (0xffe4e4e4),
                                           88.0f, 88.0f,
                                           true));
        g.fillEllipse (5.0f, 5.0f, 100.0f, 100.0f);

        g.setColour (Colour (0xff777777));
        g.drawEllipse (5.0f, 5.0f, 100.0f, 100.0f, 3.0000f);

        //--------- Draw locaters
        float r = 55.0f*1.9f;
        g.setGradientFill (ColourGradient (Colour (0xfff0f0f0),
                                           55.0f, 55.0f,
                                           //x, y,
                                           Colours::white,
                                           150.0f, 50.0f,
                                           true));

        g.setColour(Colour((uint8)200,(uint8)200,(uint8)200,(uint8)200));

        g.drawLine(55.0f, 55.0f, r*cos(location)/2.0f + 55.0f, r*sin(location)/2.0f + 55.0f, 2.0f);


        //---------- Green Slider Border
        g.setGradientFill (ColourGradient (Colour (0xe0ffffff),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colour(0xff00ff00),
                                           75.0f, 75.0f,
                                           true));
        //Draw pad border
        g.drawEllipse (5.0f, 5.0f, 100.0f, 100.0f, 4.0000f);

        g.setColour(Colour (0xff101010));

        //Gray pad border
        g.drawEllipse (6.0f, 6.0f, 98.0f, 98.0f, 1.0000f);

        //------ Pressure
        g.setColour(Colour(0x30ff0000));
        g.setGradientFill (ColourGradient (Colour (0x309d9d9d),
                                           50.0f, 50.0f,
                                           //x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));

        g.fillEllipse(55.0f - pressure/2.0f, 55.0f - pressure/2.0f, pressure, pressure);

        //g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)100));

        g.setGradientFill (ColourGradient (Colour (0x309d9d9d),
                                           55.0f, 55.0f,
                                           //x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));

        //Pressure border
        g.drawEllipse(55.0f - pressure/2.0f, 55.0f - pressure/2.0f, pressure, pressure,pressure/7.0f);

        //Center dot
        g.setGradientFill (ColourGradient (Colours::white,                                           50.0f, 50.0f,
                                           //x, y,
                                           Colour (0xff9d9d9d),

                                           150.0f, 50.0f,
                                           true));

        g.fillEllipse(55.0f - 5.0f, 55.0f - 5.0f, 10.0f, 10.0f);

        g.setGradientFill (ColourGradient (Colour (0x309d9d9d),
                                           55.0f, 55.0f,
                                           //x, y,
                                           Colours::red,
                                           150.0f, 50.0f,
                                           true));
        g.drawEllipse(55.0f - 3.0f, 55.0f - 3.0f, 6.0f, 6.0f, 1.0f);

        //------------
        float scale = 0.95f;
        g.setColour(Colour((uint8)255,(uint8)255,(uint8)255,(uint8)200));
        g.fillEllipse (r*cos(location)/2.0f*scale + 50.0f, r*sin(location)/2.0f*scale + 50.0f, 10.0f,10.0f);

        g.setColour(Colour((uint8)0,(uint8)0,(uint8)0,(uint8)100));
        g.drawEllipse (r*cos(location)/2.0f*scale + 50.0f, r*sin(location)/2.0f*scale + 50.0f, 10.0f, 10.0f, 1.0f);

    }

    //[/UserPaint]
}

void Rotary::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void Rotary::setState(bool st)
{
    state = st;
    
    if(state)
    {
        if(instance == 0)
        {
            audioEngine->oscSynth.noteOn(1,75,1.0f);
            /*if(direction)
            {
                audioEngine->oscSynth.noteOff(1,0,1.0f);
                audioEngine->oscSynth.noteOn(1,64,0.1f); 
            }
            else
            {
                audioEngine->oscSynth.noteOff(1,64,1.0f);
                audioEngine->oscSynth.noteOn(1,0,0.1f);
            }*/
        }
        else
        {
            audioEngine->oscSynth.noteOn(1,82,1.0f);
            /*if(direction)
            {
                audioEngine->oscSynth.noteOff(1,7,1.0f);
                audioEngine->oscSynth.noteOn(1,71,0.1f);
            }
            else
            {
                audioEngine->oscSynth.noteOff(1,71,1.0f);
                audioEngine->oscSynth.noteOn(1,7,0.1f);
            }*/
        }
    }
    else
    {
        if(instance == 0)
        {
            audioEngine->oscSynth.noteOff(1,75,1.0f);
            //audioEngine->oscSynth.noteOff(1,82,1.0f);
        }
        else
        {
            //audioEngine->oscSynth.noteOff(1,75,1.0f);
            audioEngine->oscSynth.noteOff(1,82,1.0f);
        }
    }
        this->repaint();
}

void Rotary::setPressure(float p)
{
    pressure = p/127.0f*90.0f;
    if(instance)
    {
        audioEngine->setPitch(instance, p/127.0f*100.0+300.0);
    }
    else
    {
        audioEngine->setPitch(instance, p/127.0f*100.0+150);
    }
    
    
    this->repaint();
}

void Rotary::setDirection(float dir)
{
    direction = dir;
    this->repaint();
}

void Rotary::setLocation(float loc)
{
    static bool prevDir = true;
    
    location = ((loc)/126.0f)*3.14159265*2 - 3.14159265/2;
    
    if(loc == 1)
    {
        direction = false;
    }
    else
    {
        direction = true;
    }
    
    if(direction != prevDir)
    {
        prevDir = direction;
        //directionChanged();
    }
    
    audioEngine->setLFO(instance, loc/127.0f * 300.0f + 4.0f);
    
    this->repaint();
}

void Rotary::directionChanged()
{
    //std::cout << "changed\n";
    
    if(state)
    {
        if(instance == 0)
        {
            if(direction)
            {
                audioEngine->oscSynth.noteOff(1,0,1.0f);
                audioEngine->oscSynth.noteOn(1,64,0.1f); 
            }
            else
            {
                audioEngine->oscSynth.noteOff(1,64,1.0f);
                audioEngine->oscSynth.noteOn(1,0,0.1f);
            }
        }
        else
        {
            if(direction)
            {
                audioEngine->oscSynth.noteOff(1,7,1.0f);
                audioEngine->oscSynth.noteOn(1,71,0.1f);
            }
            else
            {
                audioEngine->oscSynth.noteOff(1,71,1.0f);
                audioEngine->oscSynth.noteOn(1,7,0.1f);
            }
            
        }
        
    }
    else
    {
        if(instance == 0)
        {
            audioEngine->oscSynth.noteOff(1,0,1.0f);
            audioEngine->oscSynth.noteOff(1,64,1.0f);
        }
        else
        {
            audioEngine->oscSynth.noteOff(1,7,1.0f);
            audioEngine->oscSynth.noteOff(1,71,1.0f);
        }
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Rotary" componentName=""
                 parentClasses="public Component" constructorParams="AudioEngine* audioEngine_"
                 variableInitialisers="audioEngine(audioEngine_)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330000013" fixedSize="1"
                 initialWidth="110" initialHeight="110">
  <BACKGROUND backgroundColour="ff2b2b2b">
    <ELLIPSE pos="5 5 100 100" fill=" radial: 55 55, 88 88, 0=ffffffff, 1=ffe4e4e4"
             hasStroke="1" stroke="3, mitered, butt" strokeColour="solid: ff777777"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
