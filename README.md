## About
Originally created by me (James Medd) for Digital Media Labs 2015. The Max patch is a bit of a mess as I threw it together in just a couple of evenings, I'll iron out the creases from here, and hopefully add a few more collaborative modes.

* http://jamesmedd.co.uk
* http://digitalmedialabs.org

### In action

[See it in action here.](https://www.youtube.com/watch?v=6Se6G2qGbao)

## Usage
You'll need [Max](http://cycling74.com) if you're going to edit and use the source patches. If you just want to play the game, a standalone application (currently OS X only) [is available here](http://jamesmedd.co.uk/games/TheMashing.zip). Open up **mashing.maxpat**, all of the other patches are abstractions. I'm hoping to abstract more of these as I go to make it more git-friendly. 

### Hooking up your Arduino
Plug up to 5 buttons per team into your Arduino sequentially e.g. in pins 3, 4, 5, 6, 7, 8, 9, 10, 11, 12. Teams will be split after 5 buttons, so if you're just using 2 buttons you could insert them into 3 and 8.

Upload **TheMashingController.ino** to your Arduino. If your pins go LOW (i.e. to ground) when pressed, add a '!' (without quotes) before the digitalRead() in the main loop like this: '!digitalRead(i)'.

Look at https://www.arduino.cc/en/Tutorial/Button if you're unsure how to connect up your buttons!

### Fonts

The font I used in the Max patch is [Lane](http://www.dafont.com/lane.font), the usage restrictions for which were pretty unclear. If you're Graham Meade and you object to me using it here, please let me know.

## Playing
1. Select your serial port
2. Pick the number of players per team
3. Mash!
