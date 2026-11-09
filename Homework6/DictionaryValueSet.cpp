#include <iostream>
#include <set>
#include <map>
#include <string>

std::set<std::string> BuildMapValuesSet(const std::map<int, std::string>& dictionary) {
    
    std::set<std::string> values;
    for(auto it = dictionary.begin(); it!= dictionary.end(); ++it) {
        values.insert(it->second);
    }
    return values;
}

int main() {

    std::map<int, std::string> dictionary {{
    1, "odd"},
    {2, "even"},
    {3, "odd"},
    {4, "even"},
    {5, "odd"} };

    std::set<std::string> values = BuildMapValuesSet(dictionary);
    
for (const std::string& value : values) {
  std::cout << value << std::endl;
}
}