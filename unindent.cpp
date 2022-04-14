#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include "unindent.h"
using namespace std;


std::string removeLeadingSpaces(std::string line){

  string result = "";
  bool j = true;
  for(int i=0; i<line.size(); i++) {
    if(j && isspace(line.at(i))) {

  }
  else {
      j = false;
      result += line.at(i);
                }
        }
       cout << result << endl;
        return result;
}
