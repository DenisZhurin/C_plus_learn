/*Тренировочное задание по программированию: Строка
Реализуйте класс ReversibleString, хранящий строку и поддерживающий методы Reverse для переворота строки и ToString для получения строки.

Пример
Код
int main() {
  ReversibleString s("live");
  s.Reverse();
  cout << s.ToString() << endl;
  
  s.Reverse();
  const ReversibleString& s_ref = s;
  string tmp = s_ref.ToString();
  cout << tmp << endl;
  
  ReversibleString empty;
  cout << '"' << empty.ToString() << '"' << endl;
  
  return 0;
}
Вывод
evil
live
""
*/

#include <iostream>
#include <string>

class ReversibleString {
    public:
    std::string str; 

    ReversibleString(const std::string& s){
        str = s;
    };

    void Reverse() {
        std::string tmp;
        for(int i = str.size() - 1; i >= 0; --i) {
            tmp += str[i];
        }
        str = tmp;
    }
    std::string ToString() const {
        return str;
    }
};

int main() {
 ReversibleString s("live");
  s.Reverse();
  std::cout << s.ToString() << std::endl;

  s.Reverse();
  const ReversibleString& s_ref = s;
  std::string tmp = s_ref.ToString();
  std::cout << tmp << std::endl;
  
  return 0;
}