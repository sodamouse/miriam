#define MIRIAM_IMPL
#include "miriam.h"

int main(void)
{
    set_log_level(LOG_LEVEL_INFO);

    flog_message(stdout, LOG_LEVEL_INFO, "Using flog");

    log_info("Using log_info");
    log_warning("Using log_warn");
    log_error("Using log_error");
    log_fatal("Using log_fatal");

    return 0;
}
