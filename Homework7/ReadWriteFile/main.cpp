#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

std::string ReadFile() {
     std::ifstream in_file("D:\\C_plus_learn\\Homework7\\ReadWriteFile\\read_file.txt"); //поток для чтения
    //ofstream out; //поток для записи
    if (!in_file.is_open()) {
        std::cout << "Неудается открыть файл" << std::endl;
        return "-1";
    }

    std::string str;
    std::string full_text;
    while(std::getline(in_file, str) ) {
        full_text += str + "\n";
        std::cout << str << std::endl;
    }
    in_file.close();
    return full_text;
}

int WriteFile(std::string& new_string) {
    std::ofstream out_file("D:\\C_plus_learn\\Homework7\\ReadWriteFile\\write_file.txt");
    if(!out_file.is_open()) {
        std::cout << "Неудается открыть файл" << std::endl;
        return -1;
    }
    out_file << new_string;
    out_file.close();
    return 0;
}

int main() {
    SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

    std::string save_string = ReadFile();
    WriteFile(save_string);

return 0;
}