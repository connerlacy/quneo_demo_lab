//
//  MidiManager.h
//  14BitMidi
//
//  Created by Conner Lacy on 5/6/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#ifndef MIDIMANAGER_H
#define MIDIMANAGER_H

#include <iostream>
#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioEngine.h"
#include "Sampler.h"
#include "PluginMessage.h"

class MidiManager : public MidiInputCallback,
                    public ActionBroadcaster,
                    public Timer
{
public:
	
    MidiManager(AudioEngine* audioEngine_, PluginMessage* mw);
    ~MidiManager();
	
	/*int     getCurrentMidiNote();
     float   getCurrentMidiNoteHz();
     int     getCurrentControlNum();
     int     getCurrentControlVal();
     bool    isMidiNoteOn();
     bool    getControlChange();
     void    setControlChangeOff();
     void    setMidiNoteOff();
     int     getCurrentMidiVelocity();*/
    
	//required of any superclass of MidiInputCallback.  This is called everytime a midi message is played
	void handleIncomingMidiMessage (MidiInput* source, const MidiMessage& message);
    void timerCallback();

    AudioEngine* audioEngine;
    Sampler* sampler;
    PluginMessage* mw;
	
private:
	
	ScopedPointer<MidiInput> midiInput;
    ScopedPointer<MidiOutput> midiOutput;
	
	int midiNote;
	float midiNoteHz;
	bool midiNoteOn; 
	int controlNum;
	int controlVal;
	bool controlChange;
	int velocity;
	
};

#endif