#include <iostream>
#include <windows.h>

int main() {
    ULARGE_INTEGER freeBytesAvailable, totalNumberOfBytes, totalNumberOfFreeBytes;

    if (GetDiskFreeSpaceEx(NULL, &freeBytesAvailable, &totalNumberOfBytes, &totalNumberOfFreeBytes)) {
        // Convert bytes to GB (1 GB = 1024 * 1024 * 1024 bytes)
        double totalSpaceGB = totalNumberOfBytes.QuadPart / (1024.0 * 1024 * 1024);
        double freeSpaceGB = freeBytesAvailable.QuadPart / (1024.0 * 1024 * 1024);

        std::cout << "Total disk space: " << totalSpaceGB << " GB" << std::endl;
        std::cout << "Free disk space: " << freeSpaceGB << " GB" << std::endl;
    } else {
        std::cerr << "Failed to retrieve disk space information." << std::endl;
    }

    return 0;
}

