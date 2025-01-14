/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:20:42 by toru              #+#    #+#             */
/*   Updated: 2025/01/11 21:20:42 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

// Constructor initializes member variables
FileReplacer::FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2)
    : filename(filename), s1(s1), s2(s2) {}

std::string FileReplacer::replaceString(const std::string &line) const {
    std::string modifiedLine; // Result string
    std::size_t start = 0;    // Start position for searching
    std::size_t found;        // Position where s1 is found

    // Begin searching for s1 in the line
    while ((found = line.find(s1, start)) != std::string::npos) {
        // Append text before s1 directly to modifiedLine
        modifiedLine += line.substr(start, found - start);
        //std::cout << modifiedLine << " | added the sub string right before the found string ->" << s1 << std::endl; //debug
        // Append s2 (the replacement for s1)
        modifiedLine += s2;
        //std::cout << modifiedLine << " | added the wanted word to the substring -> " << s2 << std::endl; //debug
        // Move start index to just after the matched substring
        start = found + s1.length();
    }
    // Append the remaining part of the line after the last match (if any)
    modifiedLine += line.substr(start);
    return modifiedLine;
}
// Main function to replace text and write to a new file
bool FileReplacer::replaceInFile() {
    struct stat fileInfo;
    if (stat(filename.c_str(), &fileInfo) != 0) {
        std::cerr << "Error: Cannot access file " << filename << std::endl;
        return false;
    }
    if (S_ISDIR(fileInfo.st_mode)) {
        std::cerr << "Error: " << filename << " is a directory, not a file." << std::endl;
        return false;
    }
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

    bool foundAny = false; // Flag to track if any replacements are made
    std::string line;
    while (std::getline(inputFile, line)) {
        std::string modifiedLine = replaceString(line);
        // Check if `s1` is in the original line, even if `s1` == `s2`
        if (line.find(s1) != std::string::npos) {
            foundAny = true;
        }
        outputFile << modifiedLine << '\n';
    }

    inputFile.close();
    outputFile.close();

    if (!foundAny) {
        std::cerr << "Error: Cannot find the word \"" << s1 << "\" in " << filename << std::endl;
        // Optionally delete the output file if no replacements were made
        std::remove((filename + ".replace").c_str());
        return false;
    }

    return true;
}
