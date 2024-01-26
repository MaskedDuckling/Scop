#include "../includes/scop.hpp"

void parse_file_obj(char *obj_file){
    std::ifstream file(obj_file);
    std::vector<std::string> lines;
    std::string line;
    std::vector<float> vertices;
    std::vector<unsigned int> indices;

    if (file.is_open()){
        while (getline(file, line)){
            lines.push_back(line);
        }
        file.close();
    }
    else
        std::cout << "Unable to open file" << std::endl;

    for (std::vector<std::string>::iterator it = lines.begin(); it != lines.end(); ++it){
        if (it->find("v ") != std::string::npos){
            std::cout << *it << std::endl;
        }
        else if (it->find("f ") != std::string::npos){
            std::cout << *it << std::endl;
        }
    }
}