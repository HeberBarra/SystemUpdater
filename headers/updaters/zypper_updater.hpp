// Copyright 2025 <Heber Ferreira Barra>
#ifndef SRC_UPDATERS_ZYPPER_UPDATER_HPP_
#define SRC_UPDATERS_ZYPPER_UPDATER_HPP_
#include "../updater.hpp"

class ZypperUpdater : public Updater {
 public:
    void update();
    ~ZypperUpdater() {}
};

#endif  // SRC_UPDATERS_ZYPPER_UPDATER_HPP_
