#include <gb/gb.h>
#include <stdio.h>
#include "BackgroundTileSet.c"
#include "BackgroundTileMap.c"

void main()
{
   set_bkg_data(0,10, BackgroundTileSet);
   set_bkg_tiles(0,0,BackgroundTileMapWidth, BackgroundTileMapHeight, BackgroundTileMap);

   SHOW_BKG;                                        //show background map   
   DISPLAY_ON;                                      //turn on display
   while(1)
   {
       scroll_bkg(1,0);                          //scroll in the y axis
       wait_vbl_done();                          //wait for screen update
   }
}