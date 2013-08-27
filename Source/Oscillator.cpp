//
//  Oscillator.cpp
//  QuNeoDemo
//
//  Created by Conner Lacy on 8/13/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

//#include "Oscillator.h"
#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioEngine.h"


//==============================================================================
/** A demo synth sound that's just a basic sine wave.. */
class SineWaveSound : public SynthesiserSound
{
public:
    SineWaveSound()
    {
    }
    
    bool appliesToNote (const int /*midiNoteNumber*/)           { return true; }
    bool appliesToChannel (const int /*midiChannel*/)           { return true; }
};

//==============================================================================
/** A simple demo synth voice that just plays a sine wave.. */
class SineWaveVoice  : public SynthesiserVoice
{
public:
    AudioEngine* audioEngine;
    
    SineWaveVoice(AudioEngine* audioEngine_)
    : audioEngine(audioEngine_),
    angleDelta (0.0),
    tailOff (1.0),
    lfoAngleDelta(0.0)
    
    {
        //audioEngine->synth.
    }
    
    void setLFO(double freq)
    {
        //std::cout << freq << "\n";
        lfoAngleDelta = freq/getSampleRate();
    }
    
    void setPitch(double pitch)
    {
        cyclesPerSecond = pitch;
        cyclesPerSample = cyclesPerSecond/getSampleRate();
        angleDelta = cyclesPerSample * 2.0 * double_Pi;
    }
    
    bool canPlaySound (SynthesiserSound* sound)
    {
        return dynamic_cast <SineWaveSound*> (sound) != 0;
    }
    
    void startNote (const int midiNoteNumber, const float velocity,
                    SynthesiserSound* /*sound*/, const int /*currentPitchWheelPosition*/)
    {
        currentAngle = 0.0;
        lfoCurrentAngle = 0.0;
        level = velocity * 0.15;
        tailOff = 0.0;
        
        cyclesPerSecond = MidiMessage::getMidiNoteInHertz (midiNoteNumber);
        cyclesPerSample = cyclesPerSecond / getSampleRate();
        
        angleDelta = cyclesPerSample * 2.0 * double_Pi;
        lfoAngleDelta = angleDelta/200.0;
    }
    
    void stopNote (const bool allowTailOff)
    {
        if (allowTailOff)
        {
            // start a tail-off by setting this flag. The render callback will pick up on
            // this and do a fade out, calling clearCurrentNote() when it's finished.
            
            if (tailOff == 0.0) // we only need to begin a tail-off if it's not already doing so - the
                // stopNote method could be called more than once.
                tailOff = 1.0;
        }
        else
        {
            // we're being told to stop playing immediately, so reset everything..
            
            clearCurrentNote();
            angleDelta = 0.0;
        }
    }
    
    void pitchWheelMoved (const int /*newValue*/)
    {
        // can't be bothered implementing this for the demo!
    }
    
    void controllerMoved (const int /*controllerNumber*/, const int /*newValue*/)
    {
        // not interested in controllers in this case.
    }
    
    void renderNextBlock (AudioSampleBuffer& outputBuffer, int startSample, int numSamples)
    {
        //---------------------------- Osc
        if (angleDelta != 0.0)
        {
            if (tailOff > 0)
            {
                while (--numSamples >= 0)
                {
                    const float currentSample = (float) (sin (currentAngle) * level * tailOff * sin(lfoCurrentAngle));
                    
                    for (int i = outputBuffer.getNumChannels(); --i >= 0;)
                        *outputBuffer.getSampleData (i, startSample) += currentSample;
                    
                    currentAngle += angleDelta;
                    lfoCurrentAngle += lfoAngleDelta;
                    ++startSample;
                    
                    tailOff *= 0.99;
                    
                    if (tailOff <= 0.005)
                    {
                        clearCurrentNote();
                        
                        angleDelta = 0.0;
                        break;
                    }
                }
            }
            else
            {
                while (--numSamples >= 0)
                {
                    const float currentSample = (float) (sin (currentAngle) * level * sin(lfoCurrentAngle));
                    
                    for (int i = outputBuffer.getNumChannels(); --i >= 0;)
                        *outputBuffer.getSampleData (i, startSample) += currentSample;
                    
                    currentAngle += angleDelta;
                    lfoCurrentAngle += lfoAngleDelta;
                    ++startSample;
                }
            }
        }
    }
    
private:
    double currentAngle, angleDelta, level, tailOff, lfoCurrentAngle, lfoAngleDelta, cyclesPerSecond, cyclesPerSample;
};