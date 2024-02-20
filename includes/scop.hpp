#ifndef SCOP_HPP
# define SCOP_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>


#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080

void parse_file_obj(char *obj_file, std::vector<float> &vertices, std::vector<unsigned int> &indices);

#endif