// Copyright 2025 <Heber Ferreira Barra>
#ifndef HEADERS_UPDATERS_ZYPPER_UPDATER_HPP_
#define HEADERS_UPDATERS_ZYPPER_UPDATER_HPP_
#include "../updater.hpp"

class ZypperUpdater : public Updater {
 public:
    void update();
    void autoConfirmUpdate();
    void checkAvaliableUpdates();
    ~ZypperUpdater() {}
};

#endif  // HEADERS_UPDATERS_ZYPPER_UPDATER_HPP_
