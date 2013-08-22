//
//  Sampler.cpp
//  QuNeoDemo
//
//  Created by Conner Lacy on 8/19/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "Sampler.h"

Sampler::Sampler()
{
    String appPath = File::getSpecialLocation(File::currentApplicationFile).getFullPathName();
    
    File currentSample;
    
    DirectoryIterator iter(File(appPath + "/Contents/Resources/audio/longSlider"), true, "*.wav");
    
    WavAudioFormat wavFormat;
    
    
    
    while (iter.next()) 
    {
        currentSample = iter.getFile();
        
        if(currentSample.getFileName().contains("Funky Drummer"))
        {
            ScopedPointer<AudioFormatReader> audioReader (wavFormat.createReaderFor (new FileInputStream (currentSample),true));
            
            looper.addVoice(new SamplerVoice());
            
            BigInteger notes;
            notes.setRange (127, 1, true);
            
            looper.addSound (new SamplerSound ("sample",
                                               *audioReader,
                                               notes,
                                               127,   // root midi note
                                               0.005,  // attack time
                                               0.005,  // release time
                                               10.0  // maximum sample length
                                               ));
        }
    }
}

Sampler::~Sampler()
{
    
}

void Sampler::setMidiBuffer(MidiBuffer* bffr)
{
    looperBuffer = bffr;
}

void Sampler::setPlayer(AudioSourcePlayer* plr)
{
    player = plr;
}

void Sampler::setPlayerGain(float gain)
{
    player->setGain(gain);
}

void Sampler::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
{
    looper.setCurrentPlaybackSampleRate(sampleRate);
}

void Sampler::releaseResources()
{
    
}

void Sampler::getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill)
{
    //Clear Buffer
    bufferToFill.clearActiveBufferRegion();
    
    //----- MIDI Stuff
    MidiBuffer looperMidi;
    
    static bool once = false;
    static int64 sampleCount = 0;
    
    //Start loop for first time
    if(!once)
    {
        looperMidi.addEvent(MidiMessage::noteOn(1,127,1.0f), 0);
        once = true;
    }
    
    //Count samples
    for(int64 i = 0; i < bufferToFill.numSamples; i++)
    {
        sampleCount++;
        
        //Loop funky drummer
        if((sampleCount % 108544) == 0)
        {
            std::cout << sampleCount << " START-------------\n";
            looperMidi.addEvent(MidiMessage::noteOn(1,127,1.0f), i);
        }
    }
    
    looper.renderNextBlock(*bufferToFill.buffer, looperMidi, 0, bufferToFill.numSamples);
}