// Copyright 2025 <Heber Ferreira Barra>

#include <memory>
#include "../headers/updater.hpp"
#include "../headers/updater_factory.hpp"

void runAllModules(UpdaterFactory updaterFactory) {
    std::unique_ptr<Updater> updater;
    for (int value = DUMMY + 1; value != DUMMY_LAST; value++) {
        UpdatersNames enumValue = static_cast<UpdatersNames>(value);
        updater = updaterFactory.createUpdater(enumValue);
        updater->update();
    }
}

int main() {
    UpdaterFactory updaterFactory;
    runAllModules(updaterFactory);

    return 0;
}
