#include "ShortcutFunction.h"
#include <windows.h>
#include "utils/KeyboardEvent.h"
#include "WindowsAssist.h"

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
    m_mapShortcutFunc[ShortcutFuncId::SHOW_HIDE_PROGRAM] = std::bind(&ShortcutFunction::showHideProgram, this);
}

bool ShortcutFunction::closeWindowProcessor() {
    int key1 = VK_MENU;
    int key2 = VK_F4;
    KeyboardEvent keyboardEvent({ VK_MENU, VK_F4 });
    keyboardEvent.exec();
    return true;
}

bool ShortcutFunction::showHideProgram() {
    WindowsAssist* pAssist = WindowsAssist::self();
    if (!pAssist) {
        return false;
    }

    bool bNeedShow = !pAssist->isVisible() || pAssist->isMinimized();
    if (bNeedShow) {
        pAssist->showNormal();
    } else {
        pAssist->hide();
    }

    return true;
}
