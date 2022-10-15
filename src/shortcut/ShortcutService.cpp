#include "ShortcutService.h"
#include "ShortcutRepository.h"
#include "ShortcutFunction.h"
#include "QHotkey/QHotkey/QHotKey"

ShortcutService::ShortcutService(ShortcutRepository* pRepository, ShortcutFunction* pShortcutFunction) : m_pRepository(pRepository), m_pFunction(pShortcutFunction) {

}

ShortcutService::~ShortcutService() {

}

bool ShortcutService::registerShortcut(const ShortcutData& shortcut) {
    if (!shortcut.isValid() || !m_pFunction) {
        return false;
    }

    QHotkey* hotkey = new QHotkey(this);
    bool bSuccess = hotkey->setShortcut(QKeySequence(shortcut.m_strShortCut), true);
    if (!bSuccess) {
        return false;
    }

    connect(hotkey, &QHotkey::activated, m_pFunction->getProcessor(shortcut.m_nFuncId));
    return true;
}

bool ShortcutService::unRegisterShortcut(const ShortcutData& shortcut) {
    return false;
}

std::vector<ShortcutData> ShortcutService::listAllShortcut() {
    if (!m_pRepository) {
        return {};
    }

    return m_pRepository->listAllShortcut();
}

