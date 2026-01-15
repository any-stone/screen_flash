//Color flashing program as part of practice for Will Briggs book
//Annie Kuxa
//January 14, 2026

#include "SSDL.h"

int main (int argc, char** argv)
{
    SSDL_SetWindowTitle ("Flash me if you can");


    //Setting up the colors that will be switched
    const SSDL_Color VOID_PURPLE = SSDL_CreateColor(48, 25, 52); //dark purple
    const SSDL_Color TOXIC_GREEN = SSDL_CreateColor(139, 255, 0); //toxic green
    const SSDL_Color MYSTIC_TEAL = SSDL_CreateColor(0, 128, 128); //bright teal
    const SSDL_Color BLOOD_MOON = SSDL_CreateColor(180, 20, 20); // blood red

    //Paint the background with Color 1
    SSDL_RenderClear (VOID_PURPLE);

    sout << "Press any key to change the screen color\n";
    SSDL_WaitKey (); //Waiting for user to hit any key


    //Paint the background with Color 2
    SSDL_RenderClear (TOXIC_GREEN);
    SSDL_SetCursor(0,0);
    SSDL_SetRenderDrawColor (BLACK);
    sout << "Press again, I have more!\n";
    SSDL_WaitKey ();
    
    //Paint the background with Color 3
    SSDL_RenderClear (MYSTIC_TEAL);
    SSDL_SetCursor(0,0);
    SSDL_SetRenderDrawColor (WHITE);
    sout << "Good job! And just one more click.\n";
    SSDL_WaitKey ();

    //Paint the background with Color 4
    SSDL_RenderClear (BLOOD_MOON);
    SSDL_SetCursor(0,0);
    sout << "Last click will close me. Hope you enjoyed my color choices.\n";
    SSDL_WaitKey ();

    return 0;
}
