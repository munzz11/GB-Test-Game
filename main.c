#include <gb/gb.h>
#include <stdio.h>
#include "BackgroundTileSet.c"
#include "BackgroundTileMap.c"

void main()
{
    init();

   while(1)
   {
       scroll_bkg(1,0);                          //scroll in the y axis
       wait_vbl_done();                          //wait for screen update
   }
}

void init() 
{
    set_bkg_data(0,10, BackgroundTileSet);                                                    //Initialize tile set
    set_bkg_tiles(0,0,BackgroundTileMapWidth, BackgroundTileMapHeight, BackgroundTileMap);    //Initialize tile map

    SHOW_BKG;
	DISPLAY_ON;		// Turn on the display
	NR52_REG = 0x8F;	// Turn on the sound
	NR51_REG = 0x11;	// Enable the sound channels
	NR50_REG = 0x77;	// Increase the volume to its max
}

