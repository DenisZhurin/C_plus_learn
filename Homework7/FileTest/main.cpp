#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream txt_file("D:\\C_plus_learn\\Homework7\\ReadWriteFile\\test_file.txt"); //поток для чтения
    //ofstream out; //поток для записи
    if (!txt_file.is_open()) {
        std::cout << "Failed to open file." << std::endl;
        return -1;
    }

    std::string str;
    while (std::getline(txt_file, str)) {
        std::cout << str << std::endl;
    }
    txt_file.close();

    return 0;

}