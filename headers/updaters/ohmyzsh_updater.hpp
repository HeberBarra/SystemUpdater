// Copyright 2025 <Heber Ferreira Barra>
#ifndef HEADERS_UPDATERS_OHMYZSH_UPDATER_HPP_
#define HEADERS_UPDATERS_OHMYZSH_UPDATER_HPP_
#include "../updater.hpp"

class OhMyZshUpdater : public Updater {
 public:
    void update();
    void checkAvaliableUpdates();
    ~OhMyZshUpdater(){}
};

#endif  // HEADERS_UPDATERS_OHMYZSH_UPDATER_HPP_

