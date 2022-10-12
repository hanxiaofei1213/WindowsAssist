#include "ShortcurService.h"
#include "ShortcutRepository.h"

ShortcurService::ShortcurService(ShortcutRepository* pRepository) : m_pRepository(pRepository) {

}

ShortcurService::~ShortcurService() {

}

// question(wangwenxi): 要不要单独搞一个函数映射的类呢？应该是需要的
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

