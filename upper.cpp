#include <iostream>
#include "upper.h"
// task f is the mistake i made here:
//         i <= times
std::string upperRepeat(std::string chars, int times, int length){
    std::string result = "";
    for(int i = 1; i <= times; i++){
    // for(int i = 1; i <= length; i++){
        if(i <= length - times){
            result += " ";
        }else{
            result += chars;
        }
    }
    return result;
}

std::string upper(int width, int height){
    std::string result = "";
    for(int i = width; i > height; i = i -1){
        result += upperRepeat("*", i, width) + "\n";
    }
    return result;
}
