#include <iostream>
#include <fstream>
#include <string>
#include <vector>


/*////////////////////////////////////////////////////////////////////////////////////////
    name: readInFromFile
    purpose: Reads a story from a file, line by line, and stores it in a vector of strings.
    inputs: std::vector<std::string>& words (by REFERENCE) 
           std::ifstream& inputfile (by REFERENCE)
    output: 
*/////////////////////////////////////////////////////////////////////////////////////////
void readInFromFile(std::vector<std::string>& story, std::fstream& fin) {
    std::string line;

    while(std::getline(fin, line)){
        story.push_back(line);
    }
}


/*////////////////////////////////////////////////////////////////////////////////////////
    name: writeToFile
    purpose: Writes a story to a file, line by line, and stores it in a vector of strings.
    inputs: std::fstream& fout (by REFERENCE)
           std::vector<std::string>& story (by REFERENCE)
           int numLines (number of lines to write)
    output: 
*/////////////////////////////////////////////////////////////////////////////////////////
void writeToFile(std::fstream& fout, std::vector<std::string>& story, int numLines){
    std::string line;
    
    for(int i = 0; i < numLines; i++) {
        std::cout << "Enter Story Line " << i + 1 << ": ";
        std::getline(std::cin, line);
        story.push_back(line);
        fout << line << "\n";
    }
}


/*////////////////////////////////////////////////////////////////////////////////////////
    name: print
    purpose: output the story from the vector word by word
    input: std::vector<std::string>& story (by REFERENCE) 
    output: 
*/////////////////////////////////////////////////////////////////////////////////////////
void print(const std::vector<std::string>& story) {
    // print out the story from the vector word by word
    for(const auto& line : story)
        std::cout<< line << std::endl;
}


int main() 
{
    std::vector<std::string> story;

    {
        std::fstream file("input.txt", std::ios::out | std::ios::trunc);
        if(!file.is_open()) {
            std::cerr << "Error opening file for writing!\n";
            return 1;
        }
        writeToFile(file, story, 5);
        file.close();
    }

    story.clear();

    {
        std::fstream file("input.txt", std::ios::in);
        if(!file.is_open()) {
            std::cerr << "Error opening file for reading!\n";
            return 1;
        }
        readInFromFile(story, file);
        file.close();
    }
    
    print(story);

    std::cin.get();
    return 0;
}