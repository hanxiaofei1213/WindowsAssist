#pragma once
#include <QObject>
#include <QVector>
#include "MemoData.h"

class MemoManager : public QObject {
    Q_OBJECT

public:
    MemoManager(QObject* parent);
    ~MemoManager();

    bool saveRecord(const MemoData& data);
    bool deleteRecord(const MemoData& data);
    QVector<MemoData> listAllData() const;
};

