
import myplugin;

namespace MyPlugin { // for MyInitializePlugin(..)
    SKSEPluginLoad(const SKSE::LoadInterface* skse) {
        return MyInitializePlugin(skse);
    }
}
