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

void readFile(std::string inputFileName);
void writeFile(std::string outputFileName);

int main(int argc, char const *argv[]){
    std::string inputFileName, 
                outputFileName;
    std::fstream inputFile,
                 outputFile;

    std::cout << "Enter the input file name: ";
    std::getline(std::cin, inputFileName);

    std::cout << "Enter the output file name: ";
    std::getline(std::cin, outputFileName);
    
    readFile(inputFileName+".txt");

    return 0;
}

void readFile(std::string inputFileName){
    std::fstream inputFile(inputFileName, std::ios::in);

    if(){
        std::vector<std::string> sentences;
        std::string words,
                    line;

        while(inputFile>>words){
            std::cout<< words << "\n";
        }

        while(std::getline(inputFile, line)){
            for(int i=0; i < line.length(); i++){
                line[i] = tolower(line[i]);
            }

            sentences.push_back(line);
        }
    }
}

void writeFile(std::string outputFileName){
    std::fstream outputFile(outputFileName, std::ios::out);
}