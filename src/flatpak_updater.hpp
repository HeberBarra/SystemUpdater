// Copyright 2025 <Heber Ferreira Barra>
#ifndef SRC_FLATPAK_UPDATER_HPP_
#define SRC_FLATPAK_UPDATER_HPP_
#include "updater.hpp"

class FlatpakUpdater : public Updater {
 public:
    void update();
    ~FlatpakUpdater() {}
};

#endif  // SRC_FLATPAK_UPDATER_HPP_
