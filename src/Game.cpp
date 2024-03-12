#include <SFML/Graphics.hpp>
#include "Game.h"

void Game::update(sf::Time deltaTime)
{

}

void Game::render(sf::RenderWindow& window)
{
	window.clear();


	window.display(); 
}















//class Game
//{
//public:
//    void update(int deltaMS)
//    {
//        m_mainCharacter->update(deltaMS);
//        m_enemyManager->update(deltaMS);
//    }
//
//    void render()
//    {
//        window.clear();
//
//        m_map->render();
//        m_mainCharacter->render();
//        m_enemyManager->render();
//
//        window.display();
//    }
//
//private:
//    EnemyManager* m_enemyManager;
//};
//
//class EnemyManager
//{
//public:
//
//    void update(int deltaMS)
//    {
//        for (Enemy* enemy : m_enemies)
//        {
//            enemy->update(deltaMS);
//        }
//    }
//
//private:
//
//    std::vector<Enemy*> m_enemies;
//};
//
//class Enemy
//{
//public:
//    void updatePosition(int deltaTime)
//    {
//        if (SFML::isKeyPressed(->))
//            posX += speedXMetersPerSecond * deltaTime * MS_TO_SECONDS;
//    }
//
//private:
//    float posX, posY;
//    float speedXMetersPerSecond;
//    float speedYMetersPerSecond;
//
//}

