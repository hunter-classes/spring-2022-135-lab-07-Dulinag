
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include "indent.h"

using namespace std;

int countChar(std::string line, char c){

        int total=0;

        for(int i=0; i<line.size(); i++) {

                if(c == line.at(i)) {

                        total++;
                }
        }
        return total;
}
