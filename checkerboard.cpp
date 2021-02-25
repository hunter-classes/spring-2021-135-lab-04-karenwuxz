#include <iostream>
#include "checkerBoard.h"

std::string checkers(int width, int height){
    std::string result = "";
    bool even = true;
    // row
    for(int i = 0; i < height; i++){
        //colums 
        for(int j = 0; j < width; j++){
            if(even){
                if(j % 2 == 0){
                    result += "*";
                }else{
                    result += "-";
                }
            }else{
                if(j % 2 != 0){
                    result += "*";
                }else{
                    result += "-";
                }
            }

        }
        result += "\n";
        // will make even the opposite of what is was
        even = !even;
    }
    return result;
}
