#include <iostream>
#include <vector>
#include "Transaction.h"
#include "FraudDetector.h"
#include "Utils.h"

using namespace std;


int main()
{
    // Example suspicious targets
    std::vector<long long> suspiciousTargets = {10000, 11000};
    long long timeWindow = 15; // minutes

    FraudDetector detector(suspiciousTargets, timeWindow);

    Transaction("T1", "Acc1", 4000, parseTime("12:01"));

    // Example transactions
    // std::vector<Transaction> transactions = {
    //     Transaction("T1", "Acc1", 4000, parseTime("12:01")),
    //     Transaction("T2", "Acc2", 6000, parseTime("12:02")),
    //     Transaction("T3", "Acc3", 2000, parseTime("13:00")),
    //     Transaction("T4", "Acc4", 8000, parseTime("13:02")),
    //     Transaction("T5", "Acc5", 3000, parseTime("12:10"))};

    // // Batch detection
    // auto suspiciousPairs = detector.detectSuspiciousPairs(transactions);

    // if (suspiciousPairs.empty())
    // {
    //     std::cout << "No suspicious pairs found." << std::endl;
    // }
    // else
    // {
    //     for (auto &p : suspiciousPairs)
    //     {
    //         std::cout << "Suspicious Pair: (" << p.first.transactionId
    //                   << ", " << p.second.transactionId
    //                   << ") -> sum = " << (p.first.amount + p.second.amount)
    //                   << std::endl;
    //     }
    // }

    return 0;
}
