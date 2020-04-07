#include<iostream>
#include<algorithm>
#include <map>
#include <string>

int main() {
    size_t cnt;
    std::multimap<char, std::string> vocabulary;
    std::cin >> cnt;
    for (size_t i = 0; i < cnt; ++i) {
        std::string one;
        std::cin >> one;
        vocabulary.insert(std::make_pair(one[0], one));
    }
    char key;
    std::cin >> key;
    auto vol = vocabulary.equal_range(key);
    std::for_each(vol.first, vol.second, [](auto a) { std::cout << a.second << std::endl; });
}
