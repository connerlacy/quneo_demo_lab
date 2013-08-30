//
//  AudioEngine.h
//  QuNeoDemo
//
//  Created by Conner Lacy on 8/3/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#ifndef __AUDIO_ENGINE
#define __AUDIO_ENGINE

#include "../JuceLibraryCode/JuceHeader.h"
#include "Oscillator.h"
#include "Pad.h"
#include <iostream>

//#include "Oscillator.cpp"

class AudioEngine : public AudioSource
{
public:
    AudioEngine();
    ~AudioEngine();
    
    void prepareToPlay(int samplesPerBlockExpected, double sampleRate);
    void releaseResources();
    void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill);
    
    //Oscillator methods
    void setLFO(int instance, double freq);
    void setPitch(int instance, double pitch);
    
    Pad* pad[16];
    
    //Synths
    Synthesiser synth;
    Synthesiser oscSynth;
    //Synthesiser looper;
    
    float latestMagnitude;
    
    MidiBuffer* looperBuffer;
    void setMidiBuffer(MidiBuffer* bffr);
    
    IIRFilterAudioSource* filterSource;
    void setSamplerFilter(IIRFilterAudioSource* fS);
    
    //Filter
    IIRFilter* filter[2];

    //Sample Rate
    int sR;
    
private:
    
    
};

#endif // __AUDIO_ENGINE