// Copyright (c) 2016-2018 The Brocoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BROCOIN_QT_TEST_RPCNESTEDTESTS_H
#define BROCOIN_QT_TEST_RPCNESTEDTESTS_H

#include <QObject>
#include <QTest>

class RPCNestedTests : public QObject
{
    Q_OBJECT

    private Q_SLOTS:
    void rpcNestedTests();
};

#endif // BROCOIN_QT_TEST_RPCNESTEDTESTS_H
