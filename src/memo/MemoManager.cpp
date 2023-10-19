#include "MemoManager.h"



// question(wangwenxi): 这里是及时写回数据呢？还是最后再写回？
MemoManager::MemoManager(QObject* parent) : QObject(parent) {

    // todo(wangwenxi): 这里应该启动一个计时器

}

MemoManager::~MemoManager() {

}

bool MemoManager::saveRecord(const MemoData& strData)
{
    return true;
}

bool MemoManager::deleteRecord(const MemoData& strData)
{
    return true;
}

QVector<MemoData> MemoManager::listAllData() const
{
    QVector<MemoData> vecData;

    // test(wangwenxi): 测试代码
    vecData.push_back({ "1" });
    vecData.push_back({ "11" });
    vecData.push_back({ "111" });

    return vecData;
}
