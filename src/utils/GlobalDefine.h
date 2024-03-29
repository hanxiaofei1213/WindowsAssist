#pragma once

#define QS(s) QString::fromStdWString(L##s)

enum class ShortcutFuncId {
    FUNC_UNKNOWN = 0,
    CLOSE_WINDOW = 1,
    SHOW_HIDE_PROGRAM = 2,
    PRINT_SCREEN = 3,
};

