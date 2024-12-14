/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:12:23 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 18:12:23 by marvin           ###   ########.fr       */
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
    found = line.find(s1, start); // Find the first occurrence of s1
    while ((found = line.find(s1, start)) != std::string::npos) {
    std::cout << "start is " << start << std::endl;
    std::cout << "found is " << found << std::endl;
    // Append text before s1 directly to modifiedLine
    modifiedLine += line.substr(start, found - start);

    // Append s2 (the replacement for s1)
    modifiedLine += s2;
    std::cout << "modifiedLine is " << modifiedLine << std::endl;
    // Move start index to just after the matched substring
    start = found + s1.length();
    }


    // Append the remaining part of the line after the last match (if any)
    std::string remaining = line.substr(start);
    modifiedLine += remaining;

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
