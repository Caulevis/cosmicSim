#include <SFML/Graphics.hpp>
#include <iostream>
#include "corps.h"
#include <string>

using namespace std;

void Corps::ajouterUneForce(sf::Vector2f nvl_force){
     force = force + nvl_force;
}

int Corps::GetRayon(){
    return rayon;
}
void Corps::SetRayon(int nv_rayon){
    rayon = nv_rayon;
}
sf::Color Corps::GetColor(){
    return couleur;
}
void Corps::SetColor(sf::Color nvl_couleur){
    couleur = nvl_couleur;
}
sf::Vector2f Corps::GetCoords(){
    return coords;
}
void Corps::SetCoords(sf::Vector2f nvx_coords){
    coords = nvx_coords;
}
sf::Vector2f Corps::GetForce(){
    return force;
}
void Corps::SetForce(sf::Vector2f nvl_force){
    force = nvl_force;
}



void Corps::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    sf::CircleShape le_corps(rayon);
    le_corps.setFillColor(couleur);
    le_corps.setPosition(coords);
    target.draw(le_corps);
}
