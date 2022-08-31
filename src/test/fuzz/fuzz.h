// Copyright (c) 2009-2019 The Brocoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BROCOIN_TEST_FUZZ_FUZZ_H
#define BROCOIN_TEST_FUZZ_FUZZ_H

#include <stdint.h>
#include <vector>


void test_one_input(std::vector<uint8_t> buffer);

#endif // BROCOIN_TEST_FUZZ_FUZZ_H
