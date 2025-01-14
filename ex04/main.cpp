/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:20:23 by toru              #+#    #+#             */
/*   Updated: 2025/01/11 21:20:23 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: The string to replace cannot be empty." << std::endl;
        return 1;
    }

    FileReplacer replacer(filename, s1, s2);
    if (!replacer.replaceInFile()) {
        return 1;
    }

    std::cout << "Replacement successful. Output file: " << filename << ".replace" << std::endl;
    return 0;
}
