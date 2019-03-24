#include "lib.h"

#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("\nBuild {}\n Hello, World!\n", version());

    return 0;
}
