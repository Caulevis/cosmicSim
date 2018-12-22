#ifndef DEF_CORPS
#define DEF_CORPS

#include <SFML/Graphics.hpp>
#include <string>



class Corps {

    public:

        void ajouterUneForce(sf::Vector2f);


    private:

        int masse;
        int rayon;
        sf::Vector2f coords;
        sf::Vector3f couleur;
        sf::Vector2f force;

};

#endif
