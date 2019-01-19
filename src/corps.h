#ifndef DEF_CORPS
#define DEF_CORPS

#include <SFML/Graphics.hpp>
#include <string>
// <Drawable.hpp>
//#include


class Corps : public sf::Drawable{

    public:

        void ajouterUneForce(sf::Vector2f);
        int GetRayon();
        void SetRayon(int);
        sf::Color GetColor();
        void SetColor(sf::Color);
        sf::Vector2f GetCoords();
        void SetCoords(sf::Vector2f);
        sf::Vector2f GetForce();
        void SetForce(sf::Vector2f);


    private:

        int masse = 100;
        int rayon = 100;
        sf::Vector2f coords;
        sf::Color couleur;
        sf::Vector2f force;

        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};

#endif
