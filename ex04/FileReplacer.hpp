/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toru <toru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:20:50 by toru              #+#    #+#             */
/*   Updated: 2025/01/11 21:20:50 by toru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sys/stat.h>

class FileReplacer {
public:
    FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2);
    bool replaceInFile();

private:
    std::string filename;
    std::string s1;
    std::string s2;

    std::string replaceString(const std::string &line) const;
};

#endif
