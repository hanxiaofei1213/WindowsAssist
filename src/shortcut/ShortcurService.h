#pragma once
#include <vector>
#include "ShortcutData.h"

class ShortcutRepository;
class ShortcurService {
public:
    ShortcurService(ShortcutRepository* pRepository);
    ~ShortcurService();

    bool registerShortcut(const ShortcutData& shortcut);
    bool unRegisterShortcut(const ShortcutData& shortcut);
    std::vector<ShortcutData> listAllShortcut();


private:
    ShortcutRepository* m_pRepository = nullptr;

};

