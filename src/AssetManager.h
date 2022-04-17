#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <SFML/Graphics.hpp>
#include <unordered_map>

class AssetManager {
  public:
    AssetManager(const AssetManager &) = delete;
    AssetManager &operator=(const AssetManager &) = delete;
    static AssetManager &instance() {
        static AssetManager instance;
        return instance;
    }
    void loadFont(const std::string &name, const std::string &filename);
    sf::Font &getFont(const std::string &name);

  private:
    AssetManager() = default;
    std::unordered_map<std::string, sf::Font> _fonts;
};

#endif // ASSETMANAGER_H
