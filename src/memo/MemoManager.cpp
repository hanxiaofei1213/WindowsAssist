#include "MemoManager.h"



// question(wangwenxi): �����Ǽ�ʱд�������أ����������д�أ�
MemoManager::MemoManager(QObject* parent) : QObject(parent) {

    // todo(wangwenxi): ����Ӧ������һ����ʱ��

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

    // test(wangwenxi): ���Դ���
    vecData.push_back({ "1" });
    vecData.push_back({ "11" });
    vecData.push_back({ "111" });

    return vecData;
}
