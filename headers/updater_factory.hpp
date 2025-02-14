// Copyright 2025 <Heber Ferreira Barra>
#ifndef HEADERS_UPDATER_FACTORY_HPP_
#define HEADERS_UPDATER_FACTORY_HPP_

#include "updater.hpp"
#include <memory>

enum UpdatersNames {
    DUMMY,
    FLATPAK,
    LAZY_NEOVIM,
    PNPM,
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

#endif  // HEADERS_UPDATER_FACTORY_HPP_

