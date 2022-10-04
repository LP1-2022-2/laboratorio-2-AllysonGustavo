// Compilar
// g++ -Wall -pedantic -Iinclude -o lab1 src/*.cpp
// mingw32-make

#include <cctype>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;

int main(int argc, char *argv[]) {
    Complexo c1;
    complexo c2;
    Complexo c3(1,2);
    c3=c1+c2;

    return 0;
  }
