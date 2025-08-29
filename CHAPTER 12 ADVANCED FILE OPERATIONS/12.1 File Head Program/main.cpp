#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>

void readInFromFile(std::vector<std::string>& fileLines, std::fstream& fin) {
    std::string line;
    while (std::getline(fin, line))
        fileLines.push_back(line);
}

std::string cleanWord(const std::string& word) {
    if(word.empty())
        return "";

    size_t start = 0;
    size_t end = word.size();

    while(start < end && std::ispunct(static_cast<unsigned char>(word[start])) && 
            word[start] != '\'' && word[start] != '-') 
            start++;

     while (end > start && std::ispunct(static_cast<unsigned char>(word[end - 1])) &&
            word[end - 1] != '\'' && word[end - 1] != '-')
            end--;

    std::string cleaned = word.substr(start, end - start);

    for (char& c : cleaned)
        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    
    std::string matchable;
     for (char c : cleaned)
     {
        if (c != '\'' && c != '-')
            matchable += c;
     }

     return matchable;
}

int countOccurrencesAndPrintLines(const std::vector<std::string>& fileLines, const std::string& searchWord) {
    int count = 0;
    int lineNumber = 1;

    std::string searchLower = cleanWord(searchWord);

    for (const auto& line : fileLines) {

        std::istringstream iss(line);
        std::string word;
        bool foundInLine = false;

        while (iss >> word) {
            if (cleanWord(word) == searchLower) {
                count++;
                foundInLine = true;
            }
        }

        if(foundInLine)
            std::cout << "#: " << lineNumber << " " << line << "\n";

        lineNumber++;
    }
    return count;
}

int main() {
    std::vector<std::string> fileLines;
    
    std::fstream file("Sly_Fox.txt", std::ios::in);

    if (!file.is_open()) {
        std::cerr << "Error opening file!\n";
        return 1;
    }

    readInFromFile(fileLines, file);
    file.close();

    std::string searchWord;
    std::cout << "Enter the word to search for: ";
    std::getline(std::cin, searchWord);

    int occurrences = countOccurrencesAndPrintLines(fileLines, searchWord);

    std::cout << "The word '" << searchWord << "' appears " << occurrences << " time(s) in the file.\n";

    std::cin.ignore();
    return 0;
}

