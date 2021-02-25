#include <iostream>
#include "checkerboard3x3.h"

std::string makeRow(int type, int width){
    std::string result = "";
    int rowCounter = 1;
    for(int i = 0; i < width; i++){
        if(type == 1){
            //***   ***   ***
            if(rowCounter <= 3){
                result += "*";
            }else if(rowCounter > 3 && rowCounter <=6){
                result += " ";
            }
            if(rowCounter == 6){
                rowCounter = 1;
            }else{
                rowCounter += 1;
            }
        }else if(type == 2){
            //   ***   ***   *
            if(rowCounter <= 3){
                result += " ";
            }else if(rowCounter > 3 && rowCounter <=6){
                result += "*";
            }
            if(rowCounter == 6){
                rowCounter = 1;
            }else{
                rowCounter += 1;
            }
        }
    }
    return result;
}
std::string advCheckerBoard(int width, int height){
    std::string result = "";
    int colCounter = 1;
    for(int i = 0; i < height; i++){
        if (colCounter <= 3){
            // type one
            result += makeRow(1, width) + "\n";
        }else if(colCounter > 3 && colCounter <= 6){
            // type two
            result += makeRow(2, width) + "\n";
        }
        if(colCounter == 6){
                colCounter = 1;
        }else{
            colCounter += 1;
        }
    }
    return result;
}