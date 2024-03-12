#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
    window.setFramerateLimit(60);

    //Game* game = new Game();
    //auto lastTimeMS = //getTimeNow();

    Game* game = new Game();
    sf::Clock deltaClock;

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        sf::Time deltaTime = deltaClock.restart();

        sf::Texture texture;
        texture.loadFromFile("sprites")

        /*game->update(deltaTime);
        game->render(window);*/

        //esto va dentro de Game->render();
        window.clear();

        window.display();
    }
}















//int main()
//{
//    Game* game = new Game();
//
//    auto lastTimeMS = //getTimeNow();
//        while (game->wantsExit() == false)
//        {
//            auto timeNowMS = //getTimeNow();
//            auto deltaMS = timeMSNow - lastTimeMS;
//            lastTimeMs = timeNowMS;
//            game->update(deltaMS); // Update input, physcis, etc..
//            game->render();
//        }
//
//
//    return 0;
//}
//
//
//
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