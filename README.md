# ATTiny85OopsChristmasCard
## Description
Merry Christmas musical card with a bug

## Credit
1. I copied the tone code from somewhere and I wanted to give credit as it saved me a lot of time, but where I thought I got it from wasnt it and I can't find anymore.  I changed the music a bit, added Happy Birthday for my nephew's birthday yesterday) and mine never stops playing, but basically the core logic, tempo, etc is the same.  If you recognize it and know the source, please let me know so I can link it to give credit.

## Prerequisites:
1. Visual Studio Code (https://code.visualstudio.com/Download)
2. Platform IO (https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide)
3. Atmel ATTiny85 IC
    1. Tiny AVR Programmer (https://www.amazon.com/SparkFun-Tiny-AVR-Programmer/dp/B00B6KNJRY)
    2. ATTiny85 ICs (https://www.amazon.com/Original-Atmel-Dip-8-ATTINY85-20PU-Tiny85-20Pu/dp/B06W9JBJJ6)
    3. Install USBTinyISP drivers if using ATTiny85 with USB programmer board (https://learn.adafruit.com/usbtinyisp/download)
4. Digispark ATTiny85
    1. Digispark ATTiny85 dev board (https://www.amazon.com/AiTrip-Digispark-Kickstarter-Attiny85-Development/dp/B0836WXQQR)
    2. Install digistump drivers if using Digispark ATTiny85 dev board (https://github.com/digistump/DigistumpArduino/releases)
5. Piezo speaker (https://www.amazon.com/DIKAVS-Enclosed-Piezo-Element-Alarm/dp/B073FCGCYB)
6. Christmas card/Birthday card, whatever
7. Lithium batteries (CR2032 for example)  Something 3v and thin.  1 is needed if using the IC chip direclty, 2 in series if using the digispark board.

## Build & Install (ATTiny85 IC)
1. Uncomment "default_envs = attiny85" in Platform IP and comment out any other default_evns
2. Insert IC into programmer (check direction)
3. Click Upload

## Build & Install (Digispark board)
1. Uncomment "default_envs = digispark-tiny" in Platform IP and comment out any other default_evns
2. DO NOT insert dev board into computer.
3. Click Upload
4. Once you see "Uploading .pio\build\digispark-tiny\firmware.hex" insert digispark ATTiny85 dev board into USB.

## Wiring (Digispark only)
1. Power (Bench supply or batteries)  If plugged in via USB this isn't needed.
    1. 5v+ to VIN (can accept higher, but uses an L7805 so... avoid heat)
    2. - to gnd
2. Piezo speaker
    1. Positive to P0
    2. Negative to gnd

## Making
1. Cut paper/card stock to the size of your card to act as a backing.
2. Basically wire everything up, and glue to the backing so that it works.
3. Take a strip of paper about the width of the battery and maybe 8" long (cut it down to what you need later) and glue it inside the card evelope to one wall
4. Use the paper to open the battery circuit.  Make sure it has some friction (I created a 3d printed battery holder) but can slide out when the card is pulled out of the envelope completing the circuit to power the music.
5. Glue the backing to the back of the card hiding the electronics and making it difficult if not impossible to slide the paper strip back into the battery holder to break the circuit.
6. Mail to those you love... or not.
7. Wait for calls/texts asking "How to turn the damn thing off"
8. Bask in sense of accomplishment.