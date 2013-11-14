/*
  ==============================================================================

    MenuBarObject.h
    Created: 6 Nov 2013 4:58:28pm
    Author:  Conner Lacy

  ==============================================================================
*/

#ifndef __MENUBAROBJECT_H_62BBAD3D__
#define __MENUBAROBJECT_H_62BBAD3D__

#include "../JuceLibraryCode/JuceHeader.h"

class MenuBarObject : public MenuBarModel
{
public:
    MenuBarObject(ApplicationCommandManager *apcm_, AudioSourcePlayer *looperPlayer_, AudioSourcePlayer *audioPlayer_,AudioSourcePlayer *filterPlayer_);
    ~MenuBarObject();

	//ApplicationCommandManager *apcm;
	AudioSourcePlayer *looperPlayer;
	AudioSourcePlayer *audioPlayer;
	AudioSourcePlayer *filterPlayer;
    
    float lastLooperGain;
    float lastAudioGain;
    float lastFilterGain;
    
    const StringArray getMenuBarNames();
	const PopupMenu getMenuForIndex(int topLevelMenuIndex, const String &menuName);
	void menuItemSelected(int menuItemID, int topLevelMenuIndex);

	//Listener *listener;

	bool mute;
    
private:
    
	    enum CommandIDs
    {
        muteAudio             = 0x2000,
        unMuteAudio           = 0x2001,
    };
    
};



#endif  // __MENUBAROBJECT_H_62BBAD3D__
