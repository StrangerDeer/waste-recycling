#include "Garbage.h"
Garbage::Garbage(std::string name) : name(std::move(name)) {}
