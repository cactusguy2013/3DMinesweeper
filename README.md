# COMP313 Assignment 1 - Chris Russell

## 3D Minesweeper

The main action in this game is clearing all the tiles without hitting a mine. Any tile that isn't a mine will tell you how many mines are adjacent to it, you can use this information to figure out where all the mines are and win the game.

The trickiest part of making the game was probably gettting the character to stop falling while in a menu, couldn't find a way to just freeze the first person character, decided removing it's gravity will do, even then finding what variable to change to do that was tricky since it's not in the character itself but one of it's components 'Character movement'.

The most interesting part of the game is probably the recursive clear-tile revealing, which is when if you land on a clear tile it recursively reveals all adjacent clear tiles. It's a tricky little piece of code to get it right but luckily I've done that before a few times.

<a href='https://youtu.be/pnJAJ8umPLE'>Video Walkthrough</a>
