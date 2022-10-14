#include "ShortcutFunction.h"
#include <windows.h>
#include "utils/KeyboardEvent.h"

ShortcutFunction::ShortcutFunction() {
    initMap();
}

ShortcutFunction::~ShortcutFunction() {

}

ShortcutProcessor ShortcutFunction::getProcessor(ShortcutFuncId id) {
    if (m_mapShortcutFunc.find(id) == m_mapShortcutFunc.end()) {
        return nullptr;
    }

    return m_mapShortcutFunc[id];
}

void ShortcutFunction::initMap() {
    m_mapShortcutFunc[ShortcutFuncId::CLOSE_WINDOW] = std::bind(&ShortcutFunction::closeWindowProcessor, this);
}

bool ShortcutFunction::closeWindowProcessor() {
    int key1 = VK_MENU;
    int key2 = VK_F4;
    KeyboardEvent keyboardEvent({ VK_MENU, VK_F4 });
    keyboardEvent.exec();
    return true;
}
