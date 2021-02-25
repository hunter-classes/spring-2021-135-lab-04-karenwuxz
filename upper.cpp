#include <iostream>
#include "upper.h"

std::string upperRepeat(std::string chars, int times, int length){
    std::string result = "";
    for(int i = 1; i <= length; i++){
        if(i <= length - times){
            result += " ";
        }else{
            result += chars;
        }
    }
    return result;
}

std::string upper(int width){
    std::string result = "";
    for(int i = width; i > 0; i --){
        result += upperRepeat("*", i, width) + "\n";
    }
    return result;
}
