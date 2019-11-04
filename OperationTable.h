#pragma once

#include <QVector>

#include "OperationContainer.h"
#include "UnaryOperation.h"
#include "BinaryOperation.h"

class OperationTable {
public:
    OperationTable();

    void add(Operation*, int);
    int remove(const QString&);

    bool contains(const QString&) const;
    bool isEmpty() const;
    int columnCount() const;
    int column(const QString&) const;

    Operation* nearest(int priority);
    Operation* current(int priority);

    OperationContainer& operator[](int i) { return operations[i]; }
    const OperationContainer& operator[](int i) const { return operations[i]; }
private:
    QVector<OperationContainer> operations;
};
