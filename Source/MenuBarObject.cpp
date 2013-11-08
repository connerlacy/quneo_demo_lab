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
	}
	else if(menuItemID == unMuteAudio)
	{
		DBG("un mute audio");
		mute = false;
	}
}