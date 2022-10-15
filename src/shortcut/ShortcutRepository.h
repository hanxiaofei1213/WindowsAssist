#pragma once
#include <vector>
#include "ShortcutData.h"

class ShortcutRepository {
public:
    ShortcutRepository();
    ~ShortcutRepository();
    std::vector<ShortcutData> listAllShortcut();

protected:
    void loadShortcutData();
    void saveShortcutData();

private:
    std::vector<ShortcutData> m_vecShortcutData;
};

