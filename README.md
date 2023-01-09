#English:
# Virtual 3D World Engine

This is a simple C++ engine for a virtual 3D world. It does not have any graphics, but it can load and save a map of the world from a text file.

## Compiling

To compile this engine, you will need a C++ compiler such as GCC. Open a terminal, navigate to the directory containing the source files, and run the following command:

```g++ main.cpp map.cpp -o world```


This will create an executable file called `world`.

## Files

- `main.cpp` - Contains the main function of the program. This is where you can write code to manipulate the virtual world, such as moving objects or calculating distances between points.
- `map.cpp` - Contains the `loadMap` function, which loads the virtual world from a text file. It also contains the `saveMap` function, which saves the virtual world to a text file.
- `map.txt` - A sample map file showing the format of the map files that can be loaded and saved by the engine.

#Russian
# Движок виртуального 3D мира

Это простой движок на языке C++ для виртуального 3D мира. Он не содержит графики, но может загружать и сохранять карту мира из текстового файла.

## Компиляция

Для компиляции этого движка вам понадобится компилятор C++, такой как GCC. Откройте терминал, перейдите в директорию с исходными файлами и выполните следующую команду:

```g++ main.cpp map.cpp -o world```


Это создаст исполняемый файл с именем `world`.

## Файлы

- `main.cpp` - Содержит основную функцию программы.  Здесь вы можете написать код для управления виртуальным миром, например для перемещения объектов или вычисления расстояний между точками.
 - `map.cpp` - Содержит функцию `loadMap`, которая загружает виртуальный мир из текстового файла.  Он также содержит функцию «saveMap», которая сохраняет виртуальный мир в текстовый файл.
 - `map.txt` - пример файла карты, показывающий формат файлов карт, которые могут быть загружены и сохранены движком.
