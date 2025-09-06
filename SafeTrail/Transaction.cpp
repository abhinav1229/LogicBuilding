#include "Transaction.h"
#include<iostream>

Transaction::Transaction(std::string txId, std::string accId, long long amt, long long ts)
    : transactionId(txId), accountId(accId), amount(amt), timestamp(ts)
{
    
}
