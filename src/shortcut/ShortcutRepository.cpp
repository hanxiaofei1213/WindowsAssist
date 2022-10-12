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
    m_vecShortcutData.push_back({ 0, ShortcutFuncId::CLOSE_WINDOW, QS("¹Ø±Õ´°¿Ú"), "Esc" });
}

void ShortcutRepository::saveShortcutData() {

}
