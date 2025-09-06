#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

struct Transaction {
    std::string transactionId;
    std::string accountId;
    long long amount;
    long long timestamp; // store as UNIX epoch or minutes from start of day

    Transaction(std::string txId, std::string accId, long long amt, long long ts);
};

#endif
