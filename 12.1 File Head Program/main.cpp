/*  12.1 File Head Program pg.705
    Write a program that asks the user for the name of a file. The program should display
    the first 10 lines of the file on the screen (the “head” of the file). If the file has fewer
    than 10 lines, the entire file should be displayed, with a message indicating the entire
    file has been displayed.
*/
#include <fstream>   // input/output file stream
#include <iostream>
#include <string>
#include <vector>

void readFile(std::fstream& file);
void showState(std::fstream& file);

int main(){
    std::fstream file;
    std::string filename;
    std::cout << "Enter the name of the file: ";
    std::getline(std::cin, filename);
    filename+=".txt";
    
    file.open(filename, std::ios::in);
    if(file){
        std::cout<<"Opening "<<filename<<"..\n\n";
        //showState(file);
        readFile(file);
        file.close();
    } else {
        std::cerr << "File opened unsuccessfully." << std::endl;
    }
    
    return 0;
}

void readFile(std::fstream& file){
    std::string word, 
                line;
    std::vector<std::string> text;
    unsigned short lineCount;

    /*while(std::cin >> word){
        text.push_back(word);
    }*/
    while(std::getline(file, line)){
        text.push_back(line);
    }

    lineCount= (text.size() < lineCount) ? 10 : text.size();
    if(lineCount==10) std::cout<<"Showing first 10 lines of the file.\n\n";
    for(int i=0; i < lineCount; i++){
        std::cout << text[i] << "\n";
    }
}

void showState(std::fstream& file){
    std::cout << "File Status:\n";
    std::cout << "  eof bit: " << file.eof() << "\n";
    std::cout << "  fail bit: " << file.fail() << "\n";
    std::cout << "  bad bit: " << file.bad() << "\n";
    std::cout << "  good bit: " << file.good() << "\n\n";
    file.clear(); // Clear any bad bits
}