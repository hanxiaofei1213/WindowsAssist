#pragma once
#include <vector>
#include <QObject>
#include "ShortcutData.h"

class ShortcutRepository;
class ShortcutFunction;
class ShortcutService : public QObject {
    Q_OBJECT

public:
    ShortcutService(ShortcutRepository* pRepository, ShortcutFunction* pShortcutFunction);
    ~ShortcutService();

    bool registerShortcut(const ShortcutData& shortcut);
    bool unRegisterShortcut(const ShortcutData& shortcut);
    std::vector<ShortcutData> listAllShortcut();


private:
    ShortcutRepository* m_pRepository = nullptr;
    ShortcutFunction* m_pFunction = nullptr;
};

