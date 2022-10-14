#pragma once
#include <map>
#include <functional>
#include "utils/GlobalDefine.h"

using ShortcutProcessor = std::function<bool(void)>;

class ShortcutFunction {
public:
    ShortcutFunction();
    ~ShortcutFunction();

    ShortcutProcessor getProcessor(ShortcutFuncId id);

protected:
    void initMap();

    bool closeWindowProcessor();

private:
    std::map<ShortcutFuncId, ShortcutProcessor> m_mapShortcutFunc;

};

