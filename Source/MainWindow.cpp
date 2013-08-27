/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic outline for a simple desktop window.

  ==============================================================================
*/

#include "MainWindow.h"

//==============================================================================
MainAppWindow::MainAppWindow()
    : DocumentWindow (JUCEApplication::getInstance()->getApplicationName(),
#ifdef JUCE_MAC
                      Colour(0x005b5b5b),
#else
                      Colour(0xFF5b5b5b),      
#endif
                      DocumentWindow::allButtons)
{   
    //Init fampler and filter(s)
    sampler = new Sampler();
    looperSourcePlayer.setSource(sampler);
    samplerFilter = new IIRFilterAudioSource(sampler, true);
    filterSourcePlayer.setSource(samplerFilter);
    deviceManager.addAudioCallback(&filterSourcePlayer);
    sampler->setPlayer(&filterSourcePlayer);
 
    //Create Audio Engine and set it as our audio source
    audioEngine = new AudioEngine();
    audioSourcePlayer.setSource(audioEngine);
    audioEngine->setSamplerFilter(samplerFilter);
    deviceManager.addAudioCallback(&audioSourcePlayer);
    
    //Initialize graphics
    quNeoGraph = new QuNeoGraph(audioEngine);
    quNeoGraph->setLongSliderSampler(sampler);
    setContentOwned(quNeoGraph, true);

    pluginMessage = new PluginMessage();
    quNeoGraph->addChildComponent(pluginMessage,-1);
    pluginMessage->setTopLeftPosition(0, 0);
    
    abq = new AboutQuNeoDemo();
    quNeoGraph->addChildComponent(abq,-1);
    abq->setTopLeftPosition(0,0);
    
    mouseMask = new MouseMask(abq);
    quNeoGraph->addChildComponent(mouseMask,-1);
    mouseMask->setTopLeftPosition(0, 0);
    mouseMask->setVisible(true);
    mouseMask->setAlwaysOnTop(true);
    abq->setVisible(false);
    
    this->setUsingNativeTitleBar(true);
    centreWithSize (726, 549);
    setVisible (true);

    //Create Midi manager
    midiManager = new MidiManager(audioEngine, pluginMessage);
    midiManager->addActionListener(quNeoGraph);
    
    //Give Audio engine access to pad methods
    for(int i = 0; i < 16; i++)
    {
        audioEngine->pad[i] = quNeoGraph->getPad(i);
    }
    
    //Initialize device manager (Start Audio)
    //deviceManager.initialise (1, 2, nullptr, true, String::empty, 0);
	deviceManager.initialise (2, 2, 0, true, String::empty, 0);
}

MainAppWindow::~MainAppWindow()
{
    
    
    audioSourcePlayer.setSource (0);
    filterSourcePlayer.setSource(0);
    looperSourcePlayer.setSource(0);
    
    deviceManager.removeAudioCallback (&audioSourcePlayer);
	deviceManager.removeAudioCallback (&filterSourcePlayer);
    deviceManager.removeAudioCallback (&looperSourcePlayer);
    
    //deleteAndZero(audioEngine);
    
    
    deleteAndZero(samplerFilter);
    deleteAndZero(midiManager);
    deleteAndZero(quNeoGraph);
    deleteAndZero(pluginMessage);
    deleteAndZero(abq);
    deleteAndZero(mouseMask);


}

void MainAppWindow::closeButtonPressed()
{
    JUCEApplication::getInstance()->systemRequestedQuit();
}

void MainAppWindow::showAbout()
{
    abq->setVisible(true);
}

//-------------------------------------------------------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------------------------//


