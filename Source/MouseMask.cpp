/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  24 Aug 2013 4:18:11pm

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

#include "MouseMask.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MouseMask::MouseMask (AboutQuNeoDemo* dw_)
: dw(dw_)
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (726, 600);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MouseMask::~MouseMask()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MouseMask::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MouseMask::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MouseMask::mouseDown (const MouseEvent& e)
{
    
    //[UserCode_mouseDown] -- Add your code here...
    //std::cout << "Mouse Down" << e.getMouseDownX() << e.getMouseDownY();
    if(!dw->isVisible())
    {
        int x = e.getMouseDownX();
        int y = e.getMouseDownY();
        
        if(y > 400)
        {
            y = 400;
        }
        
        if(x > 460)
        {
            x = 460;
        }
        
        dw->setTopLeftPosition(x, y);
        dw->setVisible(true);
    }
    else
    {
        dw->setVisible(false);
    }

    //[/UserCode_mouseDown]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MouseMask" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="726" initialHeight="600">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ffffff"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
