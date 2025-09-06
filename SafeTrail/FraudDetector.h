#ifndef FRAUDDETECTOR_H
#define FRAUDDETECTOR_H

#include "Transaction.h"
#include <vector>
#include <string>

class FraudDetector {
public:
    FraudDetector(const std::vector<long long>& suspiciousTargets, long long timeWindow);

    // Add a transaction to the system (for streaming mode)
    void addTransaction(const Transaction& tx);

    // Check suspicious pairs in batch mode
    std::vector<std::pair<Transaction, Transaction>> detectSuspiciousPairs(
        const std::vector<Transaction>& transactions
    );

    // For streaming mode, detect pairs involving the latest added transaction
    std::vector<std::pair<Transaction, Transaction>> detectSuspiciousStreaming();

private:
    std::vector<long long> targets;
    long long window;

    // You may want internal data structures here
};

#endif
