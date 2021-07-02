#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <string>
#include "md5.h"
#include "Blockchain.h"

int main() {
    
    std::size_t h1 = std::hash<std::string>{}("MyString#@RJ({(@_FN_#@(*FH@#_(FHKJDSKFJsDF");
    std::cout << h1 << std::endl;
}