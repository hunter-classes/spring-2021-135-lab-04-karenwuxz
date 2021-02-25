#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"
int main(){
    std::cout << "box(4,4):\n" << box(4,4) << "\n------------------\n";
    std::cout << "box(5,2):\n" << box(5,2) << "\n------------------\n";
    std::cout << "box(10,3):\n" << box(10,3) << "\n------------------\n";

    std::cout << "checkers(11,6):\n" << checkers(11,6) << "\n------------------\n";
    std::cout << "checkers(3,4):\n" << checkers(3,4) << "\n------------------\n";
    std::cout << "checkers(10,3):\n" << checkers(10,3) << "\n------------------\n";

    std::cout << "cross(8):\n" << cross(8) << "\n------------------\n" << std::endl;
    std::cout << "cross(1):\n" << cross(1) << "\n------------------\n" << std::endl;
    std::cout << "cross(20):\n" << cross(20) << "\n------------------\n" << std::endl;

    std::cout<< "lower(6):\n" << lower(6) << "\n------------------\n";
    std::cout<< "lower(3):\n" << lower(3) << "\n------------------\n";
    std::cout<< "lower(10):\n" << lower(10) << "\n------------------\n";

    std::cout<< "upper(5):\n" << upper(5) << "\n------------------\n";
    std::cout<< "upper(3):\n" << upper(3) << "\n------------------\n";
    std::cout<< "upper(10):\n" << upper(10) << "\n------------------\n";

    std::cout << "trap(5,3):\n" << trap(5,3) << "\n------------------\n";
    std::cout << "trap(12,5):\n" << trap(12,5) << "\n------------------\n";
    std::cout << "trap(12,7):\n" << trap(12,7) << "\n------------------\n";

    std::cout << "advCheckerBoard(16,11):\n" << advCheckerBoard(16,11) << "\n------------------\n" << std::endl;
    std::cout << "advCheckerBoard(1,1):\n" << advCheckerBoard(1,1) << "\n------------------\n" << std::endl;
    std::cout << "advCheckerBoard(7,7):\n" << advCheckerBoard(7,7) << "\n------------------\n" << std::endl;

   
    return 0;
}