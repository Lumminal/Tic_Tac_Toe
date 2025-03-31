# Description

A very simple Tic-Tac-Toe game made in C++17 and SFML, as part of learning the language. 
The coding aspect is done in Procedural Programming, instead of OOP because I haven't dived deep into that yet.

# Controls

**Left mouse click** to place your symbol/character.

# Screenshots

### Main Menu
![Tic_Tac_Toe_caRpRPet81](https://github.com/user-attachments/assets/41ceb9d6-db54-4504-845f-8d051212059c)
### Game Scene
![Tic_Tac_Toe_xHAxRVIXm3](https://github.com/user-attachments/assets/4d931eb0-205a-425c-9865-276285f6df73)
### After-Game Scene
![Tic_Tac_Toe_x6OhJB4iiW](https://github.com/user-attachments/assets/435f13c1-a91d-467d-8e5f-e48d6c1199d3)

# How to Compile

Requirements: Cmake

Tested on cmake 3.31.6 with Ninja Generator. 

Warning: Latest Cmake version will give errors when fetching freetype. This is fixed by rolling back in an older version.

1. Clone the repo ```git clone https://github.com/Lumminal/Tic_Tac_Toe```

2. Open your terminal in the cloned directory and run:
```
   cmake -S . -B build
   cmake --build build
```
The binary should be in the build/src directory

OR 

Open your IDE of choice and build the project through the internal tools (e.g. CLion)






