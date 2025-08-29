#include <iostream>
#include <string>
#include <cctype> // isdigit();

bool isANumber(const std::string&);
int checkInput(const std::string &, const int &, const int &);

int main(){
    int feeling = checkInput("On a scale 1-10, how do you feel today?\n", 1, 10);
    
    

    return 0;
}

bool isANumber(const std::string& numStr){
    bool hasDecimal = false;

    for (int i = 0; i < numStr.size(); i++){
        if (numStr[i] == '.'){
            if (hasDecimal) return false;

            hasDecimal = true;
        }
        else if (numStr[i] == '-' && i == 0){
            
        }
        else if (!isdigit(numStr[i])) return false;
    }

    return true;
}

int checkInput(const std::string &prompt, const int &minRange, const int &maxRange){
    bool hasDecimal = false;
    bool isWholeNum = true;
    double input;
    std::string inputStr;

    while(true){
        printf("%s Please enter a number from (%d - %d): ", prompt.c_str(), minRange, maxRange);
        std::getline(std::cin, inputStr);
        std::cin.ignore();

        if(!isANumber(inputStr)){
            printf("Not even a number.");
            std::cin.get();       // wait for char input from user
            std::cout<<"\033[2J"; // clears screen
            continue;
        }

        // returns the index where it finds the decimal
        size_t decimalPos = inputStr.find('.');

        isWholeNum==true;

        // if no index was returned when searching for '.'
        if(decimalPos != -1){
            //
            hasDecimal = true;

            // grabs the rest of str starting from the decimal position
            std::string decimalPart = inputStr.substr(decimalPos+1);

            // check if decimal part is NOT empty 
            // and check if its str to int == 0
            // (if its still an int) 1.00
            if(!decimalPart.empty() && std::stoi(decimalPart) != 0){
                isWholeNum = false;
            }
        }

        // try to convert inputStr to double
        try {
            input = std::stod(inputStr);
        } catch(std::invalid_argument) { // should never execute
            printf("Not even a number\n\n");
            std::cin.get();       // wait for char input from user
            std::cout<<"\033[2J"; // clears screen
        }

        // if it has a decimal and is not a whole number
        if(hasDecimal && !isWholeNum){
            printf("Must be a whole number.\n\n");
            std::cin.get();       // wait for char input from user
            std::cout<<"\033[2J"; // clears screen

            // check if it's within range
        } else if (input < minRange || input > maxRange) {
            printf("Number out of range.\n\n");
            std::cin.get();       // wait for char input from user
            std::cout<<"\033[2J"; // clears screen
        } else {
            return static_cast<int>(input);
        }
    }
}