// Copyright 2025 <Heber Ferreira Barra>
#ifndef HEADERS_UPDATERS_FLATPAK_UPDATER_HPP_
#define HEADERS_UPDATERS_FLATPAK_UPDATER_HPP_
#include "../updater.hpp"

class FlatpakUpdater : public Updater {
 public:
    void update();
    void checkAvaliableUpdates();
    ~FlatpakUpdater() {}
};

#endif  // HEADERS_UPDATERS_FLATPAK_UPDATER_HPP_
