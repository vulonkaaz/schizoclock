# The most minimalist clock you'll find

I was bored one day and decided that `date '+%H:%M'` was too
much of a bloated way to show time so I decided to make my
own clock

features:
- very lean code base, only 15 lines of code
- configure by modifying the code
- support Swatch Internet Time

## How to configure

you change the source code, the main.c file it should be very
straightforward since it is a very simple minimalistic program

## How to compile

`cc -o schizoclock main.c`

replace schizoclock with whatever you want the executable to be

## How to install

I don't actually know I never did that but i think all you have
to do is move the executable to /usr/local/bin and maybe change
a few permissions on the file

## Special thanks

waffle on Agora Road for starting [the most autistic thread I 
have ever seen](https://forum.agoraroad.com/index.php?threads/motion-for-agora-road-to-adopt-internet-beat-time.6950/)

shrapnelnet who made a swatch beat clock in C which I couln't
help but optimize, his project inspired me to make my own clock

https://github.com/shrapnelnet/beat
