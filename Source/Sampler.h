//
//  Sampler.h
//  QuNeoDemo
//
//  Created by Conner Lacy on 8/19/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#ifndef __SAMPLER
#define __SAMPLER

#include "../JuceLibraryCode/JuceHeader.h"
#include "MenuBarObject.h"

class Sampler : public AudioSource
{
    public:
    Sampler();
    ~Sampler();
    
    Synthesiser looper;
    
    float latestMagnitude;
    float gainMult;
    
    MidiBuffer* looperBuffer;
    void setMidiBuffer(MidiBuffer* bffr);
    
    void prepareToPlay(int samplesPerBlockExpected, double sampleRate);
    void releaseResources();
    void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill);
    
    AudioSourcePlayer* player;
    void setPlayer(AudioSourcePlayer* plr);
    void setPlayerGain(float gain);

	MenuBarObject* menuBarObject;
	void setMenuBarObject(MenuBarObject *mb);
    
};

#endif // __SAMPLER