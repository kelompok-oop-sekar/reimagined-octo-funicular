#/bin/sh

g++ -c *.cpp
g++ -c FarmAnimal/*.cpp
g++ -c Cell/*.cpp
g++ -c Product/*.cpp
g++ -o main *.o
./main
