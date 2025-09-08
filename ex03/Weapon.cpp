#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
    return _type;
}

void Weapon::setType(const std::string& newType) {
    _type = newType;
}