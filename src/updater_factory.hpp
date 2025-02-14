// Copyright 2025 <Heber Ferreira Barra>
#ifndef SRC_UPDATER_FACTORY_HPP_
#define SRC_UPDATER_FACTORY_HPP_

#include "updater.hpp"
#include <memory>

enum UpdatersNames {
    DUMMY,
    FLATPAK,
    LAZY_NEOVIM,
    RUSTUP,
    ZYPPPER,
    DUMMY_LAST,
};

class UpdaterFactory {
 public:
    UpdaterFactory() {}
    ~UpdaterFactory() {}

    std::unique_ptr<Updater> createUpdater(UpdatersNames updaterName);
};

#endif  // SRC_UPDATER_FACTORY_HPP_

