#include "TestClass.h"
#include "shortcut/ShortcutFunction.h"
#include "shortcut/ShortcutRepository.h"
#include "shortcut/ShortcutService.h"
#include "shortcut/ShortcutData.h"

void TestClass::test0() {
    QVERIFY(true);
}

void TestClass::test_ShortcutService_registerShortcut() {
    ShortcutRepository repository;
    ShortcutFunction function;
    ShortcutService service(&repository, &function);
    QCOMPARE(service.registerShortcut({}), false);
    ShortcutData closeWindowShortCut = { 0, ShortcutFuncId::CLOSE_WINDOW, QS("¹Ø±Õ´°¿Ú"), "Esc" };
    QCOMPARE(service.registerShortcut(closeWindowShortCut), true);
}

void TestClass::test_ShortcutFunction_getProcessor() {
    ShortcutFunction shortcutFunction;
    QVERIFY(shortcutFunction.getProcessor(ShortcutFuncId::FUNC_UNKNOWN) == nullptr);
    QVERIFY(shortcutFunction.getProcessor(ShortcutFuncId::CLOSE_WINDOW) != nullptr);
}
