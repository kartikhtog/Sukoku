#include <iostream>
#include <stdio.h>
#include "sodoku.h"
#include "SodokuCombinations.h"

int main(){
    //Sodoku s;
    //s.printSolvedMatrix(std::cout);//ostream);
    //std::cout << "test";
    SodokuCombinations sc;
    sc.createListsWithRamdomGenerations();
    sc.sortTheListOfPurmutations();
    return 0;
}

