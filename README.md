[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/mi1WNrHU)
# Proyecto de C++ - Star Guardian

## Team
- **Team Name:** Los Avengers

## Theme and setting
Star Guardian is an adventure, puzzle, and action game set in space, in our solar system. Star Guardian will be Earth's hero, restoring balance to the solar system, which has a relic that controls it. A villain wants to take control of it and all the planets. Star Guardian's duty is to stop him.


## Main mechanics
The game will progress through a guided story where the player will have the possibility that on each planet they advance they take an 'A' or 'B' path, where an alternate story will be told and depending on the player's decision they will be presented with a different minigame, each time they play they will have the opportunity to earn money and save their lives, or on the contrary, lose money and lives. The decisions will be taken using if loops.


## General idea of ​​the gameplay
The game progresses through a story, in which the player will have the ability to choose between path A or path B. Depending on the path taken, the story will change, and therefore, the gameplay will vary.

## Application of the topics seen (one by one with examples)
**Functions**: The game has a src folder containing all the .h files. Inside these files are all the functions whose logic is worked on in their own .cpp files, which are then used to call those complete functions in the game.cpp file.
**Console Interface**: The entire game will be specifically played on the console.
**Conditional Structures: If/Else**: This is present in the vast majority of minigames. In the game.cpp file, you can see this in the player's decision-making process, choosing which path to take, thus presenting them with one game or another.
**Variables and Data Types**: This game uses int, bool, string, char, void, etc. variables. These are present in all games. Bool variables are used for functions; they define whether the player wins or loses the game.
The others are used in games that require the use of numbers, such as Math Duel or Mix Laboratory. String is used extensively in the Encrypted game, where words must be typed.
**Vectors**: The use of vectors is reflected in the Encrypted game, where string-type words are stored within a vector.
**Loops**: Loops like while or for are mostly use on the minigames. For example, in OddOneGame the game is based on a for loop in order to create the matrix to find the different number or in Encrypted game where it use both in order to evaluate if the player type the answer correctly.

## Technical considerations of development
1. Install visual studio code: It is the application where you can play the game.

2. Install minGW64: This a compiler that will help you create .exe archives in programming languages like c++ on visual studio code.

3. Install Git for windows: This application will help you clone the link of the github repository into your computer.

4. Clone this repository to your local machine: Right click on your screen, now click on open git bash here and a tab will open. Copy the line below:
git clone https://github.com/FDP-01-2025/project-team-avengers.git

5. A new file will be created on your desktop, open that file, right click on it and click again on open git bash here, now type " code ." and click enter.

5. When the code open on visual studio, click on terminal, then in New Terminal.

6. The **first** command you will paste on the terminal is:
cd .\StarGuardian\
With this command your will enter into the whole StarGuardian folder.

8. The **second** command is:
g++ main.cpp Game.cpp Player.cpp src/*.cpp -o output/star_guardian.exe
With this command the program will create an executable file with all the .cpp games on the src folder.

10. And the **third** command is:
.\output\star_guardian.exe
This last command will execute the whole program and the game will start running.

12. Now the game will start on your console

## Images or mockups of the game
![alt text](Mockup.jpg) ![Mockup](https://github.com/user-attachments/assets/a3b19509-5f07-4a94-b69c-cabba07028eb)


## Full names of all members
1. Diego Aramis Villanueva Caballero 
   **Carnet**: 00090225
2. Carlos Javier Sanchez Alvarado
   **Carnet**: 00062725
3. Carlos Ernesto Palacios Ebora
   **Carnet**: 00119525
4. Jeremy Menjivar 
   **Carnet**: 00076825
