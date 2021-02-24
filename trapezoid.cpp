#include <iostream>
#include "trapezoid.h"

std::string creatingLine(std::string chars, int curWidth, int width){
    std::string result = "";
    // visional in the file for this loop
    for(int i = 1; i <= curWidth; i++){
        // will fill up these index with spaces
        if(i <= width - curWidth){
            result += " ";
        }else{
            result += chars;
        }
    }
    return result;
}

std::string trap(int width, int height){
    std::string result = "";
    // If the amount of * taken away for the width is more than or equal to width for the 
    // last row, height - 1 as there is no change done to the first row, it is an impossible
    // traqezoid
    if(width <= (height - 1) * 2){
        return "Impossible Shape!";
    }
    // we want this loop to only happen height amount of times
    // Since width is i to help us increment width, width - height is the correct amount of times 
    // this loop needs to be performed
    for(int i = width; i > width - height; i--){
        result += creatingLine("*", i, width) + "\n";
    }
    return result;
}
