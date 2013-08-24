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

#ifndef __JUCER_HEADER_PLUGINMESSAGE_PLUGINMESSAGE_A0EA4B3A__
#define __JUCER_HEADER_PLUGINMESSAGE_PLUGINMESSAGE_A0EA4B3A__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class PluginMessage  : public Component
{
public:
    //==============================================================================
    PluginMessage ();
    ~PluginMessage();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setLabelText(String);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    Label* label;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    PluginMessage (const PluginMessage&);
    const PluginMessage& operator= (const PluginMessage&);
};


#endif   // __JUCER_HEADER_PLUGINMESSAGE_PLUGINMESSAGE_A0EA4B3A__
