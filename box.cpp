#include <iostream>
#include "box.h"
            //  inner loop   outer loop
std::string box(int width, int height){
    std::string row = "";
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            row += "*";
        } 
        row += "\n";
    }
    return row;
}