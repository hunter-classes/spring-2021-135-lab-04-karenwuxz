#include <iostream>
#include "lower.h"

std::string repeat(std::string chars, int times){
    std::string result = "";
    for(int i = 0; i < times; i++){
        result += chars;
    }
    return result;
}
std::string lower(int lenght){
    std::string result = "";
    for(int i = 1; i <= lenght; i++){
        result += repeat("*", i) + "\n";
    }
    return result;
}