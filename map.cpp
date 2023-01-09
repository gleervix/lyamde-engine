// map.cpp

#include <iostream>

#include <string>

#include <vector>

#include <fstream>

// Struct representing a 3D point in space

struct Point {

float x, y, z;

};

// Struct representing a 3D object in the virtual world

struct Object {

std::vector<Point> vertices; // Vertices of the object

std::string name; // Name of the object

};

// Struct representing the virtual world

struct World {

std::vector<Object> objects; // Objects in the world

};

World loadMap(const std::string& filename) {

std::ifstream file(filename);

if (!file) {

std::cerr << "Error: Unable to open file '" << filename << "'" << std::endl;

exit(1);

}

World world;

std::string line;

while (std::getline(file, line)) {

if (line.empty() || line[0] == '#') continue;

Object obj;

std::istringstream iss(line);

iss >> obj.name;

float x, y, z;

while (iss >> x >> y >> z) {

obj.vertices.emplace_back(Point{x, y, z});

}

world.objects.push_back(obj);

}

return world;

}
