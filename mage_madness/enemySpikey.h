#pragma once
#include "entity_management.h"
#include "player.h"
#include <SFML/Graphics.hpp>
#include <random>

enum class SpikeyState {
    Travelling,
    Patrolling,
    Following
};

class EnemySpikey : public Entity
{
protected:
    std::shared_ptr<Player> _player;
    float _speed;
    float _length;
    sf::Vector2f _direction;
    SpikeyState _currState;
    sf::Vector2f _randomPos;
    float _range;

public:

    //Constructor
    EnemySpikey(std::shared_ptr<Player> &player);

    void Update(const float& dt) override;
    void Render(sf::RenderWindow& window) override;

    sf::Vector2f generateNewPoint();

};