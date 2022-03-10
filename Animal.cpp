///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///

/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Animal.h"

using namespace std;

const string Animal::kingdom = "Animalia";

Animal::Animal(const string &newSpecies) : species(newSpecies) {
    Animal::species = newSpecies;
}

Animal::Animal(const string &species, Gender gender) : species(species), gender(gender) {}

Animal::Animal(const string &species, Gender gender, float weight) : species(species), gender(gender), weight(weight) {}

Animal::Animal(const string &species, float weight) : species(species), weight(weight) {}

const string &Animal::getKingdom() {
    return kingdom;
}

const string &Animal::getSpecies() const {
    return species;
}

Gender Animal::getGender() const {
    return gender;
}

void Animal::setGender(Gender gender) {
    Animal::gender = gender;
}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float weight) {
    Animal::weight = weight;
}

void Animal::printInfo() {
    cout << "Animal Fields" << endl;
    cout << "Kingdom = [" << getKingdom() << "]" << endl;
    cout << "Species = [" << getSpecies() << "]" << endl;
    cout << "Weight = [" << getWeight() << "]" << endl;
    cout << "Gender = [" << getGender() << "]" << endl;

}

bool Animal::isvalid() {
    return false;
}

bool Animal::validateWeight(const float weight) {
    return false;

}
