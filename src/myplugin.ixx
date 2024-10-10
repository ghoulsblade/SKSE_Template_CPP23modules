module;

#include <Dragon.h>

export module myplugin;

namespace MyPlugin { // for Dragon(..)

export bool MyInitializePlugin(const SKSE::LoadInterface *skse) {
    SKSE::Init(skse);

    // This example prints "Hello, world!" to the Skyrim ~ console.
    // To view it, open the ~ console from the Skyrim Main Menu.
    SKSE::GetMessagingInterface()->RegisterListener([](SKSE::MessagingInterface::Message *message) {
        if (message->type == SKSE::MessagingInterface::kDataLoaded)
            RE::ConsoleLog::GetSingleton()->Print("Hello, modular world!");
            Dragon("Akatosh").PrintName();
    });

    return true;
}

} // namespace MyPlugin
