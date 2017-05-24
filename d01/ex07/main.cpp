#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Invalid arguments" << std::endl;
        exit(0);
    }
    std::ifstream ifs(argv[1]);
    if (!ifs) {
        std::cout << "Error opening file" << std::endl;
        exit(0);
    }
    std::string newFile(argv[1]);
    newFile = newFile + ".replace";
    std::ofstream ofs(newFile); 
    std::string line;
    while (std::getline(ifs, line)) {
        size_t startPos = 0;
        while ((startPos = line.find(argv[2], startPos)) != std::string::npos) {
            line.replace(startPos, strlen(argv[2]), argv[3]);
            startPos += strlen(argv[2]);
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
}