// Copyright 2025 <Heber Ferreira Barra>
#ifndef HEADERS_UPDATERS_PNPM_UPDATER_HPP_
#define HEADERS_UPDATERS_PNPM_UPDATER_HPP_
#include "../updater.hpp"

class PnpmUpdater: public Updater {
 public:
    void update();
    void checkAvaliableUpdates();
    ~PnpmUpdater() {}
};

#endif  // HEADERS_UPDATERS_PNPM_UPDATER_HPP_

