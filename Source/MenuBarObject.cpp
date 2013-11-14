/*
  ==============================================================================

    MenuBarObject.cpp
    Created: 6 Nov 2013 4:58:28pm
    Author:  Conner Lacy

  ==============================================================================
*/

#include "MenuBarObject.h"

MenuBarObject::MenuBarObject(ApplicationCommandManager* apcm_,AudioSourcePlayer *looperPlayer_, AudioSourcePlayer *audioPlayer_,AudioSourcePlayer *filterPlayer_)
: //apcm(apcm_),
looperPlayer(looperPlayer_),
audioPlayer(audioPlayer_),
filterPlayer(filterPlayer_)
{
	mute = false;
	//this->addListener(listener);
    
    lastLooperGain = 1.00;
    lastAudioGain = 1.00;
    lastFilterGain = 1.00;
}

MenuBarObject::~MenuBarObject()
{
	//deleteAndZero(apcm);
}

const StringArray MenuBarObject::getMenuBarNames()
{
        const char* const names[] = { "Audio", nullptr };

        return StringArray (names);
}

const PopupMenu MenuBarObject::getMenuForIndex(int topLevelMenuIndex, const String &menuName)
{
	    //ApplicationCommandManager* commandManager = apcm;
    
        //DBG("get menu for index called");
    
    

        PopupMenu menu;

		if(mute)
		{
			menu.addItem(muteAudio, "Mute", true, true, Image::null);
			menu.addItem(unMuteAudio, "Unmute", true, false, Image::null);
		}
		else
		{
			menu.addItem(muteAudio, "Mute", true, false, Image::null);
			menu.addItem(unMuteAudio, "Unmute", true, true, Image::null);
		}

        /*if (topLevelMenuIndex == 0)
        {
            menu.addCommandItem (commandManager, muteAudio);
			menu.addCommandItem (commandManager, unMuteAudio);

            menu.addSeparator();
            menu.addCommandItem (commandManager, StandardApplicationCommandIDs::quit);
        }*/

	return menu;
}

void MenuBarObject::menuItemSelected(int menuItemID, int topLevelMenuIndex)
{	
	if(menuItemID == muteAudio)
	{
		DBG("mute audio");
		mute = true;
        
        //Store current gains
        lastLooperGain = looperPlayer->getGain();
        lastAudioGain = audioPlayer->getGain();
        lastFilterGain = filterPlayer->getGain();
        
        //Zero players
        looperPlayer->setGain(0.00);
        audioPlayer->setGain(0.00);
        filterPlayer->setGain(0.00);
        
	}
	else if(menuItemID == unMuteAudio)
	{
		DBG("un mute audio");
		mute = false;
        
        //Restoer player gains
        looperPlayer->setGain(lastLooperGain);
        audioPlayer->setGain(lastAudioGain);
        filterPlayer->setGain(lastFilterGain);
	}
    
#ifdef JUCE_MAC
    MenuBarModel::setMacMainMenu(this);
#endif
}