#pragma once
#include <QObject>

class MemoManager : public QObject {
    Q_OBJECT

public:
    MemoManager(QObject* parent);
    ~MemoManager();

    bool saveRecord(const QString& strRecord);
    bool deleteRecord(const QString& strRecord);

};

