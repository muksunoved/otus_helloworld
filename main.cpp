#include "lib.h"

#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("\nBuild {}\nHello, World!\n", version());

    return 0;
}
