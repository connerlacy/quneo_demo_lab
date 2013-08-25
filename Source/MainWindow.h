/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic outline for a simple desktop window.

  ==============================================================================
*/

#ifndef __MAINWINDOW_H_B8899AFD__
#define __MAINWINDOW_H_B8899AFD__

#include "../JuceLibraryCode/JuceHeader.h"

#include "QuNeoGraph.h"
#include "AudioEngine.h"
#include "MidiManager.h"
#include "PluginMessage.h"
#include "AboutQuNeoDemo.h"
#include "MouseMask.h"

class AudioEngine;


//==============================================================================
class MainAppWindow   : public DocumentWindow
{
public:
    //==============================================================================
    MainAppWindow();
    ~MainAppWindow();
    
    QuNeoGraph* quNeoGraph;
    MidiManager* midiManager;
    PluginMessage* pluginMessage;

    IIRFilterAudioSource* samplerFilter;

    void closeButtonPressed();
    void showAbout();
    
    AboutQuNeoDemo* abq;


    /* Note: Be careful when overriding DocumentWindow methods - the base class
       uses a lot of them, so by overriding you might break its functionality.
       It's best to do all your work in you content component instead, but if
       you really have to override any DocumentWindow methods, make sure your
       implementation calls the superclass's method.
    */

private:
    AudioDeviceManager  deviceManager;
    MidiKeyboardState   keyboardState;
    AudioSourcePlayer   audioSourcePlayer;
    AudioSourcePlayer   looperSourcePlayer;
    AudioSourcePlayer   filterSourcePlayer;
    ScopedPointer<AudioEngine> audioEngine;
    
    Sampler* sampler;
    
    MenuBarComponent* menuBarModel;
    MouseMask* mouseMask;
    //MidiBuffer* masterMidi;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainAppWindow)
};


#endif  // __MAINWINDOW_H_B8899AFD__
