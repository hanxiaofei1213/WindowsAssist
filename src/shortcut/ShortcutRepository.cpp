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
    m_vecShortcutData.push_back({ 0, ShortcutFuncId::CLOSE_WINDOW, "Esc", QS("�رմ���")});
    m_vecShortcutData.push_back({ 1, ShortcutFuncId::SHOW_HIDE_PROGRAM, "Alt+1", QS("չʾ������")});
}

void ShortcutRepository::saveShortcutData() {

}
