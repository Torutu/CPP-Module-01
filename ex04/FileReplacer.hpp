/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:12:25 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 18:12:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>
#include <iostream>
#include <fstream>

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
