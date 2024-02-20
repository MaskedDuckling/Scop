#include "../headers/scop.hpp"


void parse_file_obj(char *obj_file, std::vector<float> &vertices, std::vector<unsigned int> &indices){
    std::ifstream file(obj_file);
    std::vector<std::string> lines;
    std::string line;

    if (file.is_open()){
        while (getline(file, line))
            lines.push_back(line);
        file.close();
    }
    else
        std::cout << "Unable to open file" << std::endl;

    for (std::vector<std::string>::iterator it = lines.begin(); it != lines.end(); ++it){
        if (it->find("v ") != std::string::npos){
            std::string tmp = *it;
            tmp.erase(0, 2);
            std::stringstream ss(tmp);
            std::string token;
            while (getline(ss, token, ' ')){
                vertices.push_back(std::stof(token));
            }
        }
        else if (it->find("f ") != std::string::npos){
            std::string tmp = *it;
            tmp.erase(0, 2);
            std::stringstream ss(tmp);
            std::string token;
            while (getline(ss, token, ' ')){
                indices.push_back(std::stoi(token));
            }
        }
    }
}