///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <string>

#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H

enum Gender {
    UNKNOWN_GENDER, MALE, FEMALE
};

const float UNKNOWN_WEIGHT = -1;

class Animal {
protected:
    static const std::string kingdom;
    std::string species;
    enum Gender gender = UNKNOWN_GENDER;
    float weight = UNKNOWN_WEIGHT;


};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
