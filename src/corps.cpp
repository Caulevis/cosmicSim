#include <SFML/Graphics.hpp>
#include <iostream>
#include "corps.h"
#include <string>

using namespace std;

void Corps::ajouterUneForce(sf::Vector2f nvl_force){
    force = force + nvl_force;
}
