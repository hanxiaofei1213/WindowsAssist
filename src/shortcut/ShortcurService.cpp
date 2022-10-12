#include "ShortcurService.h"
#include "ShortcutRepository.h"

ShortcurService::ShortcurService(ShortcutRepository* pRepository) : m_pRepository(pRepository) {

}

ShortcurService::~ShortcurService() {

}

// question(wangwenxi): Ҫ��Ҫ������һ������ӳ������أ�Ӧ������Ҫ��
bool ShortcurService::registerShortcut(const ShortcutData& shortcut) {
    return false;
}

bool ShortcurService::unRegisterShortcut(const ShortcutData& shortcut) {
    return false;
}

std::vector<ShortcutData> ShortcurService::listAllShortcut() {
    if (!m_pRepository) {
        return {};
    }

    return m_pRepository->listAllShortcut();
}

