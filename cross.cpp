#include <iostream> 
#include "cross.h"

std::string cross(int size){
    std::string result = "";
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j == i || j == (abs(i - size)) -1){
                result += "*";
            }else{
                result += " ";
            }
        }
        result += "\n";
    }
    return result;
}