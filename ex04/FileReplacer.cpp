#include "FileReplacer.hpp"
#include <iostream>
#include <fstream>

// Constructor initializes member variables
FileReplacer::FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2)
    : filename(filename), s1(s1), s2(s2) {}

// Replaces occurrences of s1 in each line with s2
std::string FileReplacer::replaceString(const std::string &line) const {
    std::string modifiedLine;
    std::size_t start = 0;
    std::size_t found;

    while ((found = line.find(s1, start)) != std::string::npos) {
        modifiedLine += line.substr(start, found - start); // Append text before s1
        modifiedLine += s2; // Replace s1 with s2
        start = found + s1.length(); // Move past the last match
    }
    modifiedLine += line.substr(start); // Append remaining part of the line
    return modifiedLine;
}

// Main function to replace text and write to a new file
bool FileReplacer::replaceInFile() {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return false;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replaceString(line) << '\n';
    }

    inputFile.close();
    outputFile.close();
    return true;
}
