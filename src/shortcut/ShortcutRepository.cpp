#include "ShortcutRepository.h"
#include "utils/GlobalDefine.h"

ShortcutRepository::ShortcutRepository() {
    loadShortcutData();
}

ShortcutRepository::~ShortcutRepository() {
    saveShortcutData();
}

std::vector<ShortcutData> ShortcutRepository::listAllShortcut() {
    return m_vecShortcutData;
}

void ShortcutRepository::loadShortcutData() {
    m_vecShortcutData.push_back({ 0, ShortcutFuncId::CLOSE_WINDOW, "Esc", QS("关闭窗口")});
    m_vecShortcutData.push_back({ 1, ShortcutFuncId::SHOW_HIDE_PROGRAM, "Alt+1", QS("展示主界面")});
}

void ShortcutRepository::saveShortcutData() {

}
