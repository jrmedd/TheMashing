# THE MASHING

Created by James Medd for Digital Media Labs 2015

jamesmedd.co.uk
digitalmedialabs.org

# INSTALLATION

1) Drag and drop into your Applications folder.

2) Plug up to 5 buttons per team into your Arduino sequentially e.g.
in pins 3, 4, 5, 6, 7, 8, 9, 10, 11, 12. Teams will be split after 5 buttons,
so if you're just using 2 buttons you could insert them into 3 and 8.

3) Upload the code provided to your Arduino. If your pins go LOW
(i.e. to ground) when pressed, add a '!' (without quotes) before
the digitalRead() in the main loop like this: '!digitalRead(i)'.

Look at https://www.arduino.cc/en/Tutorial/Button if you're unsure how to
connect up your buttons!

# PLAYING

1) Select your serial port
2) Pick the number of players per team
3) Mash!
