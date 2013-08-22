#include "MidiManager.h"


MidiManager::MidiManager(AudioEngine* audioEngine_) : audioEngine(audioEngine_), midiNote(0), velocity(0) 

{
    
    //------ Set up MIDI input device
	//midiInput = MidiInput::openDevice(MidiInput::getDefaultDeviceIndex(),this);
    
    for (int i =0; i < MidiInput::getDevices().size(); i++)
    {
        std::cout << String("midi device: ") << MidiInput::getDevices()[i] << String(" index:") << i << "\n";
        
        if(MidiInput::getDevices()[i].contains(String("QUNEO")))
        {
            midiInput = MidiInput::openDevice(i, this);
        }
    }
	
    
    
    if(midiInput) 
    {
        midiInput->start();
    }

}

MidiManager::~MidiManager()
{
	midiInput->stop();
}

void MidiManager::handleIncomingMidiMessage (MidiInput* source, const MidiMessage& message)
{
    if(message.getChannel())
    {
        //------------------------------- Notes
        if(message.isNoteOnOrOff())
        {
            //----------- Pads
            if(message.getNoteNumber() >= 36 && message.getNoteNumber() <=51)
            {
                //printf("note: %i    velocity: %i\n", message.getNoteNumber(), message.getVelocity());
            
                String noteMsg;
                String noteNum;
                String noteVel;
            
            
                if(message.getVelocity() != 0)
                {
                    //Turn note on
                    //audioEngine->synth.noteOn(1,message.getNoteNumber(),100.00/127.00);
                
                    //Format message for talking to graphics
                    noteMsg = String("Note On");
                    noteNum = String(message.getNoteNumber());
                    noteVel = String(message.getVelocity());
                
                    noteMsg.append(noteNum, 20);
                
                    sendActionMessage(noteMsg);
                }
                else
                {
                    //audioEngine->synth.noteOff(1,message.getNoteNumber(),1);
                    sendActionMessage(String("Note Off") + String(message.getNoteNumber()));
                }
            }
            //-------- Long Slider
            else if(message.getNoteNumber() == 10)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("LongSlider On")); 
                }
                else
                {
                    sendActionMessage(String("LongSlider Off"));
                }
                
            }
            
            //------- Up Buttons
            //0
            else if(message.getNoteNumber() == 20)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("UpButton Zero On")); 
                }
                else
                {
                    sendActionMessage(String("UpButton Zero Off"));
                }
                
            }

            //1
            else if(message.getNoteNumber() == 22)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("UpButton One On")); 
                }
                else
                {
                    sendActionMessage(String("UpButton One Off"));
                }
            }
            
            //------- DownButton
            //0
            else if(message.getNoteNumber() == 21)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("DownButton Zero On")); 
                }
                else
                {
                    sendActionMessage(String("DownButton Zero Off"));
                }
            }
            
            //1
            else if(message.getNoteNumber() == 23)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("DownButton One On")); 
                }
                else
                {
                    sendActionMessage(String("DownButton One Off"));
                }
            }
            
            //------- Left/Right Buttons
            //Left 0
            else if(message.getNoteNumber() == 11)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("LeftButton Zero On")); 
                }
                else
                {
                    sendActionMessage(String("LeftButton Zero Off"));
                }
            }
            //Right 0
            else if(message.getNoteNumber() == 12)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("RightButton Zero On")); 
                }
                else
                {
                    sendActionMessage(String("RightButton Zero Off"));
                }
            }
            //Left 1
            else if(message.getNoteNumber() == 13)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("LeftButton One On")); 
                }
                else
                {
                    sendActionMessage(String("LeftButton One Off"));
                }
            }
            //Right 1
            else if(message.getNoteNumber() == 14)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("RightButton One On")); 
                }
                else
                {
                    sendActionMessage(String("RightButton One Off"));
                }
            }
            //Left 2
            else if(message.getNoteNumber() == 15)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("LeftButton Two On")); 
                }
                else
                {
                    sendActionMessage(String("LeftButton Two Off"));
                }
            }
            //Right 2
            else if(message.getNoteNumber() == 16)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("RightButton Two On")); 
                }
                else
                {
                    sendActionMessage(String("RightButton Two Off"));
                }
            }
            //Left 3
            else if(message.getNoteNumber() == 17)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("LeftButton Three On")); 
                }
                else
                {
                    sendActionMessage(String("LeftButton Three Off"));
                }
            }
            //Right 3
            else if(message.getNoteNumber() == 18)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("RightButton Three On")); 
                }
                else
                {
                    sendActionMessage(String("RightButton Three Off"));
                }
            }
            //------- Rhombus Button
            else if(message.getNoteNumber() == 19)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("RhombusButton On")); 
                }
                else
                {
                    sendActionMessage(String("RhombusButton Off"));
                }
            }
            
            //------- Stop Button
            else if(message.getNoteNumber() == 25)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("StopButton On")); 
                }
                else
                {
                    sendActionMessage(String("StopButton Off"));
                }
            }
            
            //------- Record Button
            else if(message.getNoteNumber() == 24)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("RecordButton On")); 
                }
                else
                {
                    sendActionMessage(String("RecordButton Off"));
                }
            }
            
            //------- Play Button
            else if(message.getNoteNumber() == 26)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("PlayButton On")); 
                }
                else
                {
                    sendActionMessage(String("PlayButton Off"));
                }
            }
            
            //------- Rotaries
            //0
            else if(message.getNoteNumber() == 4)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("Rotary Zero On")); 
                }
                else
                {
                    sendActionMessage(String("Rotary Zero Off"));
                }
            }
            //1
            else if(message.getNoteNumber() == 5)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("Rotary One On")); 
                }
                else
                {
                    sendActionMessage(String("Rotary One Off"));
                }
            }
            
            //------- HSliders
            //0
            else if(message.getNoteNumber() == 0)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("HSlider Zero On")); 
                }
                else
                {
                    sendActionMessage(String("HSlider Zero Off"));
                }
            }
            //1
            else if(message.getNoteNumber() == 1)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("HSlider One On")); 
                }
                else
                {
                    sendActionMessage(String("HSlider One Off"));
                }
            }
            //2
            else if(message.getNoteNumber() == 2)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("HSlider Two On")); 
                }
                else
                {
                    sendActionMessage(String("HSlider Two Off"));
                }
            }
            //3
            else if(message.getNoteNumber() == 3)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("HSlider Three On")); 
                }
                else
                {
                    sendActionMessage(String("HSlider Three Off"));
                }
            }
            
            //------- VSliders
            //0
            else if(message.getNoteNumber() == 6)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("VSlider Zero On")); 
                }
                else
                {
                    sendActionMessage(String("VSlider Zero Off"));
                }
            }
            //1
            else if(message.getNoteNumber() == 7)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("VSlider One On")); 
                }
                else
                {
                    sendActionMessage(String("VSlider One Off"));
                }
            }
            //2
            else if(message.getNoteNumber() == 8)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("VSlider Two On")); 
                }
                else
                {
                    sendActionMessage(String("VSlider Two Off"));
                }
            }
            //3
            else if(message.getNoteNumber() == 9)
            {
                if(message.getVelocity() != 0)
                {
                    sendActionMessage(String("VSlider Three On")); 
                }
                else
                {
                    sendActionMessage(String("VSlider Three Off"));
                }
            }
        }
        
        //----------------------------- Controller
        else if(message.isController())
        {
            //------ Pads: X,Y,Z (Pressure)
            if(message.getControllerNumber() >= 23 && message.getControllerNumber() <= 70)
            {
                sendActionMessage(String("CC") + String(message.getControllerNumber()) + String(message.getControllerValue()));  
            }
            
            //------ Long Slider
            //Pressure
            else  if(message.getControllerNumber() == 22)
            {
                sendActionMessage(String("LongSlider Pressure") + String(message.getControllerValue()));
            }
            //Location
            else  if(message.getControllerNumber() == 10)
            {
                sendActionMessage(String("LongSlider Location") + String(message.getControllerValue()));
            }
            //Width
            else  if(message.getControllerNumber() == 11)
            {
                sendActionMessage(String("LongSlider Width") + String(message.getControllerValue()));
            }
            
            //------ Up Buttons
            else if(message.getControllerNumber() ==  80)
            {
                sendActionMessage(String("UpButton Zero Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  82)
            {
                sendActionMessage(String("UpButton One Pressure") + String(message.getControllerValue()));
            }
            //------ DownButton
            else if(message.getControllerNumber() ==  81)
            {
                sendActionMessage(String("DownButton Zero Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  83)
            {
                sendActionMessage(String("DownButton One Pressure") + String(message.getControllerValue()));
            }
            
            //------ Left/RightButtons
            else if(message.getControllerNumber() ==  71)
            {
                sendActionMessage(String("LeftButton Zero Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  72)
            {
                sendActionMessage(String("RightButton Zero Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  73)
            {
                sendActionMessage(String("LeftButton One Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  74)
            {
                sendActionMessage(String("RightButton One Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  75)
            {
                sendActionMessage(String("LeftButton Two Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  76)
            {
                sendActionMessage(String("RightButton Two Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  77)
            {
                sendActionMessage(String("LeftButton Three Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  78)
            {
                sendActionMessage(String("RightButton Three Pressure") + String(message.getControllerValue()));
            }
            
            //------ Rhombus Button
            else  if(message.getControllerNumber() == 79)
            {
                sendActionMessage(String("RhombusButton Pressure") + String(message.getControllerValue()));
            }
            //------ Record Button
            else  if(message.getControllerNumber() == 84)
            {
                sendActionMessage(String("RecordButton Pressure") + String(message.getControllerValue()));
            }
            //------ Stop Button
            else  if(message.getControllerNumber() == 85)
            {
                sendActionMessage(String("StopButton Pressure") + String(message.getControllerValue()));
            }
            //------ Play Button
            else  if(message.getControllerNumber() == 86)
            {
                sendActionMessage(String("PlayButton Pressure") + String(message.getControllerValue()));
            }
            
            //------ Rotaries
            //Pressure
            else  if(message.getControllerNumber() == 16)
            {
                sendActionMessage(String("Rotary Zero Pressure") + String(message.getControllerValue()));
            }
            else  if(message.getControllerNumber() == 17)
            {
                sendActionMessage(String("Rotary One Pressure") + String(message.getControllerValue()));
            }
            //Direction
            else  if(message.getControllerNumber() == 4)
            {
                sendActionMessage(String("Rotary Zero Location") + String(message.getControllerValue()));
            }
            else  if(message.getControllerNumber() == 5)
            {
                sendActionMessage(String("Rotary One Location") + String(message.getControllerValue()));
            }
            
            //------ HSliders
            //Pressure
            else if(message.getControllerNumber() ==  12)
            {
                sendActionMessage(String("HSlider Zero Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  13)
            {
                sendActionMessage(String("HSlider One Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  14)
            {
                sendActionMessage(String("HSlider Two Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  15)
            {
                sendActionMessage(String("HSlider Three Pressure") + String(message.getControllerValue()));
            }
            //Location
            else if(message.getControllerNumber() ==  0)
            {
                sendActionMessage(String("HSlider Zero Location") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  1)
            {
                sendActionMessage(String("HSlider One Location") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  2)
            {
                sendActionMessage(String("HSlider Two Location") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  3)
            {
                sendActionMessage(String("HSlider Three Location") + String(message.getControllerValue()));
            }
            
            //------ VSliders
            //Pressure
            else if(message.getControllerNumber() ==  18)
            {
                sendActionMessage(String("VSlider Zero Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  19)
            {
                sendActionMessage(String("VSlider One Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  20)
            {
                sendActionMessage(String("VSlider Two Pressure") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  21)
            {
                sendActionMessage(String("VSlider Three Pressure") + String(message.getControllerValue()));
            }
            
            //Location
            else if(message.getControllerNumber() ==  6)
            {
                sendActionMessage(String("VSlider Zero Location") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  7)
            {
                sendActionMessage(String("VSlider One Location") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  8)
            {
                sendActionMessage(String("VSlider Two Location") + String(message.getControllerValue()));
            }
            else if(message.getControllerNumber() ==  9)
            {
                sendActionMessage(String("VSlider Three Location") + String(message.getControllerValue()));
            }
        }
	}
}