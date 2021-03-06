﻿# TEMPLE ESCAPE

Project for Videogame Development subject. The main goal here is to create a simple plattaformer with two levels done in Tiled, having a main character moving around while being able to save and load game’s state. On top of this enemies pathfinding is implemented along other stuff such as stable frame rate (30fps), normalized movement, structured entity system described in an UML file and code with Brofiler integration.

This project has been done by two catalan students of CITM - UPC (Terrasa, Spain).  

* [Github repository](https://github.com/nintervik/Temple-Escape)  

## About the game
Simple platformer with a temple-type theme featuring a yellow character. Equipped with a gun, he will have to reach the end of the level avoiding obstacles and killing enemies.

## Installation instructions

Download the zip file and unzip it. Open the folder, execute the .exe and enjoy!

_IMPORTANT: do not modify, change or add any folder or file as you might not be able to execute the game._

## Controls

### Keyboard:

Player controls:
- JUMP: W key (twice for double jump)
- LEFT: A key
- RIGHT: D key
- SHOOT: SPACE key (hold for continuous shooting)

General/developer controls:
- EXIT GAME: ESC key
- START FROM THE VERY FIRST LEVEL: F1 key
- START FROM THE BEGGINING OF THE CURRENT LEVEL: F2 key
- SHOW COLLIDERS: F3
- SAVE GAME (player position and current level):  F5 key
- LOAD GAME (player position and level saved): F6 key
- GOD MODE: F10
- CAP FRAMERATE: F11
- MUSIC VOLUME: +/- keys

## Innovations
* Player and enemy animations are read from an xml file.
* Spawn enemy points are created with Tiled and read from the tmx file of the map.

## Team members

_García Subirana, Guillermo's Github account:_

* [Github account](https://github.com/Wilhelman) 

_Masó Garcia, Víctor's Github account:_

* [Github account](https://github.com/nintervik)


## Tools used
* IDE: Microsoft Visual Studio 2017
* Language: C++
* Graphics and audio: SDL 2.0
* Data: pugixml 1.8
* Level editor: Tiled 0.17
* Profiler: Brofiler
* Code repository: GitHub
* Others: Adobe Photoshop CS6 and MS Paint

## Credits for artwork and music

Sprites and sound fx:

* Artwork created by Luis Zuno (@ansimuz). Sprites can be found [here](https://ansimuz.itch.io/grotto-escape-game-art-pack)
* Artwork created by [Henry Sofware](https://henrysoftware.itch.io/). Sprites can be found [here](https://henrysoftware.itch.io/free-pixel-mob)

Tileset:

* Artwork created by Luis Zuno (@ansimuz). Tileset can be found [here](https://ansimuz.itch.io/grotto-escape-ii-art-pack-)

Music:

* Game music from [DL SOUNDS](https://www.dl-sounds.com/). It can be found [here](https://www.dl-sounds.com/royalty-free/arcade-funk/)

Sound FX:

* Player shot and jump sound fx can be found [here](https://ansimuz.itch.io/grotto-escape-game-art-pack)
* This game uses these sounds from freesound:
      
	- 249616__vincentm400__function-fail.wav by [OwlStorm / Natalie Kirk](https://freesound.org/people/OwlStorm/)
