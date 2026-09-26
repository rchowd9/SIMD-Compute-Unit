#ifndef COALESCING_MONITOR_HPP
#define COALESCING_MONITOR_HPP

#include <iostream>
#include <iomanip>
#include <cstdint>

class CoalescingMonitor {
private:
    uint64_t total_memory_instructions = 0;
    uint64_t total_uncoalesced_requests = 0;
    uint64_t total_coalesced_bursts     = 0;

public:
    void record_access(bool is_coalesced, uint8_t active_lanes_count) {
        if (active_lanes_count == 0) return;

        total_memory_instructions++;
        total_uncoalesced_requests += active_lanes_count;

        if (is_coalesced) {
            total_coalesced_bursts += 1;
        } else {
            total_coalesced_bursts += active_lanes_count;
        }
    }

    void print_summary() const {
        std::cout << "\n============================================\n";
        std::cout << "   MEMORY COALESCING PERFORMANCE SUMMARY    \n";
        std::cout << "============================================\n";
        std::cout << "Total Vector Memory Operations : " << total_memory_instructions << "\n";
        std::cout << "Raw Scalar Memory Requests    : " << total_uncoalesced_requests << "\n";
        std::cout << "Actual Issued Memory Bursts   : " << total_coalesced_bursts << "\n";

        if (total_uncoalesced_requests > 0) {
            double efficiency = (1.0 - (double)total_coalesced_bursts / total_uncoalesced_requests) * 100.0;
            double compression = (double)total_uncoalesced_requests / total_coalesced_bursts;
            std::cout << "Transaction Reduction Rate    : " << std::fixed << std::setprecision(2) << efficiency << "%\n";
            std::cout << "Memory Bus Bandwidth Gain     : " << std::fixed << std::setprecision(2) << compression << "x\n";
        }
        std::cout << "============================================\n\n";
    }
};

#endif // COALESCING_MONITOR_HPP