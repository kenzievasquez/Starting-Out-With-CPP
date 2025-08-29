/*  12.7 Sentence Filter
    Write a program that asks the user for two file names. The first file will be opened for
    input and the second file will be opened for output. (It will be assumed that the first file
    contains sentences that end with a period.) The program will read the contents of the first
    file and change all the letters to lowercase except the first letter of each sentence, which
    should be made uppercase. The revised contents should be stored in the second file.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>


std::vector<std::string> processFile(std::string inputFileName);
void writeFile(std::string outputFileName, std::vector<std::string> sentences);


int main(int argc, char const *argv[]){
    std::string inputFileName, 
                outputFileName;
    std::vector<std::string> sentences;

    std::cout << "Enter the input file name: ";
    std::getline(std::cin, inputFileName);
    
    sentences= processFile(inputFileName+".txt");
    writeFile("revised.txt", sentences);

    return 0;
}


std::vector<std::string> processFile(std::string inputFileName){  // the Quick Brown Fox Jumped Over The Lazy Brown Dog.
    std::fstream inputFile(inputFileName, std::ios::in);          // firstLetter = false
                                                                  // i = 52

    if(inputFile){
        bool firstLetter = false;
        std::vector<std::string> sentences;
        std::string words,
                    line;

        // lowercase every character in the file
        while (std::getline(inputFile, line)){
            for(int i=0; i < line.size(); i++){
                if (isalpha(line[i])) line[i] = std::tolower(line[i]);
            }
            sentences.push_back(line);
        }

        for(int i=0; i < sentences.size(); i++){
            for(int j=i; j < sentences.size() - i; j++){
                if (sentences[i][j] == '.'){  // Check for sentence-ending punctuation
                    firstLetter = true;  // Next character should be uppercase
                    //break;
                }
                
                if (firstLetter && std::isalpha(sentences[i][j])) {
                    sentences[i][j] = std::toupper(sentences[i][j]);  // Convert the first letter of the sentence to uppercase
                    firstLetter = false;  // Reset for the next sentence
                    //break;
                }
            }
        }

        inputFile.close();
        return sentences;
    }
}


void writeFile(std::string outputFileName, std::vector<std::string> sentences){
    std::fstream outputFile(outputFileName, std::ios::out);

    if(outputFile){
        for(int i=0; i < sentences.size(); i++){
            outputFile << sentences[i] << std::endl;
        }
        
        outputFile.close();
    }
}

/*
bool capitalizeNext = true;
for(const std::string& line : lines) {
    for(int i = 0; i < lines.size(); i++) {
        char& ch = line[i];
        ch = std::tolower(static_cast<unsigned char>(ch)); 

        if(capitalizeNext && std::isalpha(static_cast<unsigned char>(ch))) {
            ch = std::toupper(static_cast<unsigned char>(ch)); 
            capitalizeNext = false;
        }

        if(line[i] == '.') {
            capitalizeNext = true;
        }
    }
}
*/