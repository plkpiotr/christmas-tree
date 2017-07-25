# Christmas Tree
![Graphical User Interface](https://user-images.githubusercontent.com/21959354/28546433-04bf2dda-70cb-11e7-8738-42cb5f66e3f3.jpg)
## Description
Cross-platform, console application written in a contest organised by polish programming forum ([Forum Pasja Informatyki](https://forum.pasja-informatyki.pl)) at Christmas in 2016. Participants' job was to create program, script or website showing image or animation in the style of ASCII Art in one of programming languages. The application was in the second place from among a dozen projects.
## Technologies
- C++:
  - Object-oriented programming
  - Standard library
  - [-std=c++11]
## Features
* Decorating the Christmas tree with:
  * star
  * chains
  * glass balls
  * candies
  * lights
* Putting gifts dedicated to loved ones under the tree
* Possibility of exporting Christmas card to text file
## Software tools
- Code::Blocks 16.01
- Notepad++
## Structure project's
- tree.h
- tree.cpp
- floor.h
- floor.cpp
- main.cpp
## How to run?
You can launch application for a least in different three ways:
- Download executable file .exe from [releases-windows](https://github.com/plkpiotr/Christmas-Tree/releases/tag/windows) (option for Windows) and then set convenient size font's and size console's (I recommend Window Size 47x60 for Consolas Bold 14)
- Download Makefile with source code from [releases-linux](https://github.com/plkpiotr/Christmas-Tree/releases/tag/linux) (option for Linux) and then enter into terminal:
  ```sh
  make
  ./christmass-tree
  ```
- Download only source code and build project in some kind of IDE on your own
## Comments
Condition of correct display is setting monospaced font in the terminal and text file after export.
## Links
[Rules of the contest](https://forum.pasja-informatyki.pl/204706/wyniki-konkurs-swiateczny-wygraj-atrakcyjne-nagrody)  
[Results of the contest](https://forum.pasja-informatyki.pl/contest/swieta-2016)
## License
Apache Licence 2.0
